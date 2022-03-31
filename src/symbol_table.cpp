#include "symbol_table.h"
#include <iostream>
#include <unordered_map>
#include <sys/stat.h>
#include <sys/types.h>
using namespace std;

// global symbol table initiation
void init_symtable()
{
    sym_table_t *curr = (&GST);
    global_scope_table.insert({0, curr});
}

//make files
void dump_symtable()
{
    // symboltable directory
    int dir = system("mkdir -p symtable_dump"); 
    if (dir < 0)
        cout << "ERROR: DIRECTORY NOT CREATED" << endl; 
    for (auto table : global_scope_table)
    {
        string filename = "symtable_dump/scope_" + to_string(table.first) + ".csv";

        // c_str: convert string to char* and return pointer
        FILE *out = fopen(filename.c_str() , "w");
        fprintf(out, "name, type, size, initialised, scope\n");

        // for table entry
        for (auto entry : (*table.second))
        {
            fprintf(out, "%s,%s,%d,%d,%d\n", entry.second->key.c_str(), entry.second->type.c_str(), entry.second->size, entry.second->init, entry.second->scope);
        }
    }

    // make struct symbol table
    for(auto structtable : struct_symbol_tables){
        string filename = "symtable_dump/" + structtable.first + ".csv";

        // c_str: convert string to char* and return pointer
        FILE *out = fopen(filename.c_str() , "w");
        fprintf(out, "name, type, size\n");

        // for table entry
        for (auto entry : (*structtable.second))
        {
            fprintf(out, "%s,%s,%d\n", entry.second->key.c_str(), entry.second->type.c_str(), entry.second->size);
        }
    }
}

// make new entry
tEntry *entry(string key, string type, int init, int size, int scope)
{
    tEntry *new_entry = new tEntry();
    new_entry->type = type, new_entry->key = key, new_entry->size = size, new_entry->scope = scope, new_entry->init = init;
    return new_entry;
}

// for struct new entry
tEntry *make_struct_entry(string key, string type, int size)
{
    tEntry *s_entry = new tEntry();
    s_entry->key = key, s_entry->size = size, s_entry->type = type;
    return s_entry;
}

// adding symboltable to global symbol table
sym_table_t *insert_sym_table(int scope)
{
    sym_table_t *new_t = new sym_table_t();
    global_scope_table.insert({scope, new_t});
    return new_t;
}

// insert structs in table
sym_table_t *insert_struct_sym_table(std::string name)
{
    sym_table_t *new_t = new sym_table_t();
    struct_symbol_tables.insert({name, new_t});
    return new_t;
}

// insert entry in using scope 
void insert_entry(string key, string type, int init, int size, int scope)
{
    sym_table_t *lookup_table;

    // find scope
    if (global_scope_table.find(scope) != global_scope_table.end())
    {
        auto t = global_scope_table.find(scope);
        lookup_table = t->second;
    }

    // if no scope found
    else if (global_scope_table.find(scope) == global_scope_table.end())
    {
        lookup_table = insert_sym_table(scope);
    }

    // insert new entry
    tEntry *new_entrys = entry(key, type, init, size, scope);
    lookup_table->insert({key, new_entrys});
    return;
}


// insert entry using string in struct
void insert_struct_entry(string struct_name, string key, string type, int size)
{
    sym_table_t *struct_lookup;

    // find struct 
    if (struct_symbol_tables.find(struct_name) != struct_symbol_tables.end())
    {
        auto t = struct_symbol_tables.find(struct_name);
        struct_lookup = t->second;
    }

    // if no struct found
    else if (struct_symbol_tables.find(struct_name) == struct_symbol_tables.end())
    {
        struct_lookup = insert_struct_sym_table(struct_name);
    }

    // insert new entry in struct
    tEntry *new_entrys = make_struct_entry(key, type, size);
    struct_lookup->insert({key, new_entrys});
}


// find entry in existing symbol table
tEntry *find_entry(stack<int> s, string key)
{
    sym_table_t *lookup_table;

    while (!s.empty())
    {
        // not in this scope
        if (global_scope_table.find(s.top()) == global_scope_table.end())
        {
            s.pop();
            continue;
        }

        if (global_scope_table.find(s.top()) != global_scope_table.end())
        {
            auto layer = global_scope_table.find(s.top());
            lookup_table = layer->second;

            if (lookup_table->find(key) != lookup_table->end())
            {
                auto layersecond = lookup_table->find(key);
                return layersecond->second;
            }
            else if (lookup_table->find(key) == lookup_table->end())
            {
                s.pop();
            }
        }
    }
    return NULL;
}

// to get tentry from struct
tEntry *find_struct_entry(string struct_name, string key)
{
    if (struct_symbol_tables.find(struct_name) != struct_symbol_tables.end())
    {
        auto table = struct_symbol_tables.find(struct_name);
        auto struct_t = table->second;
        
        if (struct_t->find(key) != struct_t->end()){
            auto table1 = struct_t->find(key);
            return table1->second;
        }
    }
    return NULL;
}

// to find type
string find_type(stack<int> st, string key)
{
    tEntry *entry = find_entry(st, key);
    if (entry == NULL)
        return "";
    else 
        return entry->type;
    return entry->type;
}

// find struct size
int struct_size(string s)
{
    int size = 0;
    if (struct_symbol_tables.find(s) != struct_symbol_tables.end())
    {
        auto table = struct_symbol_tables.find(s);
        sym_table_t *struct_t;
        struct_t = table->second;
        for (auto table2 : *struct_t)
        {
            size += table2.second->size;
        }
    }
    return size;
}

// basic functions
void init_basic_func()
{
    FUNC_PARAM.insert(make_pair("void printf", "char *"));
}

// for the size of the types
int getSize(string s)
{
    unordered_map<string, int> m;
    m["char"] = 0;
    m["int"] = 1;
    m["long int"] = 2;
    m["unsigned char"] = 3;
    m["long"] = 4;
    m["unsigned int"] = 5;
    m["unsigned long int"] = 6;
    m["unsigned long"] = 7;
    m["short"] = 8;
    m["short int"] = 9;
    m["unsigned short int"] = 10;
    m["float"] = 11;
    m["double"] = 12;
    m["signed int"] = 13;
    m["string"] = 14;
    m["bool"] = 15;

    if (s.substr(0, 6) == "struct")
        return struct_size(s);

    switch (m[s])
    {
    case 0:
        return sizeof(char);
        break;
    case 1:
        return sizeof(int);
        break;
    case 2:
        return sizeof(long int);
        break;
    case 3:
        return sizeof(unsigned char);
        break;
    case 4:
        return sizeof(long);
        break;
    case 5:
        return sizeof(unsigned int);
        break;
    case 6:
        return sizeof(unsigned long int);
        break;
    case 7:
        return sizeof(unsigned long);
        break;
    case 8:
        return sizeof(short);
        break;
    case 9:
        return sizeof(short int);
        break;
    case 10:
        return sizeof(unsigned short int);
        break;
    case 11:
        return sizeof(float);
        break;
    case 12:
        return sizeof(double);
        break;
    case 13:
        return sizeof(signed int);
        break;
    case 14:
        return sizeof(char *);
        break;
    case 15:
        return sizeof(bool);
        break;
    default:
        return 10;
    }
}

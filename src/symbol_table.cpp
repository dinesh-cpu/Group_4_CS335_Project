// symbol table
 
#include <bits/stdc++.h>
#include "symbol_table.h"

using namespace std;
 
// global symbol table initiation
void init_symtable()
{
    sym_table_t *curr = (&GST);
    global_scope_table.insert({0, curr});
    insert_entry("internal_node","key",1,8,-1,0);
    insert_entry("__IF__","key",1,8,-1,0);
    insert_entry("__GOTO__","key",1,8,-1,0);
    insert_entry("__EMPTY__","key",1,8,-1,0);
    insert_entry("__STAR__","key",1,8,-1,0);
    insert_entry("__RETURN__","key",1,8,-1,0);
    insert_entry("__FUNC__","key",1,8,-1,0);
    insert_entry("__CALL__","key",1,8,-1,0);
    insert_entry("__PRINTF__","key",1,8,-1,0);
    insert_entry("__SCANF__","key",1,8,-1,0);
}

//make files
void dump_symtable()
{
    // symboltable directory
    int dir = system("mkdir -p symtable_dump"); 
    if (dir < 0)
        cout << "Error in creating directory" << endl; 
    for (auto table : global_scope_table)
    {
        string filename = "symtable_dump/scope_" + to_string(table.first) + ".csv";

        fstream outfile;
        outfile.open(filename, fstream::out);
        outfile << "name, type, size, offset, initialised, scope" << endl;

        // for table entry
        for (auto entry : (*table.second))
        {
            outfile << entry.second->key << ", " << entry.second->type << ", " << entry.second->size << ", " << entry.second->offset << ", " << entry.second->init << ", "<< entry.second->scope << endl;
        }
    }

    // make struct symbol table
    for(auto structtable : struct_symbol_tables){
        string filename = "symtable_dump/" + structtable.first + ".csv";

        fstream struct_out;
        struct_out.open(filename, fstream::out);
        struct_out << "name, type, offset, size" << endl;

        // for table entry
        for (auto entry : (*structtable.second))
        {
            struct_out << entry.second->key << ", " << entry.second->type << ", " << entry.second->offset << ", " << entry.second->size << endl;
        }
    }
}

// make new entry
tEntry *entry(string key, string type, int init, int size, long offset ,int scope)
{
    tEntry *new_entry = new tEntry();
    new_entry->type = type, new_entry->key = key, new_entry->size = size, new_entry->offset = offset ,new_entry->scope = scope, new_entry->init = init;
    return new_entry;
}

// for struct new entry
tEntry *make_struct_entry(string key, string type, long offset ,int size)
{
    tEntry *s_entry = new tEntry();
    s_entry->key = key, s_entry->size = size, s_entry->offset = offset ,s_entry->type = type;
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
void insert_entry(string key, string type, int init, int size, long offset , int scope)
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
    tEntry *new_entrys = entry(key, type, init, size, offset ,scope);
    lookup_table->insert({key, new_entrys});
    return;
}


// insert entry using string in struct
void insert_struct_entry(string struct_name, string key, string type, long offset ,int size)
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
    tEntry *new_entrys = make_struct_entry(key, type, offset ,size);
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
            if((table2.second->size)%4 == 0){
                size += table2.second->size;
            }
            else {
                size += (table2.second->size - (table2.second->size)%4) + 4;
            } 
        }
    }
    return size;
}

// basic functions
void init_basic_func()
{
    FUNC_PARAM.insert(make_pair("void printf", "char *"));
}

void tokenize_func_args(string const &str, const char delim, vector<string> &out){
    size_t start;
    size_t end = 0;
 
    while ((start = str.find_first_not_of(delim, end)) != string::npos){
        end = str.find(delim, start);
        out.push_back(str.substr(start, end - start));
    }
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

void align_offset(int size){
    offset += size;
    if( offset%4 == 0)
        return;
    else{
        offset = (offset - (offset%4)) + 4; 
    }
}

void align_struct_offset(int size){
    struct_offset+=size;
    if(struct_offset%4 == 0)
        return;
    else{
        struct_offset = (struct_offset - (struct_offset%4)) + 4; 
    }
}
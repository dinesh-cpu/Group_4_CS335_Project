#include "symbol_table.h"
#include <iostream>
#include <unordered_map>
#include <sys/stat.h>
#include <sys/types.h>
using namespace std;

void init_symtable()
{
    sym_table_t *curr = (&GST);
    global_scope_table.insert({0, curr});
}

void dump_symtable()
{
    int dir = system("mkdir -p symtable_dump"); // Creating a directory
    if (dir < 0)
        cout << "ERROR: DIRECTORY NOT CREATED" << endl; // error msg when directory can not be created
    for (auto table : global_scope_table)
    {
        string filename = "symtable_dump/scope_" + to_string(table.first) + ".csv";

        FILE *out = fopen(filename.c_str(), "w");
        fprintf(out, "name, type, size, init, scope\n");

        for (auto entry : (*table.second))
        {
            fprintf(out, "%s,%s,%d,%d,%d\n", entry.second->key.c_str(), entry.second->type.c_str(), entry.second->size, entry.second->init, entry.second->scope);
        }
    }
}

tEntry *entry(string key, string type, int init, int size, int scope)
{
    tEntry *new_entry = new tEntry();
    new_entry->type = type, new_entry->key = key, new_entry->size = size, new_entry->scope = scope, new_entry->init = init;
    return new_entry;
}
tEntry *make_struct_entry(std::string key, std::string type, int size)
{

    tEntry *s_entry = new tEntry();
    s_entry->key = key, s_entry->size = size, s_entry->type = type;
    return s_entry;
}
sym_table_t *insert_sym_table(int scope)
{
    sym_table_t *new_t = new sym_table_t();
    global_scope_table.insert({scope, new_t});
    return new_t;
}
sym_table_t *insert_struct_sym_table(std::string name)
{
    sym_table_t *new_t = new sym_table_t();
    struct_symbol_tables.insert({name, new_t});
    return new_t;
}

void insert_entry(string key, string type, int init, int size, int scope)
{
    sym_table_t *lookup_table;
    if (global_scope_table.find(scope) != global_scope_table.end())
    {
        auto t = global_scope_table.find(scope);
        lookup_table = t->second;
    }
    if (global_scope_table.find(scope) == global_scope_table.end())
    {
        lookup_table = insert_sym_table(scope);
    }
    tEntry *new_ = entry(key, type, init, size, scope);
    lookup_table->insert({key, new_});
    return;
}

void insert_struct_entry(std::string struct_name, std::string key, std::string type, int size)
{
    sym_table_t *struct_;
    if (struct_symbol_tables.find(struct_name) != struct_symbol_tables.end())
    {
        auto t = struct_symbol_tables.find(struct_name);
        struct_ = t->second;
    }
    if (struct_symbol_tables.find(struct_name) == struct_symbol_tables.end())
    {
        struct_ = insert_struct_sym_table(struct_name);
    }
    tEntry *new_ = make_struct_entry(key, type, size);
    struct_->insert({key, new_});
}

tEntry *find_entry(stack<int> stk, string key)
{
    sym_table_t *lookup_table;

    while (!stk.empty())
    {
        if (global_scope_table.find(stk.top()) == global_scope_table.end())
        {
            stk.pop();
            continue;
        }
        if (global_scope_table.find(stk.top()) != global_scope_table.end())
        {
            auto t = global_scope_table.find(stk.top());
            lookup_table = t->second;

            if (lookup_table->find(key) != lookup_table->end())
            {
                auto tt = lookup_table->find(key);
                return tt->second;
            }
            else if (lookup_table->find(key) == lookup_table->end())
            {
                stk.pop();
            }
        }
    }
    return NULL;
}

tEntry *find_struct_entry(std::string struct_name, std::string key)
{
    sym_table_t *struct_t;
    auto table = struct_symbol_tables.find(struct_name);
    if (table != struct_symbol_tables.end())
    {
        struct_t = table->second;
        auto table = struct_t->find(key);
        if (table != struct_t->end())
            return table->second;
    }
    return NULL;
}

string find_type(stack<int> st, string key)
{
    tEntry *entry = find_entry(st, key);
    if (entry == NULL)
        return string();
    return entry->type;
}

int struct_size(string s)
{
    int size = 0;
    sym_table_t *struct_t;
    auto table = struct_symbol_tables.find(s);
    if (table != struct_symbol_tables.end())
    {
        struct_t = table->second;
        for (auto table2 : *struct_t)
        {
            size += table2.second->size;
        }
    }
    return size;
}

void init_basic_func()
{
    FUNC_PARAM.insert(make_pair("void printf", "char *"));
}

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
    default:
        return 10;
    }
}

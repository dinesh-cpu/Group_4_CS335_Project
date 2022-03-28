#include <string>
#include <stack>
#include <unordered_map>

#define sym_table_t std::unordered_map<std::string, tEntry *>

typedef struct table_entry
{
    int size;
    int scope;
    int init;
    std::string key;
    std::string type;
} tEntry;

extern int curr_scope;
extern int num_scopes;
extern std::stack<int> scope_st;
extern std::string func_args;
extern std::string func_params;

extern sym_table_t sym_table;
extern std::unordered_map<int, sym_table_t *> global_scope_table;
extern std::unordered_map<std::string, tEntry *> GST;
extern std::unordered_map<int, std::string> entry_map;
extern sym_table_t *curr;
extern std::unordered_map<std::string, std::string> FUNC_PARAM;

extern std::string struct_name;
extern std::unordered_map<std::string, sym_table_t *> struct_symbol_tables;

void init_symtable();
void dump_symtable();
sym_table_t *insert_sym_table(int scope);
tEntry *entry(std::string key, std::string type, int init, int size, int scope);
void insert_entry(std::string key, std::string type, int init, int size, int scope);
void insert_struct_entry(std::string struct_name, std::string key, std::string type, int size);
tEntry *find_entry(std::stack<int> st, std::string key);
tEntry *find_struct_entry(std::string struct_name, std::string key);
std::string find_type(std::stack<int> st, std::string key);
int getSize(std::string s);
void init_basic_func();
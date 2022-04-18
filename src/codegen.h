#include "3ac.h"

extern string curr_Func;

extern map<string, vector<string>> assembly_code;
extern map<int, string> basicBlock;

extern vector<quad> parameters;
extern set<tEntry *> global_entry_set;
extern string argument_label;

void push_line(string s);

bool is_array_element(string q);

void load_array_element0(opd q);

void load_array_element1(opd q);

void load_array_element2(opd q);

void load_normal_element0(opd q);

void load_normal_element1(opd q);

void load_normal_element2(opd q);

bool is_parameter(string name);

string get_array_name(string s);

void save_all_registers();

void load_prev_registers();

void print_assembly_code();
void generate_code();

void formBasicBlocks();
int findNext(int addr);
void library_function_implementation();

void prints_implementation();
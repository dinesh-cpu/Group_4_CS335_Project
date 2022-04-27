#include <bits/stdc++.h>
#include "symbol_table.h"
using namespace std;
 
typedef struct opd{
    string s;
    tEntry* entry;
    opd(){}
    opd(string str):
        s(str){}
    opd(string str, tEntry* ptr):
        s(str),
        entry(ptr){}
}opd;

typedef struct quad{
    int line_num;
    string op;
    opd opd1;
    opd opd2;
    opd result;
}quad;

extern vector<quad> global_emit;
extern long long int instruction_num;
extern vector<string> printf_helpers;
extern vector<string> scanf_helpers;
extern opd switch_opd;
extern opd case_opd;

void emit(opd opd1, string op, opd opd2, opd result, int line_num);
opd create_opd(string s,tEntry* entry);

void initialise_3ac();
void dump_emit_list();
string create_tmp_var(string type, int offset, int scope);
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

extern opd IF_opd;
extern opd GOTO_opd;
extern opd empty_opd;
extern opd one_opd;
extern opd zero_opd;
extern opd switch_opd;
extern opd star_opd;
extern opd return_opd;
extern opd func_opd;
extern opd call_opd;
extern opd PRINTF_opd;
extern opd SCANF_opd;

extern vector<quad> global_emit;
extern long long int instruction_num;
extern vector<string> printf_helpers;
extern vector<string> scanf_helpers;

void emit(opd opd1, string op, opd opd2, opd result, int line_num);
opd create_opd(string s,tEntry* entry);

void initialise();
void dump_emit_list();
string create_tmp_var(string type, int offset, int scope);
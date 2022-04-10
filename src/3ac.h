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
extern vector<quad> global_emit;
extern long long int instruction_num;

void emit(opd opd1, string op, opd opd2, opd result, int line_num);
void backpatch(vector<int>list, int line);
opd create_opd(string s,tEntry* entry);

vector<int> merge(vector<int> list1, vector<int> list2);
vector<int> makelist(int line_num);

void initialise();
void dump_emit_list();
string create_tmp_var(string type, int offset, int scope);
#include <bits/stdc++.h>
#include "symbol_table.h"
using namespace std;
 

typedef struct opd{
    opd()
        {}

    opd(string str):
        s(str)
        {}
    opd(string str, tEntry* ptr):
        s(str),
        entry(ptr)
        {}
    
    string s;
    tEntry* entry;
}opd;

typedef struct quad{
    opd opd1;
    string op;
    opd opd2;
    opd result;
    int line_num;
}quad;

void emit(opd opd1, string op, opd opd2, opd result, int line_num);
void backpatch(vector<int>list, int line);
opd create_opd(string s,tEntry* entry);

vector<int> merge(vector<int> list1, vector<int> list2);
vector<int> makelist(int line_num);


string create_tmp_var(string type, int offset, int scope);

extern opd IF_opd,GOTO_opd,empty_opd,one_opd,zero_opd,switch_opd,star_opd,return_opd,func_opd,call_opd;
extern vector<quad>global_emit;
extern long long int instruction_num;

void printemit();

void initialise();

void dump_emit_list();

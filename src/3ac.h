#include <bits/stdc++.h>
#include "symbol_table.h"
using namespace std;

typedef struct quad{
    int line_num;
    string op;
    pair<string, tEntry*> opd1;
    pair<string, tEntry*> opd2;
    pair<string, tEntry*> result;
}quad;

extern vector<quad> global_emit;
extern int emit_line;
extern vector<string> printf_helpers;
extern vector<string> scanf_helpers;

void emit(pair<string, tEntry*> opd1, string op, pair<string, tEntry*> opd2, pair<string, tEntry*> result, int line_num);

void make_ircode();
string ir_variable(string type, int offset, int scope);
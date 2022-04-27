#include <bits/stdc++.h>
#include "3ac.h"
using namespace std;

#define ll long long int
#define pb push_back
opd switch_opd, case_opd;
#define vi vector<int>

vector<quad> global_emit;
ll instruction_num;
int tmp_variable = 0;

opd create_opd(string s, tEntry *entry)
{
    opd tmp;
    tmp.s = s, tmp.entry = entry;
    return tmp;
}

string create_tmp_var(string type, int offset, int scope)
{
    string temp = to_string(tmp_variable);
    string temp_label = "__tmp__" + temp;
    string label = temp_label;
    ++tmp_variable;
    insert_entry(label, type, 1, getSize(type), offset, scope);
    return label;
}

// opd1 opr1 opd2 result
void emit(opd operand_1, string operator_1, opd operand_2, opd result, int line_num)
{
    quad tmp;
    tmp.opd1 = operand_1, tmp.opd2 = operand_2, tmp.result = result, tmp.op = operator_1, tmp.line_num = line_num, global_emit.pb(tmp), instruction_num++;
}

void dump_emit_list()
{
    fstream ir_output;
    ir_output.open("ir_code.txt", fstream::out);

    int i = 0;
    while (i != global_emit.size())
    {
        string temp = to_string(i);
        if (global_emit[i].result.s == "goto")
        {
            ir_output << temp + "     " << global_emit[i].opd1.s << " " << global_emit[i].opd2.s << " " << global_emit[i].op << " 0 " << global_emit[i].result.s << " " << global_emit[i].line_num << endl;
        }

        else if (global_emit[i].opd1.s == "return")
        {
            ir_output << temp + "     " << global_emit[i].opd1.s << " " << global_emit[i].opd2.s << endl;
        }

        else if (global_emit[i].opd1.s == "func")
        {
            ir_output << temp + "     " << global_emit[i].opd1.s << " " << global_emit[i].opd2.s << endl;
        }

        else if (global_emit[i].opd1.s == "call")
        {
            // cout << "call" <<endl;
            ir_output << temp + "     " << global_emit[i].opd1.s << " " << global_emit[i].opd2.s << endl;
        }

        else if (global_emit[i].opd1.s == "printf" && global_emit[i].result.s == "0")
        {
            ir_output << temp + "     " << global_emit[i].opd1.s << " " << global_emit[i].opd2.s << " from ";
            for (int i = printf_helpers.size() - 1; i > 0; i--)
            {
                ir_output << printf_helpers[i] << ", ";
            }
            ir_output << printf_helpers[0] << endl;
        }

        else if (global_emit[i].opd1.s == "scanf")
        {
            ir_output << temp + "     " << global_emit[i].opd1.s << " " << global_emit[i].opd2.s << " from ";

            for (int i = scanf_helpers.size() - 1; i > 0; i--)
            {
                ir_output << scanf_helpers[i] << ", ";
            }
            ir_output << scanf_helpers[0] << endl;
        }

        else if (global_emit[i].opd1.s == "printf")
        {
            ir_output << temp + "     " << global_emit[i].opd1.s << " " << global_emit[i].opd2.s << endl;
        }

        else if (global_emit[i].opd1.s == "*")
        {
            ir_output << temp + "     " << global_emit[i].opd1.s << global_emit[i].result.s << " = " << global_emit[i].opd2.s << endl;
        }

        else if (global_emit[i].result.s == "")
        {
            ir_output << temp + "     " << global_emit[i].opd1.s << " " << global_emit[i].line_num << endl;
        }

        else if (global_emit[i].op == "")
        {
            ir_output << temp + "     " << global_emit[i].result.s << " = " << global_emit[i].opd2.s << endl;
        }

        else
            ir_output << temp + "     " << global_emit[i].result.s << " = " << global_emit[i].opd1.s << " " << global_emit[i].op << " " << global_emit[i].opd2.s << endl;

        i++;
    }
}

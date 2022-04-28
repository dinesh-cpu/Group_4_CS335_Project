#include <bits/stdc++.h>
#include "3ac.h"
using namespace std;

#define pb push_back
#define vi vector<int>

vector<quad> global_emit;
int emit_line;
int tmp_count = 0;

string ir_variable(string type, int offset, int scope)
{
    string temp = to_string(tmp_count);
    string temp_label = "__tmp__" + temp;
    string label = temp_label;
    ++tmp_count;
    insert_entry(label, type, 1, getSize(type), offset, scope);
    return label;
}

// opd1 opr1 opd2 result
void emit(pair<string, tEntry *> operand_1, string operator_1, pair<string, tEntry *> operand_2, pair<string, tEntry *> result, int line_num)
{
    quad tmp;
    tmp.opd1 = operand_1, tmp.opd2 = operand_2, tmp.result = result, tmp.op = operator_1, tmp.line_num = line_num, global_emit.pb(tmp), emit_line++;
}

void make_ircode()
{
    fstream ir_output;
    ir_output.open("ir_code.txt", fstream::out);

    int i = 0;
    while (i != global_emit.size())
    {
        string temp = to_string(i);
        if (global_emit[i].result.first == "goto")
        {
            ir_output << temp + "     " << global_emit[i].opd1.first << " " << global_emit[i].opd2.first << " " << global_emit[i].op << " 0 " << global_emit[i].result.first << " " << global_emit[i].line_num << endl;
        }

        else if (global_emit[i].opd1.first == "return")
        {
            ir_output << temp + "     " << global_emit[i].opd1.first << " " << global_emit[i].opd2.first << endl;
        }

        else if (global_emit[i].opd1.first == "func")
        {
            ir_output << temp + "     " << global_emit[i].opd1.first << " " << global_emit[i].opd2.first << endl;
        }

        else if (global_emit[i].opd1.first == "call")
        {
            // cout << "call" <<endl;
            ir_output << temp + "     " << global_emit[i].opd1.first << " " << global_emit[i].opd2.first << endl;
        }

        else if (global_emit[i].opd1.first == "printf" && global_emit[i].result.first == "0")
        {
            ir_output << temp + "     " << global_emit[i].opd1.first << " " << global_emit[i].opd2.first << " from ";
            for (int i = printf_helpers.size() - 1; i > 0; i--)
            {
                ir_output << printf_helpers[i] << ", ";
            }
            ir_output << printf_helpers[0] << endl;
        }

        else if (global_emit[i].opd1.first == "scanf")
        {
            ir_output << temp + "     " << global_emit[i].opd1.first << " " << global_emit[i].opd2.first << " from ";

            for (int i = scanf_helpers.size() - 1; i > 0; i--)
            {
                ir_output << scanf_helpers[i] << ", ";
            }
            ir_output << scanf_helpers[0] << endl;
        }

        else if (global_emit[i].opd1.first == "*")
        {
            ir_output << temp + "     " << global_emit[i].opd1.first << global_emit[i].result.first << " = " << global_emit[i].opd2.first << endl;
        }

        else if (global_emit[i].result.first == "")
        {
            ir_output << temp + "     " << global_emit[i].opd1.first << " " << global_emit[i].line_num << endl;
        }

        else if (global_emit[i].op == "")
        {
            ir_output << temp + "     " << global_emit[i].result.first << " = " << global_emit[i].opd2.first << endl;
        }

        else
            ir_output << temp + "     " << global_emit[i].result.first << " = " << global_emit[i].opd1.first << " " << global_emit[i].op << " " << global_emit[i].opd2.first << endl;

        i++;
    }
}

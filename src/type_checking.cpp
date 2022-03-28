#include "type_checking.h"
#include "symbol_table.h"
#include <iostream>
using namespace std;

string postfix_expr23(string type)
{
    string type_new = type;
    string temp = type.substr(0, 5);
    string t = "FUNC_";
    if (temp != t)
        return "";
    else
    {
        type_new = type_new.substr(5);
        return type_new;
    }
    return "here_return_will_not_come";
}

string postfix_expr67(string type)
{
    string type_new = type;

    if (!isInteger(type))
    {
        return "";
    }
    else
    {
        return type_new;
    }
    return "here_return_will_not_come";
}

bool isInteger(string type)
{
    if (type == "int" || type == "short" || type == "long" || type == "long long" || type == "long long int" || type == "long int" || type == "short int" || type == "unsigned int" || type == "unsigned short" || type == "unsigned long" || type == "unsigned long long" || type == "unsigned long long int" || type == "unsigned long int" || type == "unsigned short int" || type == "signed int" || type == "signed short" || type == "signed long" || type == "signed long long" || type == "signed long long int" || type == "signed long int" || type == "signed short int")
    {
        return true;
    }

    else
    {
        return false;
    }

    return false;
}

bool isSignedInteger(string type)
{

    if (type == "int" || type == "short" || type == "long" || type == "long long" || type == "long long int" || type == "long long int" || type == "long int" || type == "short int" || type == "signed int" || type == "signed short" || type == "signed long" || type == "signed long long" || type == "signed long long int" || type == "signed long int" || type == "signed short int")
    {
        return true;
    }

    else
    {
        return false;
    }

    return false;
}

bool isFloat(string type)
{
    if (type == "float" || type == "double" || type == "long double" || type == "signed float" || type == "signed double" || type == "signed long double" || type == "unsigned float" || type == "unsigned double" || type == "unsigned long double")
    {
        return true;
    }

    else
    {
        return false;
    }

    return false;
}

bool isSignedFloat(string type)
{
    if (type == "float" || type == "double" || type == "long double" || type == "signed float" || type == "signed double" || type == "signed long double")
    {
        return true;
    }
    else
    {
        return false;
    }
    return false;
}

string unary_expr(string opr, string type, int production)
{
    string type_new;
    unordered_map<string, int> m;

    m["-"] = 0, m["!"] = 1, m["*"] = 2, m["~"] = 3, m["+"] = 4, m["&"] = 5;

    int index = m[opr];
    if (production == 1)
    {
        switch (index)
        {
        case 0:
            if (!(isInteger(type) || isFloat(type)))
                return "";
            break;
        case 1:
            if (!(type == "bool"))
                return "";
            break;
        case 2:
            return type;
            break;
        case 3:
            if (!(type == "bool" || isInteger(type)))
                return "";
            break;
        case 4:
            if (!(isInteger(type) || isFloat(type)))
                return "";
            break;
        case 5:
            type = type + "*";
            break;
        }
        type_new = type;
    }

    string t(type_new);
    return t;
}

string multiplicative_expr(string t1, string t2, char opr)
{
    string type;
    unordered_map<char, int> m;
    m['%'] = 0, m['/'] = 1, m['*'] = 2;
    int index = m[opr];
    switch (index)
    {
    case 0:
        if (isInteger(t1) && isInteger(t2))
        {
            type = "int";
            return type;
        }
        break;
    case 1:
        if (isInteger(t1) && isInteger(t2))
        {
            type = "int";
            return type;
        }
        else
        {
            type = "float";
            return type;
        }
        break;
    case 2:
        if (isInteger(t1) && isInteger(t2))
        {
            type = "int";
            return type;
        }
        else
        {
            type = "float";
            return type;
        }
        break;

    default:
        return "";
    }

    return "";
}

string additive_expr(string t1, string t2, char opr)
{
    int t = t1.size() - 1;
    int w = t2.size() - 1;
    if (isInteger(t1) && isInteger(t2))
    {
        return "int";
    }
    else if (isFloat(t1) && isFloat(t2))
    {
        return "float";
    }

    if ((t1 == "char" && isInteger(t2)) || (t2 == "char" && isInteger(t1)))
    {
        return "char";
    }
    else if ((t2[w] == '*') && isInteger(t1))
    {
        return t2;
    }
    else if ((t1[t] == '*') && isInteger(t2))
    {
        return t1;
    }
    else
    {
        return "";
    }
    return "";
}

string shift_expr(string t1, string t2)
{
    if (isInteger(t1) && isInteger(t2))
    {
        return "True";
    }
    if (!isInteger(t1) || !isInteger(t2))
    {
        return "";
    }
    return "";
}

string relational_expr(string t1, string t2)
{
    int t = t1.length() - 1;
    int w = t2.length() - 1;

    if ((isInteger(t1) || isFloat(t1) || t1 == "char") && (isInteger(t2) || isFloat(t2) || t2 == "char"))
    {
        return "bool";
    }
    else
    {
        if (t1[t] == '*')
        {
            if (t2 != "char" && !isInteger(t2))
            {
                return "";
            }
            if (t2 == "char" || isInteger(t2))
            {
                return "Bool";
            }
        }
        if (t2[w] == '*')
        {
            if (t1 != "char" && !isInteger(t1))
            {
                return "";
            }
            if (t1 == "char" || isInteger(t1))
            {
                return "Bool";
            }
        }
        return "";
    }
    return "";
}

string equality_expr(string t1, string t2)
{
    string captrue = "True", lowtrue = "true";
    int w = t2.size() - 1;
    int t = t1.size() - 1;
    string tt = "char";
    if ((isInteger(t1) || isFloat(t1) || t1 == tt) && (isInteger(t2) || isFloat(t2) || t2 == tt))
    {
        return captrue;
    }
    else if ((isInteger(t1) && t2[w] == '*') || (isInteger(t2) && t1[t] == '*'))
    {
        return lowtrue;
    }
    else if (t2 == t2)
    {
        return captrue;
    }
    else
    {
        return "";
    }
    return "";
}

string bitwise_expr(string t1, string t2)
{

    if ((t1 == "bool" || isInteger(t1)) && (t2 == "bool" || isInteger(t2)))
    {
        return "True";
    }
    if (t1 == "bool" && t2 == "bool")
    {
        return "true";
    }
    return "";
}

string conditional_expr(string t1, string t2)
{

    int t = t1.size() - 1;
    int w = t2.size() - 1;

    if (isInteger(t1) && isInteger(t2))
    {
        return "long long";
    }

    if (isFloat(t1) && isFloat(t2))
    {
        return "long double";
    }
    if (t1 == t2)
    {
        return t1;
    }
    if (t1[t] == '*' && t2[w] == '*')
    {
        return "void*";
    }
    return "";
}

string valid_assignment(string t1, string t2)
{
    int t = t1.size() - 1;
    int w = t2.size() - 1;
    if ((t1[t] == '*' && isInteger(t1)) || (t2[w] == '*' && isInteger(t2)) || (t1[t] == '*' && t2[w] == '*'))
    {
        return "warning";
    }

    if (t1 == string("char"))
    {
        t1 = "long long";
    }
    if (isInteger(t1))
    {
        t1 = "long double";
    }
    if (t2 == string("char"))
    {
        t2 = "long long";
    }
    if (isInteger(t2))
    {
        t2 = "long double";
    }

    if ((isFloat(t1) && isFloat(t2)) || (t1 == t2))
    {
        return "true";
    }
    if ((t1 == string("void*") && t2[w] == '*') || (t2 == string("void*") && t1[t] == '*'))
    {
        return "true";
    }
    return "";
}

string assignment_expr(string t1, string t2, string opr)
{
    unordered_map<string, int> m;
    m["="] = 1;
    m[">>="] = 2;
    m["<<="] = 3;
    m["+="] = 4;
    m["-="] = 5;
    m["/="] = 6;
    m["*="] = 7;
    m["%="] = 8;
    m["&="] = 9;
    m["|="] = 10;
    m["^="] = 11;
    int index = m[opr];
    switch (index)
    {
    case 1:
        if (!valid_assignment(t1, t2).empty())
        {
            return valid_assignment(t1, t2);
        }
        return "";
        break;
    case 2:
        if (!shift_expr(t1, t2).empty())
        {
            return "true";
        }
        break;
    case 3:
        if (!shift_expr(t1, t2).empty())
        {
            return "true";
        }
        break;
    case 4:
        if (!additive_expr(t1, t2, opr[0]).empty())
        {
            return "true";
        }
        break;
    case 5:
        if (!additive_expr(t1, t2, opr[0]).empty())
        {
            return "true";
        }
        break;
    case 6:
        if (!multiplicative_expr(t1, t2, opr[0]).empty())
        {
            return "true";
        }
        break;
    case 7:
        if (!multiplicative_expr(t1, t2, opr[0]).empty())
        {
            return "true";
        }
        break;
    case 8:
        if (!multiplicative_expr(t1, t2, opr[0]).empty())
        {
            return "true";
        }
        break;
    case 9:
        if (!bitwise_expr(t1, t2).empty())
        {
            return "true";
        }
        break;
    case 10:
        if (!bitwise_expr(t1, t2).empty())
        {
            return "true";
        }
        break;
    case 11:
        if (!bitwise_expr(t1, t2).empty())
        {
            return "true";
        }
        break;
    default:
        return "";
    }
    return "";
}

bool is_keyword(string key)
{
    if (key == "int" || key == "unsigned" || key == "long" || key == "short" || key == "double" || key == "float" || key == "char" || key == "string" || key == "bool" || key == "struct" || key == "void" || key == "printf" || key == "scanf" || key == "if" || key == "else" || key == "switch" || key == "return" || key == "for" || key == "while" || key == "do" || key == "new" || key == "delete" || key == "break" || key == "continue" || key == "case" || key == "default" || key == "auto" || key == "const" || key == "sizeof" || key == "typedef" || key == "signed")
    {
        return true;
    }
    else
    {
        return false;
    }

    return false;
}
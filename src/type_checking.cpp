#include "type_checking.h"
#include "symbol_table.h"
#include <bits/stdc++.h>
using namespace std;
 
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

string postfix_expr(string type)
{
    if (!isInteger(type))
    {
        return "";
    }
    else
    {
        return type;
    }
    return "";
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
            if (!(type == "int"))
                return "";
            break;
        case 2:
            return type;
            break;
        case 3:
            if (!(type == "int" || isInteger(type)))
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
    // cout << "M: " <<t1 << " " <<t2 << " "<< opr <<endl;
    string type;
    unordered_map<char, int> m;
    m['%'] = 0, m['/'] = 1, m['*'] = 2;
    int index = m[opr];
    switch (index)
    {
    case 0:
        if(t1 == "int" && t2 == "int")
            return "int";
        if (isInteger(t1) && isInteger(t2))
        {
            type = "long long";
            return type;
        }
        break;
    case 1:
        if(t1 == "int" && t2 == "int")
            return "int";
        else if (isInteger(t1) && isInteger(t2))
        {
            type = "long long";
            return type;
        }
        else{
            type = "float";
            return type;
        }
        break;
    case 2:
        if(t1 == "int" && t2 == "int")
            return "int";
        else if (isInteger(t1) && isInteger(t2))
        {
            type = "long long";
            return type;
        }
        else{
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
    if(t1 == "int" && t2 == "int"){
        return "int";
    }
    else if (isInteger(t1) && isInteger(t2))
    {
        return "long long";
    }
    else if (t1 == "float" && t2 == "float")
    {
        return "float";
    }
    else if ( (isFloat(t1) && isInteger(t2)) || (isInteger(t1) && isFloat(t2)) || (isFloat(t1) && isFloat(t2))   )
    {
        return "long double";
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
        return "int";
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
                return "int";
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
                return "int";
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
    if(isInteger(t1) && isInteger(t2)){
        return "true";
    }
    return "";
}

string conditional_expr(string t1, string t2)
{

    int t = t1.size() - 1;
    int w = t2.size() - 1;
    if(t1==t2){
        return t1;
    }

    if (isInteger(t1) && isInteger(t2))
    {
        return "long long";
    }

    if (isFloat(t1) && isFloat(t2))
    {
        return "long double";
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
    if ((t1[t] == '*' && isInteger(t1)) || (t2[w] == '*' && isInteger(t2)) )
    {
        return "warning";
    }
   
    if(t1 == t2 ){
        return "true";
    }
    if (t1 == string("char"))
    {
        t1 = "long long";
    }
    if (isInteger(t1))
    {
        t1 = "long long";
    }
    if (t2 == string("char"))
    {
        t2 = "long long";
    }
    if (isInteger(t2))
    {
        t2 = "long long";
    }

    if (isFloat(t1) && isFloat(t2))
    {
        return "true";
    }

    if ((t1 == string("void*") && t2[w] == '*') || (t2 == string("void*") && t1[t] == '*'))
    {
        return "true";
    }
    

    if(t1[t1.size() - 1] == '*' && t2[t2.size() - 1] == '*'){
        return "warning";
    }
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

// new function
bool check_type (string type){
    if(type == "char" )
        return true;
    if(type == "int" )
        return true;
    if(type == bool)
        return true;
    if(type == "long int" )
        return true;
    if(type == "long long" )
        return true;
    if(type == "long")
        return true;
    if(type == "long long int")
        return true;

    if(type == "unsigned int" )
        return true;
    if(type == "unsigned long int")
        return true;
    if(type == "unsigned long long")
        return true;
    if(type == "unsigned long")
        return true;
    if(type == "unsigned long long int")
        return true;

    if(type == "signed int")
        return true;
    if(type == "signed long int")
        return true;
    if(type == "signed long long" )
        return true;
    if(type == "signed long")
        return true;
    if(type == "signed long long int")
        return true;
    
    if(type == "short")
        return true;
    if(type == "short int" )
        return true;
    if(type == "signed short int")
        return true;
    if(type == "unsigned short int" )
        return true;

    if(type == "float") 
        return true;
    if(type == "double") 
        return true;
    if(type == "long double") 
        return true;
    if(type == "string") 
        return true;
    if(type.substr(0,6) == "struct") 
        return (struct_size(type)!=0) || (struct_size(type.substr(0, type.size()-2))!=0);
    
    return false;

}
#include<bits/stdc++.h>
using namespace std;

extern string type_var;

bool isInteger(string type);
bool isSignedInteger(string type);
bool isFloat(string type);
bool isSignedFloat(string type);
bool is_keyword(string key);
string postfix_expr(string type);
string unary_expr(string operator_, string type, int production);
string multiplicative_expr(string type1, string type2, char operator_);
string additive_expr(string type1, string type2, char operator_);
string shift_expr(string type1, string type2);
string relational_expr(string type1, string type2);
string equality_expr(string type1, string type2);
string bitwise_expr(string type1, string type2);
string conditional_expr(string type1, string type2);
string valid_assignment(string type1, string type2);
string assignment_expr(string type1, string  type2, string operator_);
bool is_valid_var_type(std::string type); 

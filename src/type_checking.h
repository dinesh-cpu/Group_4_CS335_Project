#include <string>
#include <stack>

extern std::string type_var;

// std::string primary_expr(std::string id, std::stack<int> st);
std::string postfix_expr1(std::string type);

std::string postfix_expr23(std::string type);

std::string postfix_expr67(std::string type);

bool isInteger(std::string type);

bool isSignedInteger(std::string type);

bool isFloat(std::string type);

bool isSignedFloat(std::string type);

std::string unary_expr(std::string opr, std::string type, int production);

std::string multiplicative_expr(std::string t1, std::string t2, char opr);

std::string additive_expr(std::string t1, std::string t2, char opr);

std::string shift_expr(std::string t1, std::string t2);

std::string relational_expr(std::string t1, std::string t2);

std::string equality_expr(std::string t1, std::string t2);

std::string bitwise_expr(std::string t1, std::string t2);

std::string conditional_expr(std::string t1, std::string t2);

std::string valid_assignment(std::string t1, std::string t2);
std::string assignment_expr(std::string t1, std::string  t2, std::string opr);
bool is_keyword(std::string key);

// std::string assignment_expr(std::string t1, std::string  t2);
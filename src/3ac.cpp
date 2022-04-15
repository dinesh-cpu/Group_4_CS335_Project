#include <bits/stdc++.h>
#include"3ac.h"
using namespace std;

#define ll long long int 
#define pb push_back
#define vi vector<int>

vector<quad> global_emit;
ll  instruction_num;
int tmp_variable = 0;
opd IF_opd;        // when if is called
opd GOTO_opd;      // for goto
opd empty_opd;     // no operator used, direct equality, s = ""
opd one_opd;       // for increment, increment
opd zero_opd;       // for 0
opd switch_opd;     // for switch
opd star_opd;       // *
opd return_opd;      // for return 
opd func_opd;       // for func
opd call_opd;     // function call

opd create_opd(string s,tEntry* entry){
     opd tmp;
     tmp.s=s ,  tmp.entry=entry;
     return tmp;
}

void initialise(){
    IF_opd = create_opd("if",find_entry(scope_st,"__IF__"));	
	GOTO_opd = create_opd("goto",find_entry(scope_st,"__GOTO__"));													
	empty_opd = create_opd("",find_entry(scope_st,"__EMPTY__"));
    one_opd = create_opd("1",find_entry(scope_st,"__one__"));	
    zero_opd = create_opd("0",find_entry(scope_st,"__zero__"));	
    star_opd = create_opd("*",find_entry(scope_st,"__STAR__"));
    return_opd = create_opd("return",find_entry(scope_st,"__RETURN__"));
    func_opd = create_opd("func",find_entry(scope_st,"__FUNC__"));
    call_opd = create_opd("call",find_entry(scope_st,"__CALL__"));
}

string create_tmp_var(string type,int offset,int scope){
    string temp = to_string(tmp_variable) ; 
    string temp_label = "__var__"+temp;
    string label=temp_label;
    ++tmp_variable;
    insert_entry(label,type,1,getSize(type),offset,scope);
    return label;
}

void emit(opd operand_1, string operator_1, opd operand_2, opd result, int line_num){
    quad tmp;
    tmp.opd1 = operand_1 ,  tmp.opd2 = operand_2 , tmp.result = result , tmp.op = operator_1 ,  tmp.line_num = line_num ,  global_emit.pb(tmp) , instruction_num++;
}

void dump_emit_list(){
    fstream outfile;
    outfile.open("ir_code.txt", fstream::out);
    int i= 0 ;  
    while(i!=global_emit.size()){
        string temp = to_string(i) ;                                            
        if(global_emit[i].result.s == "goto"){
            outfile<< temp + "     " <<global_emit[i].opd1.s<<" "<<global_emit[i].opd2.s<<" "<<global_emit[i].op<<" 0 "<<global_emit[i].result.s<<" "<<global_emit[i].line_num<<endl;
        }
        else if(global_emit[i].opd1.s == "return"){
             outfile<< temp + "     " <<global_emit[i].opd1.s<<" "<<global_emit[i].opd2.s <<endl;
        }
        else if(global_emit[i].opd1.s == "func"){
             outfile<< temp + "     " <<global_emit[i].opd1.s<<" "<<global_emit[i].opd2.s <<endl;
        }
        else if(global_emit[i].opd1.s == "call"){
            // cout << "call" <<endl;
             outfile<< temp + "     " <<global_emit[i].opd1.s<<" "<<global_emit[i].opd2.s <<endl;
        }
        else if(global_emit[i].opd1.s == "*"){
            outfile<< temp  + "     " <<global_emit[i].opd1.s <<global_emit[i].result.s<<" = "<<global_emit[i].opd2.s <<endl;
        }
        else if(global_emit[i].result.s == ""){
            outfile<< temp + "     " <<global_emit[i].opd1.s<<" "<<global_emit[i].line_num<<endl;
        }
        else if(global_emit[i].op == ""){
            outfile<< temp + "     " <<global_emit[i].result.s<<" = "<<global_emit[i].opd2.s <<endl;
        } 
        else 
            outfile<< temp  + "     " <<global_emit[i].result.s<<" = "<<global_emit[i].opd1.s<<" "<<global_emit[i].op<<" "<<global_emit[i].opd2.s<<endl;
        i++ ; 
    }
}

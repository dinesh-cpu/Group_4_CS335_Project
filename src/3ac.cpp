#include <bits/stdc++.h>
#include"3ac.h"
using namespace std;

#define ll long long int 
#define pb push_back
#define vi vector<int>

vector<quad> global_emit;
ll  instruction_num;
int tmp_var_num=0;
opd IF_opd;
opd GOTO_opd;
opd empty_opd;
opd one_opd;
opd zero_opd;
opd switch_opd;
opd star_opd;
opd return_opd;
opd func_opd;
opd call_opd;

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
    string temp = to_string(tmp_var_num) ; 
    string temp_label = "__var__"+temp;
    string label=temp_label;
    ++tmp_var_num;
    insert_entry(label,type,1,getSize(type),offset,scope);
    return label;
}

void backpatch(vi  list, int line){
    int i = 0 ; 
    while(i!=list.size()){
        global_emit[list[i]].line_num=line;
        i++;
    }
}

void emit(opd opd1, string op, opd opd2, opd result, int line_num){
    quad tmp;
     tmp.opd1 = opd1 ,  tmp.opd2 = opd2 , tmp.result = result , tmp.op = op ,  tmp.line_num = line_num ,  global_emit.pb(tmp) , instruction_num++;
}


vi  merge(vi list_1, vi  list_2){
    list_1.insert(list_1.end(), list_2.begin(), list_2.end());
    return list_1;
}

vi  makelist(int line_number){
    vi list_1;
    list_1.pb(line_number);
    return list_1;
}

void dump_emit_list(){
    fstream outfile;
    outfile.open("emit_list_dump.txt", fstream::out);
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

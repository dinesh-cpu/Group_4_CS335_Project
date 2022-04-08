#include"3ac.h"
#include<vector>
#include<fstream>
 
std::vector<quad>global_emit;
long long int instruction_num;
int tmp_var_num=0;
opd IF_opd,GOTO_opd,empty_opd,one_opd,zero_opd,switch_opd,star_opd,return_opd,func_opd,call_opd;

opd create_opd(string s,tEntry* entry){
     opd tmp;
     tmp.s=s;
     tmp.entry=entry;
     return tmp;
}

string create_tmp_var(string type,int offset,int scope){
    string label="__var__"+to_string(tmp_var_num);
    tmp_var_num++;
    insert_entry(label,type,1,getSize(type),offset,scope);
    return label;
}


void emit(opd opd1, string op, opd opd2, opd result, int line_num){
    quad tmp;
    tmp.opd1 = opd1;
    tmp.opd2 = opd2;
    tmp.result = result;
    tmp.op = op;
    tmp.line_num = line_num;
    global_emit.push_back(tmp);
    instruction_num++;
}

void backpatch(vector<int>list, int line){
    for(int i=0;i<list.size();i++){
        global_emit[list[i]].line_num=line;
        // cout<<"BACKPATCH----- global_emit[list["<<i<<"]] = "<<global_emit[list[i]].line_num<<endl;
    }
}

vector<int> merge(vector<int> list1, vector<int> list2){
    list1.insert(list1.end(), list2.begin(), list2.end());
    return list1;
}

vector<int> makelist(int line_num){
    vector<int> list1;
    list1.push_back(line_num);
    return list1;
}

void printemit(){
    for(int i=0;i<global_emit.size();i++){
        if(global_emit[i].result.s == "goto"){
            cout<<"EMIT_LIST "<< to_string(i) + " " <<global_emit[i].opd1.s<<" "<<global_emit[i].opd2.s<<" "<<global_emit[i].op<<" 0 "<<global_emit[i].result.s<<" "<<global_emit[i].line_num<<endl;
        }
        else if(global_emit[i].opd1.s == "*"){
            cout<<"EMIT_LIST "<< to_string(i) + " " <<global_emit[i].opd1.s <<global_emit[i].result.s<<" = "<<global_emit[i].opd2.s <<endl;
        }
        else if(global_emit[i].opd1.s == "return" || global_emit[i].opd1.s == "func" || global_emit[i].opd1.s == "call"){
           cout<<"EMIT_LIST "<< to_string(i) + " " <<global_emit[i].opd1.s<<" "<<global_emit[i].opd2.s <<endl;
        }
        else if(global_emit[i].result.s == ""){
            cout<<"EMIT_LIST "<< to_string(i) + " " <<global_emit[i].opd1.s<<" "<<global_emit[i].line_num<<endl;
        }
        else if(global_emit[i].op == ""){
            cout<<"EMIT_LIST "<< to_string(i) + " " <<global_emit[i].result.s<<" = "<<global_emit[i].opd2.s <<endl;
        } 
        else cout<<"EMIT_LIST "<< to_string(i) + " " <<global_emit[i].result.s<<" = "<<global_emit[i].opd1.s<<" "<<global_emit[i].op<<" "<<global_emit[i].opd2.s<<endl;
    }
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

void dump_emit_list(){
    ofstream fout;
    fout.open("emit_list_dump.txt", ios::out);
    for(int i=0;i<global_emit.size();i++){
        if(global_emit[i].result.s == "goto"){
            fout<< to_string(i) + "     " <<global_emit[i].opd1.s<<" "<<global_emit[i].opd2.s<<" "<<global_emit[i].op<<" 0 "<<global_emit[i].result.s<<" "<<global_emit[i].line_num<<endl;
        }
        else if(global_emit[i].opd1.s == "*"){
            fout<< to_string(i) + "     " <<global_emit[i].opd1.s <<global_emit[i].result.s<<" = "<<global_emit[i].opd2.s <<endl;
        }
        else if(global_emit[i].opd1.s == "return" || global_emit[i].opd1.s == "func" || global_emit[i].opd1.s == "call"){
           fout<< to_string(i) + "     " <<global_emit[i].opd1.s<<" "<<global_emit[i].opd2.s <<endl;
        }
        else if(global_emit[i].result.s == ""){
            fout<< to_string(i) + "     " <<global_emit[i].opd1.s<<" "<<global_emit[i].line_num<<endl;
        }
        else if(global_emit[i].op == ""){
            fout<< to_string(i) + "     " <<global_emit[i].result.s<<" = "<<global_emit[i].opd2.s <<endl;
        } 
        else fout<< to_string(i) + "     " <<global_emit[i].result.s<<" = "<<global_emit[i].opd1.s<<" "<<global_emit[i].op<<" "<<global_emit[i].opd2.s<<endl;
    }
}
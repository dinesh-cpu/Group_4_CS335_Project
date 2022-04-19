#include <bits/stdc++.h>
#include<3ac.h>
using namespace std;


#define REG_SPACE 36
ofstream asm_file;
vector<string> _data;


map<string, vector<string>> asm_code;
queue<pair<string, tEntry *>> free_reg;
queue<pair<string, tEntry *>> used_reg;
map<string, string> reg_info;
queue<pair<string, tEntry *>> free_reg_float;
queue<pair<string, tEntry *>> used_reg_float;
map<string, string> reg_info_float;
map<string, vector<string>> asm_code; // will store mips code correspinding to a funciton

string curr_function;

void insert_asm(string a)
{
    asm_code[curr_function].push_back(a);
}

void initialize_reg()
{
    free_reg.push({"$t0", NULL});
    free_reg.push({"$t1", NULL});
    free_reg.push({"$t2", NULL});
    free_reg.push({"$t3", NULL});
    free_reg.push({"$t4", NULL});
    free_reg.push({"$t5", NULL});
    free_reg.push({"$s0", NULL});
    free_reg.push({"$s1", NULL});
    free_reg.push({"$s2", NULL});
    free_reg.push({"$s3", NULL});
    free_reg.push({"$s4", NULL});

    reg_info.insert({"$t0", ""});
    reg_info.insert({"$t1", ""});
    reg_info.insert({"$t2", ""});
    reg_info.insert({"$t3", ""});
    reg_info.insert({"$t4", ""});
    reg_info.insert({"$t5", ""});
    reg_info.insert({"$s0", ""});
    reg_info.insert({"$s1", ""});
    reg_info.insert({"$s2", ""});
    reg_info.insert({"$s3", ""});
    reg_info.insert({"$s4", ""});

    //float registers
    free_reg_float.push({"$f20", NULL});
    free_reg_float.push({"$f22", NULL});
    free_reg_float.push({"$f24", NULL});
    free_reg_float.push({"$f26", NULL});
    free_reg_float.push({"$f28", NULL});
    free_reg_float.push({"$f30", NULL});
    

    reg_info_float.insert({"$f20", ""});
    reg_info_float.insert({"$f22", ""});
    reg_info_float.insert({"$f24", ""});
    reg_info_float.insert({"$f26", ""});
    reg_info_float.insert({"$f28", ""});
    reg_info_float.insert({"$f30", ""});
   
}

string getReg(pair<string, tEntry *> temp_var)
{
    // already in register
    for (auto it : reg_info)
    {
        if (it.second == temp_var.first)
        {
            string reg = it.first;
            return reg;
        }
    }

    // not present already
    //Check if we have a free_reg
    if (free_reg.size())
    {
        // saving initial entry
        pair<string, tEntry *> t = free_reg.front();
        free_reg.pop();

        int offset1 = temp_var.second->offset;

        if (curr_function != "main")
            offset1 = offset1 + REG_SPACE;

        string reg = t.first;

        // now we store value in the register
        insert_asm("li $s6, " + to_string(offset1)); 
        insert_asm("sub $s7, $fp, $s6");             
        insert_asm("lw " + reg + ", 0($s7)");
        t.second = temp_var.second;
        used_reg.push(t);
        reg_info[reg] = temp_var.first;
        return reg;
    }

    else
    {
        // saving intial entry
        pair<string, tEntry *> t = used_reg.front();
        used_reg.pop();

        tEntry *currTmp = t.second;
        string reg = t.first;
        int offset = currTmp->offset;
        if (curr_function != "main")
            offset = offset + REG_SPACE;

        insert_asm("li $s6, " + to_string(offset));
        insert_asm("sub $s7, $fp, $s6"); 

        insert_asm("sw " + reg + ", 0($s7)");

        offset = temp_var.second->offset;
        if (curr_function != "main")
            offset = offset + REG_SPACE;

        // now we store value in the register
        insert_asm("li $s6, " + to_string(offset));
        insert_asm("sub $s7, $fp, $s6");            

        insert_asm("lw " + reg + ", 0($s7)");
        t.second = temp_var.second;
        used_reg.push(t);
        reg_info[reg] = temp_var.first;
        return reg;
    }
}

void store_reg_info()
{
    pair<string, tEntry *> t;
    while (used_reg.size())
    {
        t = used_reg.front();
        used_reg.pop();

        tEntry *currTmp = t.second;
        string reg = t.first;
        int offset = currTmp->offset;
        if (curr_function != "main")
            offset = offset + REG_SPACE;
        insert_asm("li $s6, " + to_string(offset));
        insert_asm("sub $s7, $fp, $s6"); 
        insert_asm("sw " + reg + ", 0($s7)");
        t.second = NULL;
        free_reg.push(t);

        reg_info[reg] = "";
    }
    while (used_reg_float.size())
    {
        t = used_reg_float.front();
        used_reg_float.pop();

        tEntry *currTmp = t.second;
        string reg = t.first;
        int offset = currTmp->offset;
        if (curr_function != "main")
            offset = offset + REG_SPACE;

        insert_asm("li $s6, " + to_string(offset));
        insert_asm("sub $s7, $fp, $s6"); 

        insert_asm("swc1 " + reg + ", 0($s7)");
        t.second = NULL;
        free_reg_float.push(t);

        reg_info_float[reg] = "";
    }
}

string getReg_float(pair<string, tEntry *> temp_var)
{
    // already in register
    for (auto it : reg_info_float)
    {
        if (it.second == temp_var.first)
        {
            string reg = it.first;
            return reg;
        }
    }
    //Check if we have a free_reg
    if (free_reg_float.size())
    {

        pair<string, tEntry *> t = free_reg_float.front();
        free_reg_float.pop();

        int offset1 = temp_var.second->offset;

        if (curr_function != "main")
            offset1 = offset1 + REG_SPACE;
        string reg = t.first;

        // now we store value in the register
        insert_asm("li $s6, " + to_string(offset1)); 
        insert_asm("sub $s7, $fp, $s6");             
        insert_asm("lwc1 " + reg + ", 0($s7)");
        t.second = temp_var.second;
        used_reg_float.push(t);
        reg_info_float[reg] = temp_var.first;
        return reg;
    }
    else
    {
        pair<string, tEntry *> t = used_reg_float.front();
        used_reg_float.pop();

        tEntry *currTmp = t.second;
        string reg = t.first;
        int offset = currTmp->offset;
        if (curr_function != "main")
            offset = offset + REG_SPACE;

        insert_asm("li $s6, " + to_string(offset));
        insert_asm("sub $s7, $fp, $s6"); 
        insert_asm("swc1 " + reg + ", 0($s7)");

        offset = temp_var.second->offset;
        if (curr_function != "main")
            offset = offset + REG_SPACE;

        // now we store value in the register
        insert_asm("li $s6, " + to_string(offset));
        insert_asm("sub $s7, $fp, $s6");            

        insert_asm("lwc1 " + reg + ", 0($s7)");
        t.second = temp_var.second;
        used_reg_float.push(t);
        reg_info_float[reg] = temp_var.first;
        return reg;
    }
}

void print_asm(string asm_name)
{
    asm_file.open(asm_name);

    // starting code
    for (int m = 0; m < _data.size(); m++)
    {
        asm_file << _data[m] << endl;
    }
    asm_file << endl;
    asm_file << ".text" << endl;

    //print main function
    asm_file << "main"
             << ":" << endl;
    for (int i = 0; i < asm_code["main"].size(); i++)
        asm_file << '\t' << asm_code["main"][i] << endl;
    asm_file << endl;

    map<string, vector<string>>::iterator it;
    it = asm_code.find("main");
    asm_code.erase(it);

    // functions except main
    for (auto it : asm_code)
    {
        string a = it.first;
        asm_file << a << ":" << endl;
        for (int i = 0; i < asm_code[a].size(); ++i)
            asm_file << '\t' << asm_code[a][i] << endl;
        asm_file << endl;
    }
}

void get_arr_element(pair<string, tEntry *> temp_var, string reg_name)
{
    if (curr_function == "main")
    {
        // both works for normal array and struct array
        insert_asm("li $t7, " + to_string(temp_var.second->size));
        insert_asm("mflo $t7");
        insert_asm("li $s6, " + to_string(temp_var.second->offset)); 
        insert_asm("add $s6, $s6, $t7");
        insert_asm("sub $s7, $fp, $s6"); 
    }

    else
    {
        // both works for normal array and struct array
        insert_asm("li $t7, " + to_string(temp_var.second->size));
        insert_asm("mflo $t7");
        insert_asm("li $s6, " + to_string(temp_var.second->offset));
        insert_asm("addi $s6, " + to_string(REG_SPACE));
        insert_asm("sub $s7, $fp, $s6");
        insert_asm("lw $t8, 0($s7)");
        insert_asm("sub $s7, $t8, $t7");
    }

    insert_asm("lw " + reg_name + ", 0($s7)");
}



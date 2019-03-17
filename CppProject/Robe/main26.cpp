//
// Created by 増村和季 on 2019/03/15.
//

#include <iostream>
using namespace std;


void func_1();
void func_2();
void func_3();
void func_4();
void func_5();
void func_6();


int main(){
    func_1();
    return 0;
}

void func_1(){ func_2(); }
void func_2(){ func_3(); }
void func_3(){ func_4(); }
void func_4(){ func_5(); }
void func_5(){ func_6(); }
void func_6(){ cout << "お疲れ様です" << endl;}
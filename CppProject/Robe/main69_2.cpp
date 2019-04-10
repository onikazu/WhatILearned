//
// Created by 増村和季 on 2019/03/21.
//

#include <iostream>
using namespace std;

void Func_linkage();

int main(){
    extern int a;
    //int a;
    Func_linkage();
    a = 5;
    Func_linkage();
    return 0;
}
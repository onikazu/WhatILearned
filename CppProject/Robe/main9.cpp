//
// Created by 増村和季 on 2019/03/15.
//
#include <iostream>
using namespace std;

// グローバル変数
int a = 0;


void Inc(){
    // 内部変数
    int b = 0;
    a++;
    b++;
    cout << a << "<- a|b ->" << b << endl;
}


int main(){
    Inc();
    Inc();
    Inc();
    return 0;
}
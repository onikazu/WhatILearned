//
// Created by onikazu on 2019/03/17.
//

#include <iostream>
using namespace std;


int main(){
    int a;
    int* p = &a;

    a = 0;

    cout << "a = " << a << endl;
    cout << "*p = " << *p << endl;

    //参照
    *p = 5;

    cout << "a = " << a << endl;
    cout << "*p = " << *p << endl;

    return 0;
}
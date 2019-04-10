//
// Created by 増村和季 on 2019/03/21.
//

#include <iostream>
using namespace std;


int a = 1;

int main(){
    cout << a << ":" << &a << endl;

    int a = 2;
    cout << a << ":" << &a << endl;

    {
        int a = 3;
        cout << a << ":" << &a << endl;
    }

    cout << a << ":" << &a << endl;

    cout << ::a << ":" << &::a << endl;

    return 0;
}
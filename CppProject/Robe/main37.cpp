//
// Created by onikazu on 2019/03/17.
//

#include <iostream>
using namespace std;


int main(){
    int a;
    int& r = a;

    a = 0;
    cout << "a = " << a << endl;
    cout << "r = " << r << endl;

    r = 100;
    cout << "a = " << a << endl;
    cout << "r = " << r << endl;

    cout << "&a = " << (unsigned long)&a << endl;
    cout << "&r = " << (unsigned long)&r << endl;

    return 0;
}
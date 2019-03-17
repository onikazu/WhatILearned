//
// Created by 増村和季 on 2019/03/15.
//

#include <iostream>
using namespace std;


int main(){
    int a = 0;

    a += 2;
    cout << "a += 2      -> a = " << a << endl;
    a++;
    cout << "a++       -> a= " << a << endl;
    a = a * 5 + a;
    cout << "a = a * 5 + a ->  a = " << a << endl;
    return  0;
}
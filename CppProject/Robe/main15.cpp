//
// Created by onikazu on 2019/03/15.
//

#include <iostream>
using namespace std;


int main(){
    int a[2];

    a[0] = 100;
    cout << "a[0] = " << a[0] << endl;
    a[1] = 200;
    cout << "a[0] = " << a[0] << endl;
    a[0] = 300;
    cout << "a[0] = " << a[0] << endl;
    return 0;
}
//
// Created by onikazu on 2019/03/15.
//

#include <iostream>
using namespace std;


int main(){
    int i;
    for(i = 5;i < 10;i += 2)
        cout << i << endl;


    cout << "#########" << endl;
    i = 0;

    for(i = 10000; i<10; i++)
        cout << i << endl;

    cout << "#########" << endl;
    i = 0;
    int a = 0;

    for(i = 0; a < 10; i++) {
        cout << i << ", " << a << endl;
        a += 2;
    }

    cout << "#########" << endl;
    a = 0;

    for(; a<10;){
        cout << a << endl;
        a += 2;
    }

    cout << "#########" << endl;

    a = 0;
//    for (;;){
//        cout << a << endl;
//        a++;
//    }
    return 0;
}
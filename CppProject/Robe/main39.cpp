//
// Created by 増村和季 on 2019/03/17.
//

#include <iostream>
using namespace std;


int main(){
    int array[4];

    cout << "&array[1] = " << (long)&array[1] << endl;
    cout << "&array[1]+1 = " << (long)(&array[1] + 1) << endl;
    cout << "&array[2] = " << (long)&array[2] << endl;

    return 0;
}


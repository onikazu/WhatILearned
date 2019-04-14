/*
 * Copyright (c) 2019 ... All rights reserved.
 * ...
 */

#include <iostream>
#include <string>
using namespace std;


int main(){
    string a = "abcde";

    cout << a[2] << endl;

    string zero = "01010101";
    string one = "10101010";

    int result = zero.compare(0, 1, one);
    cout << result << endl;

    return 0;
}
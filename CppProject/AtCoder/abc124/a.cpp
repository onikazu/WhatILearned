/*
 * Copyright (c) 2019 ... All rights reserved.
 * ...
 */
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main(){
    int a, b;
    cin >> a >> b;
    int point = 0;
    for (int i = 0; i < 2; i++){
        if (a > b){
            point += a;
            a--;
        }else{
            point += b;
            b--;
        }
    }

    cout << point << endl;

    return 0;
}
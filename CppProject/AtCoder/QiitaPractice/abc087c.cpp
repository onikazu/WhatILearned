/*
 * Copyright (c) 2019 ... All rights reserved.
 * ...
 */

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main(){
    int N;
    cin >> N;

    int candy1[N];
    int candy2[N];

    for (int i = 0; i < N; ++i) {
        cin >> candy1[i];
    }


    for (int i = 0; i < N; ++i) {
        cin >> candy2[i];
    }

    int maxCandy = 0;
    for (int i = 0; i < N; i++){
        int getCandy = 0;
        for(int k = 0; k < i+1; k++){
            getCandy += candy1[k];
        }
        for(int l = i; l < N; l++){
            getCandy += candy2[l];
        }
        if (getCandy > maxCandy){
            maxCandy = getCandy;
        }
    }

    cout << maxCandy << endl;

    return 0;
}
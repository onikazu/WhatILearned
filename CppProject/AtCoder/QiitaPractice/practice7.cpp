/*
 * Copyright (c) 2019 ... All rights reserved.
 * ...
 */

#include <iostream>
using namespace std;


bool notInArray(int num, int index, int array[], size_t len){
    bool res = true;
    for(int i=0; i < index; i++){
        if(num == array[i]){
            res = false;
            break;
        }
    }
    return res;
}

int main(){

    int N;
    cin >> N;
    int d[N];
    for(int i=0; i<N; i++){
        cin >> d[i];
    }

    int counter = 0;

    for(int i=0; i<N; i++){
        if(notInArray(d[i], i, d, (sizeof(d)/ sizeof(d[0])))){
            counter++;
        }
    }

    cout << counter << endl;


    return 0;
}
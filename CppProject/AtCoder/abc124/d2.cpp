/*
 * Copyright (c) 2019 ... All rights reserved.
 * ...
 */

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


void convert(string S, int start, int end){
    for (int i = start; i < end; i++){
        if(S[i] == '1'){
            S[i] = '0';
        }else{
            S[i] = '1';
        }
    }
}


int check[](string S){
    int temp = 0;
    int max = 0;
    int tempIndex = 0;
    int maxIndex = 0;
    bool before_one = true;
    for (int i = 0; i < S.size(); i++){
        if(S[i] == '1'){
            temp++;
            if(!before_one){
                tempIndex = i;
            }
            before_one = true;
            if (max < temp){
                max = temp;
                maxIndex = tempIndex;
            }
        }else{
            temp = 0;
            before_one = false;
        }
    }

    return {max, maxIndex};

}

int main() {
    int N, K;
    string S;
    cin >> N >> K;
    cin >> S;

    int tempIndex = 0;
    bool before_one = true;
    for (int i = 0; i < S.size(); ++i) {
        if (S[i] == '1'){
            if (!before_one){
                before_one = true;
                tempIndex = i;
            }
        }else{
            if(before_one){
                string
                convert(S, tempIndex, i);
            }
        }
    }



}
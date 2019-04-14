/*
 * Copyright (c) 2019 ... All rights reserved.
 * ...
 */
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main(){
    int N, K;
    string S;
    cin >> N >> K;
    cin >> S;

    int sakasaTop[N];
    int sakasaTopIndex = 0;
    int standTop[N];
    int standTopIndex = 0;

    bool sakasaMode = false;
    for(int i = 0; i < N; i++){
        if (S[i] == '1'){
            if(!sakasaMode){
                sakasaTop[sakasaTopIndex] = i;
                sakasaTopIndex++;
            }
            sakasaMode = true;
        }
        
        if(S[i] == '0'){
            if(sakasaMode){
                standTop[standTopIndex] = i;
                standTopIndex++;
            }
            sakasaMode = false;
        }
    }

    int sakasaLen[N];
    int standLen[N];

    for (int i = 0; i < sakasaTopIndex; i++){
        if(sakasaTop[0] < standTop[0]){
            sakasaLen[i] = standTop[i] - sakasaTop[i];
        }else{
            if(i != sakasaTopIndex-1){
                sakasaLen[i] = standTop[i+1] - sakasaTop[i];
            }else {
                sakasaLen[i] = int(S.size()) - sakasaTop[i];
            }
        }
    }

    for (int i = 0; i < standTopIndex; i++){
        if(standTop[0] < sakasaTop[0]){
            standLen[i] = sakasaTop[i] - standTop[i];
        }else{
            if(i != standTopIndex-1){
                standLen[i] = sakasaTop[i+1] - standTop[i];
            }else {
                standLen[i] = int(S.size()) - standTop[i];
            }
        }
    }

    for (int i = 0; i < N; i++){
        cout << standLen[i] << endl;
    }

//    for(int i = 0; i < K; i++){
//        int max_count = 0;
//        if(standTop[0] < sakasaTop[0]){
//            int temp
//        }else{
//            int temp = 0;
//            if (i == sizeof())
//            temp = standLen[i] + sakasaLen[i] + sakasaLen[i+1];
//            if (temp > max_count){
//                max_count = temp;
//            }
//        }
//    }


    return 0;
}
/*
 * Copyright (c) 2019 ... All rights reserved.
 * ...
 */
#include <iostream>
using namespace std;

int main(){
    int N;
    int Y;

    cin >> N >> Y;

    int yukichi = -1;
    int ichiyou = -1;
    int hideo = -1;

// これでは計算量の関係でアウト！（じゃないかも全探索ではないから）
//    for(int i=0; i<=N; i++){
//        for(int j=0; j<=N-i; j++){
//            for(int k=0; k<=N-i-j; k++){
//                if(10000*i+5000*j+1000*k == Y){
//                    yukichi = i;
//                    ichiyou = j;
//                    hideo = k;
//                    break;
//                }
//            }
//        }
//    }

// 他の二種類のお札の枚数が決まれば最後の一枚は自動できまる！
    for(int i=0; i<=N; i++){
        for(int j=0; j<=N-i; j++){
            int k = N - i - j;
            if(10000*i+5000*j+1000*k == Y){
                yukichi = i;
                ichiyou = j;
                hideo = k;
                break;
            }

        }
    }


    cout << "(" << yukichi << ", " << ichiyou << ", " << hideo << ")";

    return 0;
}
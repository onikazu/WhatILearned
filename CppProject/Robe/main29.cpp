//
// Created by onikazu on 2019/03/16.
//

#include <iostream>
using namespace std;

#define NUMBER_FIBO 16


int main(){
    int i;
    int nFibo[NUMBER_FIBO] = {1, 1};

    for (i = 0; i < NUMBER_FIBO - 2; i++){
        nFibo[i + 2] = nFibo[i + 1] + nFibo[i];
    }

    cout << "フィボナッチ数列の最初の" << NUMBER_FIBO << "桁は" << endl;
    for (i = 0; i < NUMBER_FIBO - 1; i++){
        cout << nFibo[i] << ",";
    }

    cout << nFibo[i] << "です。" << endl;
    return 0;
}
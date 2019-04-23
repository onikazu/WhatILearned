/*
 * Copyright (c) 2019 ... All rights reserved.
 * ...
 */
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <numeric>
#include <functional>
#include <cmath>
#include <queue>
#include <stack>

#define repd(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) repd(i,0,n)
typedef long long ll;

using namespace std;


int inputValue(){
    int a;
    cin >> a;
    return a;
};

void inputArray(int * p, int a){
    rep(i, a){
        cin >> p[i];
    }
};

void inputVector(vector<int> * p, int a){
    rep(i, a){
        int input;
        cin >> input;
        p -> push_back(input);
    }
}

template <typename T>
void output(T a, int precision) {
    if(precision > 0){
        cout << setprecision(precision)  << a << "\n";
    }
    else{
        cout << a << "\n";
    }
}

int main(int argc, const char * argv[]) {

    // source code
    int N;
    cin >> N;
    string S;
    cin >> S;

    int counter = 0;
    int tempWhiteCounter = 0;

    // 白を黒
    rep(i, N){
        string target = S.substr(N-i-1, 1);
        if (target == "."){
            tempWhiteCounter++;
        }
        if (target == "#"){
            counter += tempWhiteCounter;
            tempWhiteCounter = 0;
        }
    }

    int tcounter = 0;
    int ttempWhiteCounter = 0;


    rep(i, N){
        string ttarget = S.substr(i, 1);
        if (ttarget == "#"){
            ttempWhiteCounter++;
        }
        if (ttarget == "."){
            tcounter += ttempWhiteCounter;
            ttempWhiteCounter = 0;
        }
    }

    if (counter > tcounter){
        counter = tcounter;
    }

    cout << counter << endl;

    return 0;
}
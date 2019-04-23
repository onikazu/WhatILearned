/*
 * Copyright (c) 2019 ... All rights reserved.
 * ...
 */
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

    int minCount = 100000000;
    for(int i = 0; i < N; i++){
        int whiteCount = 0;
        int blackCount = 0;
        for(int j = i; j < N; j++){
            string target = S.substr(j, 1);
            if (target == "."){
                whiteCount++;
            }
        }
        if(i == 0){
            if (whiteCount < minCount){
                minCount = whiteCount;
                continue;
            }
        }
        for(int j = 0; j < i; j++){
            string target = S.substr(j, 1);
            if (target == "#"){
                blackCount++;
            }
        }

        if (whiteCount+blackCount < minCount){
            minCount = whiteCount + blackCount;
            continue;
        }
    }

    cout << minCount << endl;




    return 0;
}
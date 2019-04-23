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

bool checkTr(int a, int b, int c){
    if((a + b > c) or (a + c > b) or(c + b > a)) return true;
    return false;
}


int main(int argc, const char * argv[]) {

    // source code
    int N = inputValue();
    int a[N];
    rep(i, N){
        cin >> a[i];
    }

    int r, g, b;
    int counter = 0;
    rep(i, N){
        repd(j, i+1, N){
            repd(k, j+1, N){

            }
        }
    }





    return 0;
}
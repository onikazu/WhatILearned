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
        // python で言うappend
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

double calcDist(int x0, int y0, int x1, int y1){
    return sqrt(((x0 - x1) * (x0 - x1)) + ((y0 - y1) * (y0 - y1)));
}


int main(int argc, const char * argv[]) {

    // source code
    int N = inputValue();
    vector<int> x;
    vector<int> y;

    rep(i, N){
        int xe;
        int ye;
        cin >> xe;
        cin >> ye;
        x.push_back(xe);
        y.push_back(ye);

    }

    double tempDist = 0;
    double maxDist = 0;

    rep(i, N){
        repd(j, i+1, N){
            tempDist = calcDist(x[i], y[i], x[j], y[j]);
            if (tempDist > maxDist) maxDist = tempDist;
        }
    }

    cout << maxDist << endl;



    return 0;
}
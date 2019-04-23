/*
 * Copyright (c) 2019 ... All rights reserved.
 * ...
 */

#include <iostream>
using namespace std;


int main(){
    int N;
    cin >> N;
    int t[N], x[N], y[N];
    t[0] = x[0] = y[0] = 0;
    for (int i = 0; i < N; ++i) {
        cin >> t[i] >> x[i] >> y[i];
    }

    bool can = true;

    for(int i = 0; i < N; i++){
        int dt = t[i+1] - t[i];
        int dist = abs(x[i+1]-x[i]) + abs(y[i+1] - y[i]);
        if(dt < dist) can = false;

        if (dist%2 != dt%2) can = false;
    }

    if(can) cout << "Yes" << endl;
    else cout << "no" << endl;

    return 0;
}
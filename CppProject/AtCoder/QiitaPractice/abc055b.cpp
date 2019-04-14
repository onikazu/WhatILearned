/*
 * Copyright (c) 2019 ... All rights reserved.
 * ...
 */

 #include <iostream>
 #include <string>
 #include <algorithm>
 using namespace std;


int main(){
    int N;
    cin >> N;

    long pow = 1;
    for (int i = 1; i < N + 1; i++){
        pow *= i;
    }

    cout << pow % (1000000000+7) << endl;

    return 0;
}
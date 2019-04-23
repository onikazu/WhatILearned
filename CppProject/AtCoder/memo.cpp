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
     // ベクトル(動的配列)の宣言
     vector<int> v1;
     vector<int> v2(123);
     vector<int> v3(10, 5);
     int l[] = {4, 5, 6};
     // 引数にアドレスの範囲を指している
     vector<int> v4(l, end(l));
     vector<int> v5{4, 5, 6};
     vector<int> cpV5(v5);
     rep(i, v1.size()){
         cout << v1[i] << ', ';
         if (i == v1.size()-1) cout << v1[i] << endl;
     }




     return 0;
 }
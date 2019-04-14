//
// Created _ on 2019/04/12.
//
#include <iostream>
#include <cstring>
using namespace std;


int getDigitSum(int n){
    int sum = 0;
    while(true){
       sum += n % 10;
       n /= 10;
       if(n == 0){
           break;
       }
    }
    return sum;
}


int main(){
    int n;
    int a, b;
    cin >> n;
    cin >> a >> b;

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        int num = getDigitSum(i);
        if(num >= a && num <= b){
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}
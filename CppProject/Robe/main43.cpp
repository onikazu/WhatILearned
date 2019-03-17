//
// Created by 増村和季 on 2019/03/17.
//

#include <iostream>
using namespace std;


int main(){
    int num1, num2;

    cout << "2つ値を入力してください >";
    cin >> num1 >> num2;

    if(num1 > num2)
        cout << "大きい方の値は" << num1 << "です。" << endl;
    else
        cout << "大きい方の値は" << num2 << "です。" << endl;

    return 0;
}
//
// Created by onikazu on 2019/03/17.
//

#include <iostream>
using namespace std;

int main(){
    int num1, num2;

    cout << "2つの値を入力してください >";
    cin >> num1 >> num2;

    cout << "大きい方の値は" << ((num1 > num2) ? num1 : num2) << "です。" << endl;

    return 0;
}
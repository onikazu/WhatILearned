//
// Created by 増村和季 on 2019/03/17.
//

#include <iostream>
using namespace std;


int main(){
    int a, b;
    cout << "数値を入力してください >";
    cin >> a >> b;
    if ((a*b)%2 == 0)
        cout << "答え:Even" << endl;
    else
        cout << "答え:Odd" << endl;
    return 0;
}
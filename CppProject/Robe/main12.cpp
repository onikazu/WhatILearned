//
// Created by 増村和季 on 2019/03/15.
//

#include <iostream>
using namespace std;


int ChangeToShohwa(int a){
    if(1926 <= a && a <= 1989)
        return a -1925;
    else
        return 0;
}


void Shohwa(){
    int a;

    cout << "西暦を入力してください";
    cin >> a;

    if (ChangeToShohwa(a) == 0)
        cout << "その年は昭和ではありません" << endl;
    else
        cout << "その年は昭和" << ChangeToShohwa(a) << "年です．" << endl;
}


int main(){
    Shohwa();
    Shohwa();
    return 0;
}
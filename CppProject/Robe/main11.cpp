//
// Created by 増村和季 on 2019/03/15.
//

#include <iostream>
using namespace std;


void Birthmonth(){
    int a;

    cout << "あなたは何月生まれですか？";
    cin >> a;

    if(1 <= a && a <= 12) {
        cout << "へー" << a << "月なんですか." << endl;
    }else{
        cout << a << "月やと！？" << endl;
        cout << "んな月，あらへんわ" << endl;
    }
}


int main(){
    Birthmonth();
    Birthmonth();
    return 0;
}
//
// Created by 増村和季 on 2019/03/15.
//

#include <iostream>
using namespace std;


int main(){
    int a, b;

    while(1){
        cout << "1番目の値を入力してください";
        cin >> a;

        cout << "2番目の値を入力してください";
        cin >> b;

        if (b == 0){
            cout << "0では割れません" << endl;
            break;
        }

        cout << a << "/" << b << " = " << a/b << "..." << a % b << endl;
    }

    cout << "プログラムは終了しました" << endl;

    return 0;
}
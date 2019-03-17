//
// Created by onikazu on 2019/03/15.
//

#include <iostream>
using namespace std;


int main(){
    int a, b, i;

    for(i = 0; i < 5; i++){
        cout << "1番目の値を入力してください >";
        cin >> a;

        cout << "2番目の値を入力してください >";
        cin >> b;

        if(b == 0){
            cout << "0では割れません" << endl;
            continue;
        }

        cout << a << "/" << b << "=" << a/b << "..." << a % b << endl;
    }

    cout << "プログラムは終了しました" << endl;
    return 0;
}
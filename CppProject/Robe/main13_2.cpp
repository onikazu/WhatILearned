//
// Created by 増村和季 on 2019/03/15.
//

#include <iostream>
using namespace std;


void Points(){
    int a;

    cout << "テストは何点でしたか";
    cin >> a;

    cout << "へー" << a * (0 <= a && a <= 100) << "点でしたか．" << endl;
}

int main(){
    Points();
    Points();
    return 0;
}
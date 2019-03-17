//
// Created by onikazu on 2019/03/15.
//

#include <iostream>
#include <stdio.h>
using namespace std;


void f1(int x, int y){
    // 文字列を入れるための容器
    char szResult[50];

    // 文字列の作成
    sprintf(szResult, "f(%d, %d) = %d", x, y, 2 * x + y);

    // 文字列の表示
    cout << szResult << endl;
}

// 同義の関数
void f2(int x, int y){
    printf("f(%d, %d) = %d\n", x, y, 2 * x + y);
}



int main(){
    f1(1, 2);
    f1(182, 144);
    f2(1, 2);
    f2(182, 144);

    return 0;
}

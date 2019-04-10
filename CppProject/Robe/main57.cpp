//
// Created by 増村和季 on 2019/03/21.
//

#include <iostream>
using namespace std;


void DispSize(const char* array){
    cout << "この変数のサイズは" << sizeof(array) << "バイトです" << endl;
}


int main(){
    char data1[100];
    char data2[200];

    DispSize(data1);
    DispSize(data2);

    return 0;
}
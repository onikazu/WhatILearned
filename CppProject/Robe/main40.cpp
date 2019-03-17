//
// Created by onikazu on 2019/03/17.
//

#include <iostream>
#include <cstdio>
using namespace std;


int strlen(char* str){
    int i;
    for (i=0; str[i]; i++);
    return i;
}

void DispLength(char* str){
    printf("文字列「%s」の長さは%dバイトです\n", str, strlen(str));
}

int main(){
    DispLength("ホメほめーる");
    DispLength("title");
    DispLength("");

    return 0;
}
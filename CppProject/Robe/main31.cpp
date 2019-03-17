//
// Created by onikazu on 2019/03/16.
//

#include <iostream>
#include <cstdio>
using namespace std;


int main(){
    int a;
    char b[10];
    printf("a: %p\nb: %p\nmain: %p\n", &a, b, main);
    printf("a: %d\nb: %d\nmain: %d\n", &a, b, main);
}


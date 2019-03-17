//
// Created by onikazu on 2019/03/15.
//

#include <iostream>
using namespace std;


#define FUNC(name) void name(int x, int y)

FUNC(Func);

int main(){
    Func(1, 2);
    Func(158, 144);
    return 0;
}


FUNC(Func){
    printf("2 * %d + %d = %d\n", x, y, 2*x+y);
}
//
// Created by onikazu on 2019/03/17.
//

#include <cstdio>
#include <iostream>
using namespace std;


int main(){
    FILE* pFile;

    pFile = fopen("./output/test.txt", "w");
    fputs("ファイルに書き込んじゃえ", pFile);
    fclose(pFile);

    return 0;
}

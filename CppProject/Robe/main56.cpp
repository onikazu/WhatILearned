//
// Created by 増村和季 on 2019/03/21.
//

#include <iostream>
#include <cstdio>
using namespace std;


int main(){
    FILE* pFile;
    int nLength;
    char buffer[512];

    pFile = fopen("./output/fwrite.txt", "rb");
    if (pFile == NULL){
        return 0;
    }

    fread(&nLength, sizeof(nLength), 1, pFile);
    fread(buffer, 1, sizeof(buffer), pFile);
    buffer[sizeof(buffer)-1] = 0;

    printf("文字列の長さは%dバイトです。\n%s\n", nLength, buffer);

    fclose(pFile);

    return 0;
}
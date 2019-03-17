//
// Created by 増村和季 on 2019/03/17.
//

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;


int main(){
    FILE* pFile;
    char buffer[512];
    size_t nLength;

    printf("なにか文字列を入力してください > ");
    cin >> buffer;

    pFile = fopen("./output/fwrite.txt", "wb");

    nLength = strlen(buffer);
    fwrite(&nLength, 4, 1, pFile);
    fwrite(buffer, 1, nLength + 1, pFile);

    fclose(pFile);

    return 0;

}
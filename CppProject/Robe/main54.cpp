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
    int i;

    printf("なにか文字列を入力してください > ");
    gets(buffer);

    pFile = fopen("./output/fprintf.txt", "w");
    fprintf(pFile, "%lu\n", strlen(buffer));
    for (i = 0; buffer[i]; i++){
        fprintf(pFile, "%02X", (unsigned char)buffer[i]);
    }

    fclose(pFile);

    return 0;

}
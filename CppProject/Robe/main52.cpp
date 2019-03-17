//
// Created by 増村和季 on 2019/03/17.
//

#include <iostream>
#include <cstdio>

int main(){
    FILE* pFile;
    char buffer[128];

    pFile = fopen("./output/test.txt", "r");
    fgets(buffer, 128, pFile);
    printf(buffer);
    fclose(pFile);
    return 0;
}
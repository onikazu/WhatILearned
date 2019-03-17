//
// Created by 増村和季 on 2019/03/17.
//

#include <iostream>
#include <cstdio>
using namespace std;


int strcnt(const char* psz, int letter){
    int num;
    for (num = 0; *psz; psz++){
        if (*psz == letter)
            num++;
    }
    return num;
}


int main(){
    char szPath[] = "C:/Program Files/Robert/BH/BH.exe";
    printf("ファイル%sは%d重のフォルダの中に入っています", szPath, strcnt(szPath, '/') - 1);
    return 0;
}
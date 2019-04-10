//
// Created by 増村和季 on 2019/03/21.
//

#include <iostream>
using namespace std;


#define ELEM(array) (sizeof(array)/sizeof *(array))

struct SStudent{
    char szName[16];
    int nJapanese;
    int nMath;
    int nEnglish;
};

void Disp(const SStudent& student){
    cout << "名前 : " << student.szName << endl;
    cout << "国語 : " << student.nJapanese;
    cout << "数学 : " << student.nMath;
    cout << "英語 : " << student.nEnglish << endl;
}

int main(){
    SStudent students[] = {
        {"赤井", 23, 45, 75,},
        {"加西", 22, 63, 34,},
        {"上念", 63, 57, 88,},
    };

    int i;
    for (i = 0; i < ELEM(students); i++)
        Disp(students[i]);

    return 0;
}
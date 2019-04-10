//
// Created by 増村和季 on 2019/03/21.
//

#include <iostream>
using namespace std;


#define ELEM(array) (sizeof(array) / sizeof*(array))

struct SStudent{
    char szName[16];
    int nJapanese;
    int nMath;
    int nEnglish;
};

void Disp(const SStudent* pstudent){
    cout << "名前　：　" << pstudent->szName << endl;
    cout << "国語　：　" << pstudent->nJapanese << endl;
    cout << "数学　：　" << pstudent->nMath << endl;
    cout << "英語　：　" << pstudent->nEnglish << endl;
}


int main(){
    SStudent students[] = {
            { "赤井孝",   73, 98, 86, },
            { "笠井大介", 64, 45, 40, },
            { "吉田叶",   76, 78, 69, },
    };

    int i;

    for (i=0; i<ELEM(students); i++)
        Disp(&students[i]);

    return 0;
}
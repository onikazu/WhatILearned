//
// Created by 増村和季 on 2019/03/15.
//

#include <iostream>
#include <cstring>
using namespace std;


int main(){
    int i;
    char szHello[] = "やぁ、こんちは";

    cout << "[" << szHello << "]を文字コードを変えると" << endl;

    for (i=0; i < strlen(szHello); i++)
        cout << (int)(unsigned char)szHello[i] << ",";

    cout << (int)(unsigned char)szHello[i] << endl << "になります" << endl;

    return 0;
}
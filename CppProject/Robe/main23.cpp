//
// Created by onikazu on 2019/03/15.
//

#include <iostream>
using namespace std;


int main()
{
    int i;
    char szHello[] = "やぁ、こんちは";

    cout << "「" << szHello << "」を文字コードに変えると、" << endl;

    for(i = 0; i < 21; i++)
        cout << (int)(unsigned char)szHello[i] << ", ";

    cout << (int)(unsigned char)szHello[21] << endl
         << "になります。" << endl;

    return 0;
}
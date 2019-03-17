//
// Created by onikazu on 2019/03/15.
// this program have not worked yet...
// utf-8 においては、もともとひらがななどの日本語文字は 3 バイトで表されます

#include <iostream>
using namespace std;


int main()
{
    cout << "「0」にふられた番号は "
         << (int)(unsigned char)'0' << " です。" << endl;
    cout << "「あ」にふられた番号は "
         << 'あ' << " です。" << endl;

    return 0;
}
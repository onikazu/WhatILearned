//
// Created by 増村和季 on 2019/03/16.
//

#include <iostream>
using namespace std;



int main()
{
    char a;
    char* p;

    p = &a;
//    cout << " p = " << (unsigned int) p << endl
//         << "&a = " << (unsigned int)&a << endl;

    cout << " p = " << (uintptr_t) p << endl
         << "&a = " << (uintptr_t)&a << endl;

    return 0;
}
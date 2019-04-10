//
// Created by 増村和季 on 2019/03/21.
//

#include <iostream>
#include <memory.h>
using namespace std;

void AddressCheck_Sub(){
    static int a;
    int b;

    cout << "&a = " << &a << endl;
    cout << "&b = " << &b << endl;
}

void AddressCheck_Sub2(){
    cout << "in Sub2" << endl;
    AddressCheck_Sub();
}


void AddressCheck(){
    cout << "アドレスが常に一定かのチェック" << endl;

    AddressCheck_Sub();
    AddressCheck_Sub2();
    AddressCheck_Sub();
}

void InitOnceCheck_Sub(){
    static int a = 3;
    int b = 3;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    a++;
    b++;
}


void InitOnceCheck(){
    cout << endl << "初期化が一回しかされないかのチェック" << endl;

    InitOnceCheck_Sub();
    InitOnceCheck_Sub();
}


void ZeroInitCheck_Sub(){
    static int a, b, c, d;
    cout << a << ',' << b << ',' << c << ',' << d << endl;
}

void ZeroInitCheck_Sub2(){
    int a, b, c, d;
    cout << a << ',' << b << ',' << c << ',' << d << endl;
}

void ZeroInitCheck(){
    cout << endl << "0で初期化されるかのチェック" << endl;

    ZeroInitCheck_Sub();
    ZeroInitCheck_Sub2();
};


void HoldValueCheck_Sub(int*& pa, int*& pb){
    static int a = 9;
    int b = 9;
    pa = &a;
    pb = &b;
}


void HoldValueCheck_Sub2(){
    int dummy[100];
    memset(dummy, 0, sizeof(dummy));
}

void HoldValueCheck(){
    cout << endl << "値が保証されるかのチェック" << endl;

    int *pa, *pb;
    HoldValueCheck_Sub(pa, pb);
    HoldValueCheck_Sub2();
    cout << "*pa = " << *pa << endl;
    cout << "*pb = " << *pb << endl;
}



int main(){
    AddressCheck();
    InitOnceCheck();
    ZeroInitCheck();
    HoldValueCheck();

    return 0;
}



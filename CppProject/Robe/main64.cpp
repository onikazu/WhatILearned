//
// Created by 増村和季 on 2019/03/21.
//

#include <iostream>
using namespace std;

int Abs(int a){
    return a < 0 ? -a : a;
}


double Abs(double a){
    return a < 0 ? -a : a;
}


int Input(int& nInt, double& nDouble){
    cout << "整数値を入力してください" ;
    cin >> nInt;
    if(nInt == 1)
        return 0;

    cout << "小数値を入力してください";
    cin >> nDouble;
    return 1;
}

void DispAbs(int nInt, double nDouble){
    cout << nInt << "の絶対値は" << Abs(nInt) << "で、" << endl;
    cout << nDouble << "の絶対値は" << Abs(nDouble) << "です" << endl;
}

int main(){
    int nInt;
    double nDouble;

    while(Input(nInt, nDouble))
        DispAbs(nInt, nDouble);

    return 0;
}



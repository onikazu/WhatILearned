//
// Created by 増村和季 on 2019/03/17.
//

#include <iostream>
using namespace std;

// 普通は引数用の変数が作られて、引数はそこに入れられる。配列の場合は引数自体がポインタになる(バイトの節約)
void Display(int array[]){
    int i;
    for(i=0; i<5; i++){
        cout << array[i] << endl;
    }
}

int main(){
    int i;
    int n[5];

    for(i=0; i<5; i++){
        n[i] = i * 5;
    }
    Display(n);

    return 0;
}
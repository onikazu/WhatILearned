//
// Created _ on 2019/04/12.
//

#include <iostream>
using namespace std;


int main(){
    int X;
    cin >> X;

    int a, b, c;
    cin >> a >> b >> c;

    int count = 0;


    for(int i=0; i<=a+1; i++){
        for(int j=0; j<=b+1; j++){
            for(int k=0; k<=c+1; k++){
                if (500*i+100*j+50*k == X){
                    count++;
                }
            }
        }
    }

    cout << count << endl;

    return 0;


}
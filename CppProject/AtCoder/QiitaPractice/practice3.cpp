//
// Created _ on 2019/04/12.
//

#include <iostream>
using namespace std;


int main(){
    int N;
    cin >> N;
    int A[N];
    int i;
    for(i=0; i<N; i++){
        cin >> A[i];
    }

    bool judge_repeat = true;
    int count = 0;
    while (judge_repeat) {
        for (i = 0; i < N; i++) {
            if(A[i]%2 == 0){
                A[i] = A[i] / 2;
            }else{
                judge_repeat = false;
            }
        }

        if (judge_repeat){
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
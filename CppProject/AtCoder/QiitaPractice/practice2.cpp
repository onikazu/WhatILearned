//
// Created _ on 2019/03/17.
//

#include <iostream>
using namespace std;

int main(){
    char s[3];
    int cnt = 0;
    cin >> s;
    char letter = '1';
    for (int i = 0; s[i]; i++){
        if (s[i] == letter)
            cnt++;
    }
    cout << "答え: " << cnt << endl;
    return 0;
}
/*
 * Copyright (c) 2019 ... All rights reserved.
 * ...
 */

 #include <iostream>
 #include <string>
 #include <algorithm>
 using namespace std;


int main(){
    string S;
    cin >> S;
    size_t len = S.size();

    string zero_first = "";
    string one_first = "";

    for(int i = 0; i < len; i++){
        if(i%2 == 0){
            zero_first += "0";
            one_first += "1";
        }else{
            zero_first += "1";
            one_first += "0";
        }
    }

    // 大きくなるほど離れている
    int zero_first_similarity = 0;
    int one_first_similarity = 0;

    for (int i = 0; i < len; i++){
        if (S[i] == zero_first[i]){
            one_first_similarity++;
        }else{
            zero_first_similarity++;
        }
    }

    int counter = 0;
    if (zero_first_similarity < one_first_similarity){
        for (int i = 0; i < len; i++){
            if (S[i] != zero_first[i]) {
                counter++;
            }
        }
    }else{
        for (int i = 0; i < len; i++){
            if (S[i] != one_first[i]) {
                counter++;
            }
        }
    }


    cout << counter << endl;


    return 0;
}
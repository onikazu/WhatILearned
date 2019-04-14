/*
 * Copyright (c) 2019 ... All rights reserved.
 * ...
 */

#include <iostream>

using namespace std;


int main(){
    string S;
    cin >> S;

    string T = "";

    string wordSet[] = {"dream", "dreamer", "erase", "eraser"};

    size_t len = S.length();

    bool finished = false;
    while(true){
        bool temp_flag = false;
        for(int i=0; i< sizeof(wordSet)/ sizeof(wordSet[0]); i++){
            string temp = T;
            temp += wordSet[i];
            size_t compare_len = temp.length();
            cout << temp << endl << S;
            int result = S.compare(0, compare_len, temp);
            if(result == 0){
                temp_flag = true;
                T = temp;
                if(T == S){
                    finished = true;
                }
                break;
            }
        }
        if (!temp_flag || finished){
            break;
        }
    }

    if(finished){
        cout << "YES" << endl;
    }else{
        cout << "NO";
    }

    return 0;
}
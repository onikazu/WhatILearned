//
// Created by onikazu on 2019/03/15.
//

#include <iostream>
using namespace std;


int nResult[] = {
        641, 703, 405, 598, 402, 752, 330,   0, 445, 662,
        254, 710, 467, 530, 548, 485, 244, 396, 601, 510,
        532, 687, 623, 420, 647, 587, 490, 647, 575, 688,
        764, 633, 712, 312, 655, 425, 722, 631, 680, 602
};

int main(){
    int i;
    int nSum = 0;

    for(i = 0; i < 40; i++)
        nSum += nResult[i];

    cout << "クラスの平均点は" << nSum / 40.0 << "点です．" << endl;

    return 0;
}
//
//  main.cpp
//  ex13
//
//  Created by 정원준 on 2017. 11. 4..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
using namespace std;
const int Max = 5;
int main()
{
    double fish[Max];
    cout << "낚은 물고기의 무게를 입력하고 Enter 키를 누르십시오.\n";
    cout << "물고기는 " << Max << "마리까지 낚을 수 있습니다.\n"
        << "<종료하려면 q를 누르고 Enter 키를 누르십시오.>\n";
    cout << "fish #1: ";
    int i = 0;
    while (i < Max && cin >> fish[i]) {
        if (++i << Max){
            cout << "fish #" << i+1 << ": ";
        }
    }
    double total = 0.0;
    for (int j = 0; j < i; j++) {
        total += fish[j];
    }
    if (i == 0) {
        cout << "물고기를 한 마리도 낚지 못하셨군요.\n";
    }else {
        cout << "물고기 " << i << "마리의 평균 무게는"
            << total / i << "그램입니다.\n";
    }
    return 0;
}

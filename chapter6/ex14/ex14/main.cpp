//
//  main.cpp
//  ex14
//
//  Created by 정원준 on 2017. 11. 4..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
using namespace std;
const int Max = 5;
int main()
{
    int golf[Max];
    cout << "골프 점수를 입력하고 Enter 키를 누르십시오.\n";
    cout << "총 " << Max << " 라운드를 입력해야합니다.\n";
    int i;
    for (i = 0; i < Max; ++i)
    {
        cout << "제" << i+1 << "라운드: ";
        while (!(cin >> golf[i])) {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "점수를 입력하고 Enter 키를 누르십시오: ";
        }
    }
    double total = 0.0;
    for (i = 0; i < Max; ++i)
        total += golf[i];
    
    cout << Max << " 라운드의 평균 점수 = "
        << total / Max << "\n";
    return 0;
}

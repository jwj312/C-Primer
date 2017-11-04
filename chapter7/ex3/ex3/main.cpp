//
//  main.cpp
//  ex3
//
//  Created by 정원준 on 2017. 11. 4..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
#include "n_chars.h"
using namespace std;
void n_chars(char, int);
int main()
{
    int times;
    char ch;
    
    cout << "문자를 입력하고 Enter 키를 누르십시오: ";
    cin >> ch;
    while (ch != 'q')
    {
        cout << "정수를 입력하고 Enter 키를 누르십시오: ";
        cin >> times;
        n_chars(ch, times);
        cout << "\n또 다른 문자를 입력하고 Enter 키를 누르거나 "
                "q 키를 눌러 종료하십시오: ";
            cin >> ch;
    }
    cout << "times의 값은 " << times << "입니다.\n";//경고??
    cout << "종료합니다.\n";
    return 0;
}



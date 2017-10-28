//
//  main.cpp
//  ex5
//
//  Created by 정원준 on 2017. 10. 28..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
using namespace std;
const int ArSize = 6;
int main()
{
    int people[ArSize];
    cout << "동료들의 아는 사람 수를 입력하고 Enter 키를 누르십시오.\n"
        << ArSize << "명 이상의 데이터를 입력하거나 음수를 입력하면\n"
        << "프로그램이 종료합니다.\n";
    
    int i = 0;
    int temp;
    cin >> temp;
    while ( i < ArSize && temp >= 0)
    {
        people[i++] = temp;
        if (i < ArSize)
            cin >> temp;
    }
    if ( i == 0)
        cout << "데이터가 없으므로 종료합니다.\n";
    else
    {
        cout << "당신의 아는 사람 수를 입력하고 Enter 키를 누르십시오: ";
        int you;
        cin >> you;
        int count = 0;
        for (int j = 0; j < i; j++)
            if (people[j] > you)
                count++;
        cout << "동료들 중 " << count;
        cout << "명이 당신보다 발이 넓습니다.\n";
    }
    return 0;
}

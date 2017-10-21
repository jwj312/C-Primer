//
//  main.cpp
//  ex8
//
//  Created by 정원준 on 2017. 10. 21..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "셈돌이는 수 5개의 합계와 평균을 계산해 줍니다.\n";
    cout << "값 5개를 입력하십시오:\n";
    double number;
    double sum = 0.0;
    for (int i = 1; i <= 5; ++i)
    {
        cout << "값 " << i << ": ";
        cin >> number;
        sum += number;
    }
    cout << "수 5개를 잘 선택하셨군요! ";
    cout << "수 5개의 합은 " << sum << "이고 \n";
    cout << "평균은 " << sum / 5 << "입니다.\n";
    cout << "셈돌이 안녕!\n";
    return 0;
    }


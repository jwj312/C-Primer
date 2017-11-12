//
//  main.cpp
//  ex4
//
//  Created by 정원준 on 2017. 11. 12..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
using namespace std;
long double odds(unsigned numbers, unsigned picks);
int main()
{
    double total, choices;
    cout << "게임 카드에 들어 있는 수의 개수와 뽑을 수의 개수를 입력하고\n"
        "Enter 키를 누르십시오:\n";
    while ((cin >> total >> choices) && choices <= total)
    {
        cout << "당신의 승룰은 ";
        cout << odds(total, choices);
        cout << "입니다.\n";
        cout << "다음 두 수를 뽑으십시오(종료하려면 q를 누르십시오): ";
    }
    cout << "종료합니다.\n";
    return 0;
}
long double odds(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;
    
    for (n = numbers, p = picks; p > 0; n--, p--) {
        result = result * n / p ;
    }
    return result;
}


//
//  main.cpp
//  ex9
//
//  Created by 정원준 on 2017. 11. 4..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "두 숫자를 입력하고 Enter 키를 누르십시오: ";
    cin >> a >> b;
    cout << a << "와 " << b << "중 더 큰 수";
    int c = a > b ? a : b;
    cout << "는 " << c << "\n";
    return 0;
}

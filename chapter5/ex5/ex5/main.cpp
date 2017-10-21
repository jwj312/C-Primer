//
//  main.cpp
//  ex5
//
//  Created by 정원준 on 2017. 10. 21..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "정수를 입력하고 Enter 키를 누르십시오: ";
    int by;
    cin >> by;
    cout << by << "갱신 크기로 카운트:\n";
    for (int i = 0; i < 100; i = i + by)
        cout << i << "\n";
    return 0;
}

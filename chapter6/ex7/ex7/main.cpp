//
//  main.cpp
//  ex7
//
//  Created by 정원준 on 2017. 11. 4..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
#include <climits>
using namespace std;
bool is_int(double);
int main()
{
    double num;
    
    cout << "정수 값을 입력하고 Enter 키를 누르십시오: ";
    cin >> num;
    while (!is_int(num)) {
        cout << "범위초과 -- 다시하십시오: ";
        cin >> num;
    }
    int val = num;
    cout << "다음 정수를 입력했습니다: " << val << "\n";
    return 0;
}

bool is_int(double x)
{
    if (x <= INT_MAX && x >= INT_MIN) {
        return true;
    }else {
        return false;
    }
}

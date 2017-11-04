//
//  main.cpp
//  ex6
//
//  Created by 정원준 on 2017. 11. 4..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
using namespace std;
const char * qualify[4] =
{
    "10000미터 경주\n",
    "모래사장 레슬링\n",
    "부메랑 축제\n",
    "고스톱 최강자전\n"
};
int main()
{
    int age;
    cout << "나이를 입력하고 Enter 키를 누르십시오: ";
    cin >> age;
    int index;
    
    if (age > 17 && age < 35) {
        index = 0;
    }else if (age >=35 && age < 50) {
        index = 1;
    }else if (age >=50 && age < 65) {
        index = 2;
    }else {
        index = 3;
    }
    cout << "당신은 다음 경기에 참가할 자격이 있습니다: " << qualify[index];
    return 0;
}

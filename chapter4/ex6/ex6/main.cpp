//
//  main.cpp
//  ex6
//
//  Created by aa on 2017. 9. 23..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    cout << "지금 사시는 아프트에 언제 입주하셨습니까?\n";
    int year;
    cin >> year;
    cout << "주소를 말씀해 주시겠습니까?\n";
    char address[80];
    cin.getline(address, 80);
    cout << "아파트 입주 연도: " << year << "\n";
    cout << "주소: " << address << "\n";
    return 0;
}

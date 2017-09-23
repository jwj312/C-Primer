//
//  main.cpp
//  ex3
//
//  Created by aa on 2017. 9. 23..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];
    
    cout << "회원님의 이름과 직행을 입력하고 Enter 키를 누르십시오:\n";
    cin >> name;
    cout << "즐겨 드시는 후식을 입력하고 Enter 키를 누르십시오\n";
    cin >> dessert;
    cout << "맛있는 " << dessert;
    cout << "후식을 만들어 드리겠습니다. " << name << "님!\n";
    return 0;
}

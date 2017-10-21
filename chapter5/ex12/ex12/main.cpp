//
//  main.cpp
//  ex12
//
//  Created by 정원준 on 2017. 10. 21..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
using namespace std;
const int ArSize = 20;
int main()
{
    char name[ArSize];
    
    cout << "영문 이름을 입력하십시오: ";
    cin.getline(name, ArSize);
    cout << "귀하의 영문 이름을 한 줄에 한 자씩 ";
    cout << "ASCII 코드와 함께 표시하면 이렇습니다:\n";
    int i = 0;
    while (name[i] != '\0')
    {
        cout << name[i] << ": " << int(name[i]) << '\n';
        i++;
    }
    return 0;
}


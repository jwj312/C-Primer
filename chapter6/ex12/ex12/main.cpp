//
//  main.cpp
//  ex12
//
//  Created by 정원준 on 2017. 11. 4..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
using namespace std;
const int ArSize = 80;
int main()
{
    char line[ArSize];
    int spaces = 0;
    
    cout << "텍스트 한 줄을 입력하고 Enter 키를 누르십시오:\n";
    cin.get(line, ArSize);
    for (int i = 0; line[i] != '\0'; ++i)
    {
        cout << line[i];
        if (line[i] == '.') {
            break;
        }
        if (line[i] != ' ') {
            continue;
        }spaces++;
    }
    cout << "\n빈 칸은 " << spaces << "개입니다.\n";
    return 0;
}


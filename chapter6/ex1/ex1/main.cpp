//
//  main.cpp
//  ex1
//
//  Created by 정원준 on 2017. 10. 28..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    char ch;
    int spaces = 0;
    int total = 0;
    cin.get(ch);
    while (ch != '.')
    {
        if (ch == ' ')
            spaces++;
        total++;
        cin.get(ch);
    }
    cout << "문장의 총 문자 수는 " << total << "이고, ";
    cout << "그 중 빈 칸은 " << spaces << "개입니다.\n";
    return 0;
}


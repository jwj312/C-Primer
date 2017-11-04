//
//  main.cpp
//  ex8
//
//  Created by 정원준 on 2017. 11. 4..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    cout << "분석할 텍스트와 입력을 종료시키는 @를 입력하고 "
    << "Enter 키를 누르십시오.\n";
    
    char ch;
    int whitespace = 0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int others = 0;
    
    cin.get(ch);
    while (ch != '@')
    {
        if (isalpha(ch)) {
            chars++;
        }else if (isspace(ch)){
            whitespace++;
        }else if (isdigit(ch)){
            digits++;
        }else if (ispunct(ch)){
            punct++;
        }else {
            others++;
        }
        cin.get(ch);
    }
    cout << "영문자 " << chars << "문자, "
        << "공백 " << whitespace << "개, "
        << "숫자 " << digits << "개, "
        << "구두점 " << punct << "개, "
        << "기타 " << others << "개.\n";
    return 0;
}//기타가 2개가 있음 ??





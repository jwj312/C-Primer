//
//  main.cpp
//  ex8
//
//  Created by 정원준 on 2017. 11. 19..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
using namespace std;
int c_in_str(const char * str, char ch);
int main()
{
    char mmm[15] = "minmum";
    
    char const *wail = "ululate";
    
    int ms = c_in_str(mmm, 'm');
    int us = c_in_str(wail, 'u');
    cout << mmm << "에는 문자 m이 " << ms << "개 있습니다.\n";
    cout << wail << "에는 문자 u가 " << us << "개 있습니다.\n";
    return 0;
}


int c_in_str(const char * str, char ch)
{
    int count = 0;
    
    while (*str) {
        if (*str == ch) {
            count++;
        }
        str++;
    }
    return count;
}

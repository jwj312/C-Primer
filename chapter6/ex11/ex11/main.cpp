//
//  main.cpp
//  ex11
//
//  Created by 정원준 on 2017. 11. 4..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
using namespace std;

enum {red, orange, yellow, green, blue, violet, indigo};

int main()
{
    cout << "컬러 코드(0-6)를 입력하고 Enter 키를 누르십시오: ";
    int code;
    cin >> code;
    while (code >= red && code <= indigo)
    {
        switch (code)
        {
            case red    : cout << "그녀의 입술은 붉었습니다.\n";
                break;
            case orange : cout << "그녀의 머리카락은 주황색이었습니다.\n";
                break;
            case yellow : cout << "그녀의 신발은 노랑색이었습니다.\n";
                break;
            case green  : cout << "그녀는 손톱을 초록색으로 칠했습니다.\n";
                break;
            case blue   : cout << "그녀의 스웨터는 파랑색이었습니다\n";
                break;
            case violet : cout << "그녀의 눈은 보라색이었습니다.\n";
                break;
            case indigo : cout << "그녀의 분위기는 쪽빛이었습니다.\n";
                break;
        }
        cout << "컬러 코드 (0~6)를 입력하십시오: ";
        cin >> code;
    }
    cout << "종료합니다.\n";
    return 0;
}




//
//  main.cpp
//  ex4
//
//  Created by 정원준 on 2017. 10. 28..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
#include "main.h"

using namespace std;

int main()
{
    float returnValue = myFunctionA(10);
    
    cout << "리턴값:" << returnValue << endl;
    
    return 0;
}


float myFunctionA(int value)
{
    cout << "받은값: " << value << endl;
    if (value == 0) {
        return value;
    }
    cout << "이 프로그램은 하드 디스크를 다시 포맷하고\n"
    "모든 데이터를 파괴합니다.\n"
    "계속하시겠습니까? <y/n> ";
    char ch;
    cin >> ch;
    if (ch == 'y' || ch == 'Y')
        cout << "경고 메세지를 다시 한번 읽어보십시오!\a\a\n";
    else if (ch == 'n' || ch == 'N')
        cout << "현명한 선택입니다. 종료합니다.\n";
    else
        cout << "y도 n도 입력하시지 않으시니 "
        "디스크에 관심이 없는 모양이군요.\n";
    
    //float returnValue = 10.012345;
    
    return myFunctionA(value - 1);
}


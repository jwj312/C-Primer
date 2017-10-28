//
//  main.cpp
//  ex2
//
//  Created by 정원준 on 2017. 10. 28..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    char ch;
    
    cout << "입력을 하시면, 반복해 드리겠습니다.\n";
    cin.get(ch);
    while(ch != '.')
    {
        if (ch == '\n')
            cout << ch;
        else
            cout << ++ch;
        cin.get(ch);
    }
    cout << "무슨 말인지 모르겠죠?\n";//???뭐야이거
    return 0;
}

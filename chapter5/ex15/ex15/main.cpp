//
//  main.cpp
//  ex15
//
//  Created by 정원준 on 2017. 10. 21..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    char ch;
    int count = 0;
    
    cin >> ch;
    while (ch != '#')
    {
        cout << ch;
        count++;
        cin >> ch;
    }
    cout << "\n" << count << " 문자를 읽었습니다.\n";
    return 0;
}


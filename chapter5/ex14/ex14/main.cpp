//
//  main.cpp
//  ex14
//
//  Created by 정원준 on 2017. 10. 21..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "1부터 10까지의 수 중에서 좋아하는 수를 입력하고 ";
    cout << "Enter 키를 누르십시오.\n";
    do
    {
        cin >> n;
    }while (n != 7);
    cout << "맞습니다,내가 좋아하는 수는 7입니다.\n";
    return 0;
}

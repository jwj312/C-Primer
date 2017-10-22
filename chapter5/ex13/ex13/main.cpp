//
//  main.cpp
//  ex13
//
//  Created by 정원준 on 2017. 10. 21..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    cout << "지연 시간을 초 단위로 입력하고 Enter 키를 누르십시오: ";
    float secs; cin >> secs;
    clock_t delay = secs * CLOCKS_PER_SEC;
    
    cout << "카운트를 시작합니다.\a\n";
    clock_t start = clock();
    while (clock() - start < delay ) {
        ;
    }
    cout << "마침\a\n";
    
    //cout.put('x');
    //EOF
    return 0;
}

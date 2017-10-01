//
//  main.cpp
//  ex14
//
//  Created by aa on 2017. 10. 1..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    double wages[3] = {10000.0,20000.0,30000.0};
    short stacks[3] = {3, 2, 1};
    
    double * pw = wages;
    short * ps = &stacks[0];
    
    cout << "pw = " << pw << "*pw = " << *pw << "\n";
    pw = pw + 1;
    cout << "pw 포인터에 1을 더함:\n";
    cout << "pw = " << pw << "*pw = " << *pw << "\n\n";
    
    cout << "ps = " << ps << ", *ps = " << *ps << "\n";
    ps = ps + 1;
    cout << "ps 포인터에 1을 더함:\n";
    cout << "ps = " << ps << "*ps = " << *ps << "\n\n";
    
    cout << "배열 표기법으로 두 원소에 접근\n";
    cout << stacks[0] << " " << stacks[1] << "\n";
    cout << "포인터 표기법으로 두 원소에 접근\n";
    cout << *stacks << " " << *(stacks + 1) << "\n";
    
    cout << sizeof wages << " = wages 배열의 크기\n";
    cout << sizeof pw << " = pw 포인터의 크기\n";
    return 0;
}

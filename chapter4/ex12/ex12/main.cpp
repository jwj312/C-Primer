//
//  main.cpp
//  ex12
//
//  Created by aa on 2017. 10. 1..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int * pi = new int;
    *pi = 1001;
    
    cout << "int ";
    cout << "값 = " << *pi << "위치 = " << pi << "\n";
    
    double * pd = new double;
    *pd = 10000001.0;
    
    cout << "double ";
    cout << "값 = " << *pd << ": 위치 = " << pd << "\n";
    cout << "pi의 크기 = " << sizeof pi;
    cout << ": *pi의 크기 = " << sizeof *pi << "\n";
    cout << "pd의 크기 = " << sizeof pd;
    cout << ": *pd의 크기 = " << sizeof *pd << "\n";
    return 0;
}

//
//  main.cpp
//  ex13
//
//  Created by aa on 2017. 10. 1..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    double * p3 = new double [3];
    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;
    cout << "p3[1]은 " << p3[1] << "입니다.\n";
    p3 = p3 + 1;
    cout << "이제 p3[0]은 " << p3[0] << "이고 ";
    cout << "p3[1]은 " << p3[1] << "입니다.\n";
    p3 = p3 - 1;
    delete [] p3;
    return 0;
}

//
//  main.cpp
//  ex4
//
//  Created by 정원준 on 2017. 10. 21..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
using namespace std;
const int ArSize = 16;
int main()
{
    double factorials[ArSize];
    factorials[1] = factorials[0] = 1.0;
    int i;
    for (i = 2; i < ArSize; i++)
        factorials[i] = i * factorials[i-1];
    for (i = 0; i < ArSize; i++)
        cout << i << "! = " << factorials[i] << "\n";
    return 0;
}

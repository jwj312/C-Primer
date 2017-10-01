//
//  main.cpp
//  ex11
//
//  Created by aa on 2017. 10. 1..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int higgens = 5;
    int * pi = &higgens;
    
    cout << "higgens의 값은 = " << higgens
    << "이고, higgens의 주소는 = " << &higgens << "입니다.\n";
    cout << "*pi의 값은 = " << *pi
         << "이고, pi의 값은 = " << pi << "입니다.\n";
    return 0;
}

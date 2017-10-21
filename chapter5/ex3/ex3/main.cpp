//
//  main.cpp
//  ex3
//
//  Created by 정원준 on 2017. 10. 21..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
using namespace std;
int mian()
{
    int x;
    
    cout << "표현식 x = 100의 값은 ";
    cout << (x = 100) << "입니다.\n";
    cout << "이제 x = " << x << "입니다.\n";
    cout << "표현식 x < 3의 값은 ";
    cout << (x < 3) << "입니다.\n";
    cout << "표현식 x > 3의 값은 ";
    cout << (x > 3) << "입니다.\n";
    cout.setf(ios_base::boolalpha);
    cout << "표현식 x < 3의 값은 ";
    cout << (x < 3) << "입니다.\n";
    cout << "표현식 x > 3의 값은 ";
    cout << (x > 3) << "입니다.\n";
    return 0;
}

//
//  main.cpp
//  ex9
//
//  Created by aa on 2017. 9. 30..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int donuts;
    double cups;
    
    cin >> donuts;
    cout << "donuts의 값은 = " << donuts;
    cout << "이고 donuts 의 주소는 = " << &donuts << "입니다.\n";
    //  참고:usingned (&donuts)와
    //      usingned (&cups)의 사용을 요구하는 경우도 있을 수 있다.<-- 경고 창이 나온다는 말같다.
    cin >> cups;
    cout << "cups의 값은 = " << cups;
    cout << "이고 cups의 주소는 = " << &cups << "입니다.\n";
    return 0;
}

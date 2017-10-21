//
//  main.cpp
//  ex2
//
//  Created by 정원준 on 2017. 10. 15..
//  Copyright © 2017년 wonjun.com. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int limit;
    cin >> limit;
    int i;
    for (i = limit; i; i--)
        cout << "i = " << i << "\n";
    cout << "이제 i = " << i << "이므로 종료합니다.\n";
    return 0;
}

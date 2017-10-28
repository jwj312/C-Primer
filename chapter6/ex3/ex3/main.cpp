//
//  main.cpp
//  ex3
//
//  Created by 정원준 on 2017. 10. 28..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
using namespace std;
const int Fave = 27;
int main()
{
    int n;
    
    cout << "1부터 100 사이의 수를 맞추는 놀이입니다.\n";
    cout << "수를 입력하고 Enter 키를 누르십시오: ";
    do
    {
        cin >> n;
        if (n < Fave)
            cout << "그보다 큰 수입니다. 다시 맞춰 보세요: ";
        else if (n > Fave)
            cout << "그보다 작은 수입니다. 다시 맞춰 보세요: ";
        else
            cout << "맞았습니다. 정답은 " << Fave << "입니다!\n";
    } while (n != Fave);
    return 0;
}

//
//  main.cpp
//  ex10
//
//  Created by aa on 2017. 9. 30..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int updates = 6;
    int * p_updates;
    
    p_updates = &updates;
    
    // 값을 두 가지 방법으로 표현
    cout << "값: &updates = " << updates;    // 그냥 값을 출력해준것
    cout << ", *p_updates = " << *p_updates << "\n";    // 주소로 값을 찾아가서 값을 출력해준거?????
    
    //주소를 두 가지 방법으로 표현
    cout << "주소: &updates = " << &updates;  // 그냥 주소값을 바로 출력한것
    cout << ", p_updates = " << p_updates << "\n";  // 주소값을 대입해서 출력한것
    
    //포인터를 사용하여 값을 변경
    *p_updates = *p_updates + 1;    // udates + 1추가
    cout << "이제 updates = " << updates << "\n";
    return 0;
}

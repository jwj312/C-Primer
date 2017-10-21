//
//  main.cpp
//  ex6
//
//  Created by 정원준 on 2017. 10. 21..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
using namespace std;
const int ArSize = 20;
int main()
{
    cout << "단어를 입력하고 Enter 키를 누르십시오: ";
    char word[ArSize];
    cin >> word;
    
    for (int i = strlen(word) - 1; i >= 0; --i) //?? 경고창이 뜬다..
        cout << word[i];
    cout << "\n";
    return 0;
}

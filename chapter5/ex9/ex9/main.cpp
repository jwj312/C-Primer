//
//  main.cpp
//  ex9
//
//  Created by 정원준 on 2017. 10. 21..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
const int ArSize = 20;
int main()
{
    cout << "단어를 입력하고 Enter 키를 누르십시오: ";
    char word[ArSize];
    cin >> word;
    
    char temp;
    int i,j;
    for (j = 0; i = strlen(word) - 1; j < i; --i, ++j)//??왜 에러가 나냐
    {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    
    cout << word << "\n";
    return 0;
}


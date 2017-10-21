//
//  main.cpp
//  ex11
//
//  Created by 정원준 on 2017. 10. 21..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char word[5] = "?ate";
    
    for (char ch = 'a'; strcmp(word, "mate"); ch++)
    {
        cout << word << "\n";
        word[0] = ch;
    }
    cout << "루프가 끝나면 단어는 " << word << "입니다.\n";
    return 0;
}

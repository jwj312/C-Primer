//
//  main.cpp
//  ex10
//
//  Created by 정원준 on 2017. 10. 21..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int quizscores[10] = {20, 20, 20, 20, 20, 19, 20, 18, 20, 20};
    
    cout << "제대로 하는 방법:\n";
    int i;
    for (i = 0; quizscores[i] == 20; ++i)
        cout << "퀴즈 " << i << "은(는) 20입니다.\n";
    
    cout << "아주 위험한 방법:\n";
    for (i = 0; quizscores[i] = 20; ++i) //실행은 잘 되는데 왜 경고가 날까
        cout << "퀴즈 " << i << "은(는) 20입니다.\n";
    
    return 0;
}

//
//  main.cpp
//  ex1
//
//  Created by aa on 2017. 9. 17..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
using namespace std;

void ex1();
void ex2();

int main()
{
    //ex1();
    ex2();
    return 0;
}

void ex1()
{
    int yams[3];
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;
    
    int yamcosts[3] = {100, 130, 15};
    
    cout << "고구마의 총 개수 = ";
    cout << yams[0] + yams[1] + yams[2] << "\n";
    cout << yams[1] << "개가 들어 있는 봉지의 단가는 ";
    cout << "개당" << yamcosts[1] << "원입니다.\n";
    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    total = total + yams[2] * yamcosts[2];
    cout << "세 봉지의 총 가격은 " << total << " 원입니다.\n";
    
    cout << "\nyams 배열의 크기는 = " << sizeof yams;
    cout << " 바이트입니다.\n";
    cout << "원소 1 개의 크기는 = " << sizeof yams[0];
    cout << "바이트입니다.\n";
}

void ex2()
{
    const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++owboy";
    
    cout << "안녕하세요! 저는 " << name2;
    cout << "입니다! 실례지만 성함이?\n";
    cin >> name1;
    cout << "아, 예 " << name1 << " 씨! 당신의 성함은 ";
    cout << strlen(name1) << "문자로 되어 있으므로 \n";
    cout << sizeof name1 << " 바이트의 배열에 저장해야겠군요.\n";
    cout << "당신의 영문 이니셜은 " << name1[0] << "로 시작하는군요.\n";
    name2[3] = '\0';
    cout << "제 이름의 처음 세 문자는 이렇습니다: ";
    cout << name2 << "\n";
}

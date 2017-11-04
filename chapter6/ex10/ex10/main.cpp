//
//  main.cpp
//  ex10
//
//  Created by 정원준 on 2017. 11. 4..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
#include "main.h"

using namespace std;
int main()
{
    showmenu();
    int choice;
    cin >> choice;
    while (choice != 5)
    {
        switch(choice)
        {
            case 1 : cout << "\a\n";
                break;
            case 2 : report();
                break;
            case 3 : cout << "사장님은 하루 종일 회사에 계셨습니다.\n";
                break;
            case 4 : comfort();
                break;
            default : cout << "그것은 선택할 수 없습니다.\n";
        }
        showmenu();
        cin >> choice;
    }
    cout << "종료합니다!\n";
    return 0;
}
void showmenu()
{
    std::cout << "1, 2, 3, 4, 5 중 하나를 입력하고 Enter 키를 누르십시오:\n"
    "1) 경보       2) 보고\n"
    "3) 알리바이    4) 휴식\n"
    "5) 종료\n";
}
void report()
{
    std::cout << "이번 주는 영업이 잘되었습니다.\n"
    "판매량이 120%나 늘었고, 지출은 35% 줄었습니다.\n";
}
void comfort()
{
    std::cout << "사원들은 당신을 업계 최고의 사장으로 생각합니다.\n"
    "이사회도 당신을 업계 최고의 사장으로 생각합니다.\n";
}






















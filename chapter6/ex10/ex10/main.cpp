//
//  main.cpp
//  ex10
//
//  Created by 정원준 on 2017. 11. 4..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
#include "showmenu.h"
#include "report.h"
#include "comfort.h"
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























//
//  main.cpp
//  ex2
//
//  Created by 정원준 on 2017. 11. 4..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
#include "cheers.h"
#include "cube.h"
using namespace std;
void cheers(int);
double cube(double x);
int main(void)
{
    cheers(5);
    cout << "수를 입력하고 Enter 키를 누르십시오: ";
    double side;
    cin >> side;
    double volume = cube(side);
    cout << "한 변이 " << side << "피트인 정육면체의 부피는 ";
    cout << volume << "세제곱피트입니다.\n";
    cheers(cube(2));
    return 0;
}




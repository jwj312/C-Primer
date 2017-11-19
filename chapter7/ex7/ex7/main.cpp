//
//  main.cpp
//  ex7
//
//  Created by 정원준 on 2017. 11. 12..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
using namespace std;
const int Max = 5;

int fill_array(double ar[], int limit);
void show_array(const double ar[],int n);
void reassess(double r, double ar[], int n);

int main()
{
    double properties[Max];
    
    int size = fill_array(properties, Max);
    show_array(properties, size);
    cout << "재평가 비율을 입력하고 Enter 키를 누르십시오: ";
    double rate;
    cin >> rate;
    reassess(rate, properties, size);
    show_array(properties, size);
    return 0;
}

int fill_array(double ar[], int limit)
{
    double temp;
    int i ;
    for (i = 0;i < limit; i++) {
        cout << i + 1 << "번 부동산의 가치를 입력하고 Enter 키를 누르십시오: ";
        cin >> temp;
        if(temp < 0) {
            break;
        }
        ar[i] = temp;
    }
    return i;
}

void show_array(const double ar[], int n)
{
    for (int i = 0; i < n; ++i) {
        cout << i + 1 << "번 부동산: ";
        cout << ar[i] << "만 원\n";
    }
}

void reassess(double r, double ar[], int n)
{
    for (int i = 0;i < n; ++i) {
        ar[i] *= r;
    }
}













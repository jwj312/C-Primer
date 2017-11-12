//
//  main.cpp
//  ex6
//
//  Created by 정원준 on 2017. 11. 12..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
using namespace std;
const int ArSize = 8;
int sum_arr(int arr[], int n);
int referceVariable(int & x);
int main()
{
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};
    
    cout << "배명 주소 = " << cookies << ", ";
    
    cout << "sizeof cookies = " << sizeof cookies << "\n";
    int sum = sum_arr(cookies, ArSize);
    cout << "먹은 과자 합계: " << sum << "\n";
    sum = sum_arr(cookies, 3);
    cout << "처음 세 사람은 과자" << sum << "개를 먹었습니다.\n";
    sum = sum_arr(cookies + 4, 4);
    cout << "마지막 네 사람은 과자 " << sum << "개를 먹었습니다.\n";
    
    // 참조 변수 연습
    int x = 5;
    x += 5;
    //referceVariable(x+5); // 컴파일에러
    referceVariable(x);
    return 0;
}

int sum_arr(int arr[], int n)
{
    int total = 0;
    cout << arr << " = arr, ";
    
    cout << "sizeof arr = " << sizeof((int *)arr) << "\n";
    for (int i = 0; i < n; i++) { // 8이 나온다?컴파일러마다 다른건가
        total = total + arr[i];
    }
    return total;
}

int referceVariable(int & x)
{
    return x;
}

//
//  main.cpp
//  ex5
//
//  Created by 정원준 on 2017. 11. 12..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
using namespace std;
const int ArSize = 8;
int sum_arr(int arr[], int n);
int main()
{
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};
    
    int sum = sum_arr(cookies, ArSize);
    cout << "먹은 과자 합계: " << sum << "\n";
    return 0;
}

int sum_arr(int arr[], int n)
{
    int total = 0;
    
    for ( int i = 0; i < n; i++){
        total = total + arr[i];
    }
    return total;
}
    


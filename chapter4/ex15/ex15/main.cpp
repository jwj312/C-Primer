//
//  main.cpp
//  ex15
//
//  Created by aa on 2017. 10. 1..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
using namespace std;
#include <cstring>
int main()
{
    char animal[20] = "호랑이";
    const char * bird = "참새";
    char * ps;
    
    cout << animal << "와(과) ";
    cout << bird << "\n";
    //  cout << ps << "\n"; 큰 실수 - ps가 초기화되지 않아서   프로그램이 실행되지 못한다
    
    cout << "동물의 종류를 입력하고 Enter 키를 누르십시오: ";
    cin >> animal;
    // cin >> ps;  너무 큰 실수여서 시도할 수 없다   ps가 할당된 공간을 가리키지 않는다.
    
    ps = animal;
    cout << ps << "!\n";
    cout << (int *) animal << " 위치에 " << animal << endl;
    cout << (int *) ps << " 위치에 " << ps << endl;
    
    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);
    cout << "strcpy()를 사용한 후의 상태:\n";
    cout << (int *) animal << " 위치에 " << animal << endl;
    cout << (int *) ps << " 위치에 " << ps << endl;
    delete [] ps;
    return 0;
    
}

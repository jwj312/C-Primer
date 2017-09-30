//
//  main.cpp
//  ex8
//
//  Created by aa on 2017. 9. 30..
//  Copyright © 2017년 wonjun. All rights reserved.
//

#include <iostream>
using namespace std;
struct inflatable
{
    char name[20];
    float volume;
    double price;
};
int main()
{
    inflatable bouquet =
    {
        "sunflowers",
        0.20,
        12.49
    };
    inflatable choice;
    cout << "bouquet : " << bouquet.name << " for $";
    cout << bouquet.price << "\n";
    
    choice = bouquet;
    cout << "choice: " << choice.name << " for $";
    cout << choice.price << "\n";
    return 0;
}

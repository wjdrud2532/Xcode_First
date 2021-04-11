//
//  11720.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/04/11.
//

#include <iostream>

using namespace std;

int main()
{
    int num1;
    cin >> num1;
    
    char num2;

    int sum = 0;

    for(int i=0; i<num1; i++)
    {
        cin >> num2;
        sum += (num2 - '0');
    }

    cout<<sum<<endl;

    return 0;
}

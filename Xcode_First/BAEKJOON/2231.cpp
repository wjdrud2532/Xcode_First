//
//  2231.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/05/01.
//

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int N;
    
    cin >> N;
    
    for(int i = 1; i < N; i ++)
    {
        int temp = i;
        int tempsum = 0;
        int sum = 0;
        
        while(temp > 0)
        {
            tempsum += temp % 10;
            temp /= 10;
        }
        
        sum = i + tempsum;
        
        if(N == sum)
        {
            cout << i;
            return 0;
        }
        
    }
    
    cout << "0";
    
}


//216 == 198 + 1 + 9 + 8


//
//  1436.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/05/04.
//


#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int N;
    
    cin >> N;
    int SixNum = 0;
    
    for(int i = 666; ; i ++)
    {
        int temp = i;
        do
        {
            if (temp % 1000 == 666)
            {
                SixNum++;
                break;
            }
            
            temp /= 10;
            
        }while(temp>0);
        
        
        
        if(N == SixNum)
        {
            cout << i << endl;
            break;
        }
        
    }
    
    return 0;
}




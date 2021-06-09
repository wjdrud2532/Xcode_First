//
//  5086.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/06/10.
//

#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::ios_base;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N1, N2;
    
    while(1)
    {
        cin >> N1 >> N2;
        
        if( N1 == 0 && N2 == 0)
            break;
        
        if(N2 % N1 == 0)
            cout << "factor\n";
        else if(N1 % N2 == 0)
            cout << "multiple\n";
        else
            cout << "neither\n";
    }
    
    return 0;
    
    
}






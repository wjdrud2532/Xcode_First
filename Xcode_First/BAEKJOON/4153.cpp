//
//  4153.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/04/29.
//

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::max;

#define Squared(x) ((x) * (x))

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    
    int x, y, z;
    
    while(1)
    {
        cin >> x >> y >> z;
        
        if(x == 0 && y == 0 && z == 0)
            break;
        
        if(max(x, y) == x)
            if(max(x, z) == x)              //x가 가장 큰 경우
            {
                if(Squared(x) == Squared(y) + Squared(z))
                    cout << "right\n";
                else
                    cout << "wrong\n";
            }
            else                            //z가 가장 큰 경우
            {
                if(Squared(z) == Squared(y) + Squared(x))
                    cout << "right\n";
                else
                    cout << "wrong\n";
            }
        else    //max(x, y) == y
            if(max(y, z) == y)              //y가 가장 큰 경우
            {
                if(Squared(y) == Squared(x) + Squared(z))
                    cout << "right\n";
                else
                    cout << "wrong\n";
            }
            else                            //z가 가장 큰 경우
            {
                if(Squared(z) == Squared(y) + Squared(x))
                    cout << "right\n";
                else
                    cout << "wrong\n";
            }
    }
    
    
}


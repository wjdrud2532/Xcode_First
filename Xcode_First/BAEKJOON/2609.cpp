//
//  2609.cpp
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
    int bigN, smallN;
    int max, min;
    
    cin >> N1 >> N2;
    if(N1 > N2)
    {
        bigN = N1;
        smallN = N2;
    }
    else
    {
        bigN = N1;
        smallN = N2;
    }
    
    int share, remain;
    while(1)
    {
        share = bigN % smallN;
        if(share == 0)
            break;
        
        bigN = smallN;
        smallN = share;
    }
    
    max = smallN;       //최소 공배수
    min = (N1 * N2) / max;  //최대 공약수
    
    cout << max << "\n" << min << "\n";
    
}






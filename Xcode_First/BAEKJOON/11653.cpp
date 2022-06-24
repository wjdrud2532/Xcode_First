//
//  11653.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/04/26.
//

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int N;
    
    cin >> N;
    
    if(N != 1)
        for(int i = 2; i <= N; i ++ )
            {
                if(N % i == 0)
                {
                    cout << i << endl;
                    N /= i;
                    i --;
                }
            }
    
}

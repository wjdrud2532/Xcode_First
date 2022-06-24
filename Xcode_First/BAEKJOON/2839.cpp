//
//  2839.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/04/07.
//

#include <iostream>

int main()
{
    int N, Count;
    
    std::cin >> N;
    
    if(N < 5)
    {
        if(N == 3)
            std::cout << 1;
        else
            std::cout << -1;
        
        return 0;
    }
    
    Count = N / 5;
    N %= 5;
    
    if (N == 0)
        std::cout << Count;
    else if(N == 1 || N == 3)
        std::cout << Count + 1;
    else if (N == 4)
        std::cout << Count + 2;
    else if (N == 2 && Count >= 2)
        std::cout << Count + 2;
    else
        std::cout << -1;
    
    return 0;
    
}


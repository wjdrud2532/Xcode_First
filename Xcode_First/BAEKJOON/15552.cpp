//
//  15552.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/04/05.
//

#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);       //c++의 속도를 높일 수 있음을 기억
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    
    int N;
    int A, B;
    
    std::cin >> N;
    
    for(int i = 0; i < N; i++)
    {
        std::cin >> A >> B;
        std::cout << A + B << "\n";
    }
    
    return 0;
}

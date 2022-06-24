//
//  10872.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/05/01.
//

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int factorial(int N)
{
    if(N > 1)
        return N * factorial(N - 1);
    
    return 1;
}

int main()
{
    int N;
    
    cin >> N;
    
    cout << factorial(N);
    
}

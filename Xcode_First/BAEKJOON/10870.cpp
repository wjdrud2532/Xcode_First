//
//  10870.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/05/01.
//

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int Pibo(int N)
{
    if(N == 0)
        return 0;
    else if (N == 1)
        return 1;
    else
        return Pibo(N - 1) + Pibo(N - 2);
}

int main()
{
    int N;
    
    cin >> N;
    
    cout << Pibo(N);
}

//
//  1003.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/05/25.
//
#include <iostream>

using namespace std;

long long fiboarr[50] = {0, 1, };

long long fibo(int N)
{
    if(N == 0 || N == 1)
        fiboarr[N];
    else if(fiboarr[N] == 0)
        fiboarr[N] = fibo(N - 1) + fibo(N - 2);
    
    return fiboarr[N];

        
    
    return 0;
}

int main()
{
    int T, N;
    
    cin >> T;
    
    for(int i = 0; i < T; i ++)
    {
        cin >> N;
        
        if(N == 0)
            cout << "1 0\n";
        else
            cout << fibo(N - 1) << " " << fibo(N) << "\n";
    }
    
}

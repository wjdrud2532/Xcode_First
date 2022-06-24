//
//  11050.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/06/16.
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
    
    int N, K;
    int arr[11] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800};
    cin >> N >> K;
    
    if(0 <= K && K <= N)
    {
        cout << arr[N] / (arr[K] * arr[N - K]) << "\n";
    }
    else
    {
        cout << "0";
    }
        
    
}


/*
 #include <stdio.h>
 int main()
 {
     int n, k,ans=1;

     scanf("%d%d", &n, &k);
     for (int i = n, j = 0; j < k; i--, j++)
        ans *= i;
 
     for (int i = k; i >= 2; i--)
        ans /= i;
 
     printf("%d\n", ans);
 }
 */






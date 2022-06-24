//
//  11051.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/06/17.
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
    int dp[1001][1001];
    cin >> N >> K;
   
    dp[0][0] = dp[1][0] = dp[1][1] = 1;
    for(int i = 1; i <= N; i ++)
    {
        for(int j = 0; j <= i; j ++)
        {
            if(j == 0 || j == i)
                dp[i][j] = 1;
            
            else
                dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % 10007;
        }
    }

//    for(int i = 0; i <= N; i ++)
//    {
//        for(int j = 0; j <= i; j ++)
//            cout << dp[i][j] << " ";
//        cout << "\n";
//    }
        
    cout << dp[N][K] << "\n";
    
}




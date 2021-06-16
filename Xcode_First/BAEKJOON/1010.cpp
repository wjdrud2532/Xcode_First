//
//  1010.cpp
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
    
    int T;
    int N, M;
    int dp[31][31];
    
    dp[0][0] = dp[1][0] = dp[1][1] = 1;
    for(int i = 1; i <= 30; i ++)
    {
        for(int j = 0; j <= i; j ++)
        {
            if(j == 0 || j == i)
                dp[i][j] = 1;
            
            else
                dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]);
        }
    }
    
    cin >> T;
    
    for(int i = 0; i < T; i ++)
    {
        cin >> N >> M;
        cout << dp[M][N] << "\n";
    }
}

/*
 #include <stdio.h>

 int main() {
     int n, k, t;
     scanf("%d", &t);
     for (int i = 0; i < t; i++) {
         scanf("%d%d", &k, &n);
         int res = 1, m = 1;
         while (k >= 1) {
             res = res * n / m;
             n--; m++;
             k--;
         }
         printf("%d\n", res);
     }
     return 0;
 }
 */

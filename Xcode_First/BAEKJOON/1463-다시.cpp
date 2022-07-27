//
//  1463.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/05/30.
//

#include <iostream>
#include <algorithm>
#include <cmath>

using std::cin;
using std::cout;

int main() {
    
    int N;
    int dp[1000001];
    cin >> N;
    
    for(int i = 1; i <= N; i ++)
    {
        dp[i] = dp[i - 1] + 1;      //+1을 한 경우
        
        if(dp[i] % 2 == 0)
            dp[i] = std::min(dp[i], dp[i / 2] + 1);     //+1한 경우와 / 2를 했을 때 횟수가 더 적은 경우
        
        if(dp[i] % 3 == 0)
            dp[i] = std::min(dp[i], dp[i / 3] + 1);
    }
    
    cout << dp[N] << "\n";
    
}

//
//  2156.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/05/30.
//

#include <iostream>
#include <algorithm>
#include <cmath>

using std::cin;
using std::cout;

int max(int a, int b, int c) {
    return a > b ? (a > c) ? a : c : (b > c) ? b : c;   //가장 큰 값 반환
}

int main() {
    
    int N;
    
    cin >> N;
    
    int wine[10001];
    int dp[10001];
    
    for(int i = 1; i <= N; i ++)
        cin >> wine[i];
    
    dp[1] = wine[1];
    dp[2] = wine[1] + wine[2];
    
    for(int i = 3; i <= N; i ++)
    {
        dp[i] = max(dp[i - 1], dp[i - 2] + wine[i], dp[i - 3] + wine[i] + wine[i - 1]);
            //  이전까지의 합\ ,   전전 + 현재값            전전전 + 전 + 현재값   중 가장 큰 것
        
    }
    
//    for(int i = 1; i <= N; i ++)
//        cout << dp[i] << " ";
//
//    cout << "\n";
    
    cout << std::max(dp[N], dp[N - 1]) << "\n";
    
}

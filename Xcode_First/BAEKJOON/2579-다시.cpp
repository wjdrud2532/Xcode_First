//
//  2579.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/05/30.
//

#include <iostream>
#include <algorithm>
#include <cmath>

using std::cin;
using std::cout;
using std::min;
using std::max;
/*
 시작을 0으로 시작
 다음 배열부터 0, 1, 2 ...로
 왼쪽대각선의 이동은 같은 index로, 오른쪽 대각선의 이동은 index + 1로
 
 */



int main() {
    
    int n,stair[301];
    int dp[301];
    
    cin >> n;
    for (int i = 0; i < n; i ++)
        cin >> stair[i];
 
    dp[0] = stair[0];           //첫 칸
    dp[1] = max(stair[0] + stair[1], stair[1]); //1칸을 간 경우, 0 + 1 또는 1 만
    dp[2] = max(stair[0] + stair[2], stair[1] + stair[2]);  //2칸을 간 경우, 0 + 2 또는 1 + 2
 
    for (int i = 3; i < n; i ++)
        dp[i] = stair[i] + max(dp[i - 2] , stair[i - 1] + dp[i - 3]);
        //     큰값      전전칸까지의 최대 + 현재칸,   전칸 + 현재칸 + 전전전칸까지의 최대
 
    cout << dp[n - 1] << '\n';
 
    return 0;
}

//
//  1912.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/06/06.
//


#include <iostream>
#include <algorithm>
#include <cmath>


using std::cin;
using std::cout;
using std::ios_base;
using std::max;

int main() {
    
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    int arr[100002];
    int dp[100002];
    int max;
    
    cin >> N;
    
    for(int i = 1; i <= N; i ++)
        cin >> arr[i];
    
    dp[1] = arr[1];
    int result = dp[1];
    for (int i = 1; i <= N; i++)
    {
        dp[i] = std::max(dp[i - 1] + arr[i], arr[i]);
        result = std::max(result, dp[i]);
    }
    
    for(int i = 1; i <= N; i ++)
        cout << dp[i] << " "l;
    cout << "\n";
    
    cout << result << "\n";
    
    /*              왜 안되는거지?
     dp[1] = max = arr[1];
     for(int i = 2; i <= N; i ++)
     {
     if(dp[i - 1] > dp[i - 1] + arr[i])  //연속된 값들이 이전 값보다 작을 경우 그것이 최대 max인지 판별해야함
     {
     if(dp[i - 1] > std::abs(arr[i]) && arr[i] < 0)
     dp[i] = dp[i - 1] + arr[i];
     else
     if(dp[i - 1] * arr[i] > 0)
     dp[i] = std::min(std::abs(dp[i - 1]), std::abs(arr[i])) * -1;
     }
     else        //연속된 값이 이전값보다 작을 경우
     {
     if(dp[i - 1] + arr[i] < arr[i])
     dp[i] = arr[i];
     else
     dp[i] = dp[i - 1] + arr[i];
     }
     
     if(dp[i] > max)
     max = dp[i];
     }
     
     for(int i = 1; i <= N; i ++)
     cout << dp[i] << " ";
     cout << "\n";
     cout << max << "\n";
     */
}


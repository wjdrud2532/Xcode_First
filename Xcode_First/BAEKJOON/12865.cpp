//
//  12865.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/06/07.
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
    
    int N, K;
    int arr[101][2];
    int dp[101][100001];
    
    cin >> N >> K;
    
    dp[N][0] = dp[0][N] = 0;
    for(int i = 1; i <= N; i ++)
    {
        cin >> arr[i][0] >> arr[i][1];      //무게와 가치
        dp[i - 1][0] = 0;
        dp[0][i - 1] = 0;
    }
    
    for(int i = 1; i <= N; i ++)
    {
        for(int j = 1; j <= K; j ++)
        {
            if(arr[i][0] > j) //i 번째의 무게를 담을 수 없는 경우
                dp[i][j] = dp[i - 1][j];    //이전에 담은 값을 가져온다.
            
            else              //담을 수 있는 경우
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - arr[i][0]] + arr[i][1]);
            //             같은 무게에서 N - 1인 경우와 이전의 값들 중 현재의 무게만큼 비어있는 곳  + 현재 무게    중 큰 값을 저장한다.
        }
    }
    
    
//    for(int i = 0; i <= N; i ++)
//    {
//        for(int j = 0; j <= K; j ++)
//        {
//            cout << dp[i][j] << " ";
//        }
//        cout << "\n";
//    }
    
    cout << dp[N][K] << "\n";
    
}

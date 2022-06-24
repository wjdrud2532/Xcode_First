//
//  11054.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/06/02.
//

#include <iostream>
#include <algorithm>
#include <cmath>

using std::cin;
using std::cout;
using std::ios_base;

int main() {
    
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    int max = 0;
    cin >> N;
    
    int arr[1001];
    int dp[1001];
    int dp2[1001];
    
    for(int i = 1; i <= N; i ++)
    {
        cin >> arr[i];
        dp[i] = 1;
        dp2[i] = 1;
    }
    
    for(int i = 1; i <= N; i ++)
    {
        for(int j = i; j > 0; j --)
        {
            if(arr[j] < arr[i] && dp[j] >= dp[i] - 1)
            {
                dp[i] = dp[j] + 1;
            }
        }
    }
    //여기까지는 11053과 같다
    
    for(int i = N; i >= 1; i --)        //뒤에서부터 내림차순의 값을 가진다.
    {
        for(int j = i; j <= N; j ++)
        {
            if(arr[j] < arr[i] && dp2[j] >= dp2[i] - 1)
            {
                dp2[i] = dp2[j] + 1;
            }
        }
    }
    
    for(int i = 1; i <= N; i ++)
    {
        if(max < dp[i] + dp2[i] - 1)    //둘 모두 시작이 1이므로 1을 빼야한다.
            max = dp[i] + dp2[i] - 1;
    }
    
    
    cout << max << "\n";

}

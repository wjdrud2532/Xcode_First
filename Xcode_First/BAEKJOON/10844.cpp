//
//  10844.cpp
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
    
    cin >> N;
    
    long long dp[101][10];
    
    for(int i = 0; i < 10; i ++)
        dp[1][i] = 1;
    
    for(int i = 2; i <= N; i ++)
    {
        for(int j = 0; j <= 10; j ++)
        {
            if(j == 0)
                dp[i][j] = dp[i - 1][1];        //0이 올 경우 1만 올 수 있음
            
            else if(j == 9)
                dp[i][j] = dp[i - 1][8];        //9가 올 경우 8만 올 수 있음
            
            else
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1] % 1000000000;
                                                //나머지는 +-1의 값을 더함
        }
    }
    
    long long sum = 0;
    for(int i = 1; i < 10; i ++)
    {
        sum = (sum + dp[N][i]) % 1000000000;    //1~9까지의 모든 값을 총합
    }
    
    cout << sum % 1000000000 << "\n";           //합친 결과 출력
    
}

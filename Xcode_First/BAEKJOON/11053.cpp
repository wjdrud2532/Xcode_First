//
//  11053.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/05/31.
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
    
    for(int i = 1; i <= N; i ++)
    {
        cin >> arr[i];
        dp[i] = 1;          //모든 값은 1부터 시작
    }
    
    for(int i = 1; i <= N; i ++)        //1부터 안하면 N = 1일 때 0이 나옴
    {
        for(int j = i; j > 0; j --)     //현재값으로부터 이전의 연속된 최대값을 찾는다.
        {
            if(arr[j] < arr[i] && dp[j] >= dp[i] - 1)   //현재 arr이 이전 arr보다 크면서 연속된 개수가 크다면
            {
                dp[i] = dp[j] + 1;                      //그 값을 현재의 최대값으로 설정한다.
            }
        }
        if(dp[i] > max) //최대값이라면 저장한다.
            max = dp[i];
    }
    
    cout << max << "\n";
//    for(int i = 1; i <= N; i ++)
//        cout << dp[i] << "  ";
    
    
    //1부터 N까지 진행하면서 한칸씩 앞으로 갈 때마다
    //현재의 값과 이전의 값을 비교하여 현재의 값이 크다면
    //뒤에 있는 값들 중 연속된 개수가 가장 큰 값을 가져온다.
    //
    
}
//11
//10 20 10 30 20 50 10 20 30 40 50

//
//  1932.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/05/26.
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

int main()
{
    
    std::ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //있으면 12ms 없으면 44ms 가 나온다.
    
    int arr[501][501];
    int N;
    int Max = 0;
    cin >> N;
    
    cin >> arr[1][0];
    
    for(int i = 2; i <= N; i ++)
    {
        for(int j = 0; j < i; j ++)
        {
            cin >> arr[i][j];
            
            if(j == 0)
                arr[i][j] += arr[i - 1][j];
            
            else if(j == i - 1)
                arr[i][j] += arr[i - 1][j - 1];
            
            else
                arr[i][j] += max(arr[i - 1][j - 1], arr[i - 1][j]);

            
            if(arr[i][j] > Max)
                Max = arr[i][j];
        }
    }
    
    cout << Max << "\n";
    
}

//
//  2740.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/07/12.
//

#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::ios_base;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int Matrix1[100][100];      //최대 100개
    int Matrix2[100][100];
    
    int N, M, K;
        
    cin >> N >> M;              //첫 번째 행렬
    for(int i = 0; i < N; i ++)
    {
        for(int j = 0; j < M; j ++)
        {
            cin >> Matrix1[i][j];
        }
    }
    
    cin >> M >> K;              //두 번째 행렬
    for(int i = 0; i < M; i ++)
    {
        for(int j = 0; j < K; j ++)
        {
            cin >> Matrix2[i][j];
        }
    }
    
    for(int i = 0; i < N; i ++)
    {
        for(int j = 0; j < K; j ++)
        {
            int temp = 0;
            for(int k = 0; k < M; k ++)     //행렬의 곱셈을 진행
            {
                temp += Matrix1[i][k] * Matrix2[k][j];
            }
            cout << temp << " ";            //i, j에 대한 행렬의 곱셈 출력
        }
        cout << "\n";
    }
    
}

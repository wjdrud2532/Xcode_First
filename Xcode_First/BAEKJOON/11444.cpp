//
//  11444.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/07/12.
//
//N번째의 피보나치 수열은 {{1,1}, {1,0}} 행렬의 N - 1 번의 거듭제곱을 통해 나타낼 수 있다
#include <iostream>
#include <algorithm>
#include <vector>

using std::cin;
using std::cout;
using std::ios_base;
using std::vector;

const long long Mod = 1000000007;

vector<vector<long long>> temp = { {0, 0} , {0, 0} };    //계산을 위한 임시 행렬
vector<vector<long long>> ans  = { {1, 0} , {0, 1} };    //단위행렬
vector<vector<long long>> a    = { {1, 1} , {1, 0} };    //초기값

void MultMat (vector<vector<long long>> &M1, vector<vector<long long>> &M2) //정보 저장을 위한 &
{
    for(long long i = 0; i < 2; i ++)
    {
        for(long long j = 0; j < 2; j ++)
        {
            temp[i][j] = 0;                     //이전 값 초기화
            for(long long k = 0; k < 2; k ++)
            {
                temp[i][j] += M1[i][k] * M2[k][j];  //행렬 곱셈
            }
            temp[i][j] %= Mod;  //값 나누기
        }
    }
    
    for(long long i = 0; i < 2; i ++)
        for(long long j = 0; j < 2; j ++)
            M1[i][j] = temp[i][j];              //계산결과 저장
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    long long N;
    
    cin >> N;
    
    while(N > 0)        //분할 정복 계산
    {
        if(N % 2 == 1)
            MultMat(ans, a);    //ans = ans * a
        MultMat(a, a);          //a = a * a
        N /= 2;
    }
    
    cout << ans[0][1] << "\n";
    
}

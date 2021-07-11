//
//  10830.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/07/12.
//

#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::ios_base;
using std::pair;

int N ;
long long B;        //21억을 넘어가므로
int temp[5][5];     //셋 모두, 전역변수로 하지 않으면 값이 초기화되어 틀린 값이 나온다.
int Matrix1[5][5];
int ans[5][5];

void MultMat (int arr1[][5], int arr2[][5])     //두 행렬을 곱하는 함수
{                                               //두 이차원 배열을 매개변수로 갖는다.
    for(int i = 0; i < N; i ++)
    {
        for(int j = 0; j < N; j ++)
        {
            temp[i][j] = 0;             //행렬 초기화
            for(int k = 0; k < N; k ++) //행렬의 크기만큼 곱셈
            {
                temp[i][j] += arr1[i][k] * arr2[k][j];
            }
            temp[i][j] %= 1000;         //곱셈의 값을 % 1000
        }
    }
    for (int i = 0; i < N; i ++)
            for (int j = 0; j < N; j ++)
                arr1[i][j] = temp[i][j];    //두 매개변수 중 앞의 행렬에 계산된 값을 저장한다. 이를 위해 전역변수로 배열을 지정해야 한다.
    
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    cin >> N >> B;
    for(int i = 0; i < N; i ++)
    {
        for(int j = 0; j < N; j ++)
        {
            cin >> Matrix1[i][j];
            
        }
        ans[i][i] = 1;      //곱셈을 진행햐기 단위행렬로 만들어준다.(대각선만 모두 1, 나머지는 0)
    }                       //단위행렬은 곱셈에 대해 항등원이고 거듭제곱을 해도 결과가 항상 자신과 같다
                            //  -> 행렬의 곱셈에서 지수가 0이면 단위행렬을 곱해줘야 결과값에 영향을 주지 않는다.
    
    //제곱을 분할 정복으로 진행한다. ex) A^4 = A^2 *  A^2
    //홀수인 경우 자신을 한번 더 곱해주어야 한다.
    
    while(B > 0)            //B가 1이상인 경우일 경우 반복
    {
        if(B % 2 == 1)
        {
            MultMat(ans, Matrix1);      //홀수일 때 곱셈 한번 더 진행
        }                               //계속 짝수일 경우라도 마지막은 항상 1이기 때문에 ans에 그동안의 계산결과가 들어가게 된다.
        MultMat(Matrix1, Matrix1);      //분할정복 곱셈
        B /= 2;
    }
    
    for(int i = 0; i < N; i ++)         //출력
    {
        for(int j = 0; j < N; j ++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
}

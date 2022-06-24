//
//  1992.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/07/05.
//
//      모두 0과 1이기 때문에 bool을 사용하면 메모리를 더 줄일 수 있을까?
#include <iostream>
#include <algorithm>
#include <cstring>

using std::cin;
using std::cout;
using std::ios_base;
using std::string;

int N;
string arr[64];

void quad(int x, int y, int N)
{
    int tempCount = 0;
    
    for (int i = x; i < x + N; i++)
        for (int j = y; j < y + N; j++)
            tempCount += arr[i][j] - '0';   //1 아니면 0이기 때문에
    
    
    if (!tempCount)
        cout << "0";                    //모두 0이라면 0 출력
    else if (tempCount == N * N)
        cout << "1";                    //모두 1이라면 1 출력
    else
    {                                  //값이 섞여 있다면 사분면으로 나누어 계산을 다시 진행한다.
        cout << "(";                    //나눌 때 ( 출력
        quad(x, y, N / 2);  // 2사분면
        quad(x, y + N / 2, N / 2); // 1사분면
        quad(x + N / 2, y, N / 2); // 3사분면
        quad(x + N / 2, y + N / 2, N / 2); // 4사분면
        cout << ")";                    //마지막에 )출력
    }
    return;
    
    
    
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N;
    
    for(int i = 0; i < N; i ++)         //입력 받음
        cin >> arr[i];                  //띄어쓰기 없이 입력값이 주어지기 때문에 string 배열로 입력을 받는다
                                        //이상하게 여기서 getline로 받으면 arr[0]이 모두 0으로 초기화된다 이유는 모르겠다.
    quad(0, 0, N);
    cout << "\n";
}

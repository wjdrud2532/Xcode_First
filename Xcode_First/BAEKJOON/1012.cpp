//
//  1012.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/11/27.
//

/*
 이런 식으로 할 수도 있다
        찾고자 하는 범위가 넓다면 이 방식을 써야한다
 
 int dx[4] = { 0,0,-1,1 };
 int dy[4] = { -1,1,0,0 };
 void DFS(int i, int j)
 {
     map[i][j] = false;
     for (int d = 0; d < 4; d++)
 {
         int y = i + dy[d];
         int x = j + dx[d];
 
         if (map[y][x])
            DFS(y, x);
     }
 }
 */

#include <iostream>

using std::cin;
using std::cout;
using std::ios_base;

bool isExist[51][51] = {0, };       //최대 범위
int T, M, N, K;                     //인자

int Chain(int x, int y)             //상하좌우에 배추가 있는지 재귀로 판별
{
    if(0 <= x && x <= N && 0 <= y && y <= M)    //재귀로 들어갔을 때 범위를 벗어날 수 있으므로 설정
    {
        if(isExist[x][y] == true)               //해당 부분에 배추가 있다면
        {
            isExist[x][y] = false;              //삭제하고
            
            Chain(x - 1, y);                    //상하좌우로 이동
            Chain(x + 1, y);
            Chain(x, y - 1);
            Chain(x, y + 1);
        }
    }
    
    return 0;
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    cin >> T;
    
    for(int q = 0; q < T; q ++)
    {
        cin >>  M >> N >> K;
        int worm = 0;

        for(int i = 0; i < K; i ++)
        {
            int temp1, temp2;
            cin >> temp1 >> temp2;
            
            isExist[temp2][temp1] = 1;      //input을 내가 보기 좋은 방식으로 받음
        }
        
        for(int i = 0; i < N; i ++)
        {
            for(int j = 0; j < M; j ++)
            {
                if(isExist[i][j] == true)
                {
                    worm ++;
                    Chain(i, j);
                }
            }
        }
        cout << worm << "\n";
    }
    return 0;
}

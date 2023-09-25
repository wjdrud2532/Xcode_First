//  백준
//  14502.cpp
//  Xcode_First
//
//  Created by 한정경 on 2023/09/25.
//

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int N, M;
int arr[8][8] = {0, };
int temparr[8][8] = {0, };
bool isVisit[8][8] = {false, };
int maxCnt = 0;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

void copyarr(int (*a)[8], int (*b)[8])
{
    for(int i = 0; i < N; i ++)
    {
        for(int j = 0; j < M; j++)
        {
            a[i][j] = b[i][j];
        }
    }
}

void bfs()
{
    int diffArr[8][8] = {0, };  // 확산 후 배열
    copyarr(diffArr, temparr);
    
    queue<pair<int, int>> q;
    
    for(int i = 0; i < N; i ++)
    {
        for(int j = 0; j < M; j ++)
        {
            if(diffArr[i][j] == 2)  // 확산 전, 위치에 바이러스가 존재하는 경우
            {
                q.push({i, j});     // 바이러스 위치 저장
            }
        }
    }
    
    
    while(!q.empty())
    {
        int currentX = q.front().first;
        int currentY = q.front().second;
        q.pop();
        
        for(int i = 0; i < 4; i ++)
        {
            int nextX = currentX + dx[i];
            int nextY = currentY + dy[i];
            
            if(0 <= nextX && nextX < N && 0 <= nextY && nextY < M)
            {
                if(diffArr[nextX][nextY] == 0)  // 확산 가능한 경우
                {
                    diffArr[nextX][nextY] = 2;  // 확산 후
                    q.push({nextX, nextY});     // 해당 위치 추가
                }
            }
        }
    }
    
    int cnt = 0;
    for(int i = 0; i < N; i ++)
    {
        for(int j = 0; j < M; j ++)
        {
            if(diffArr[i][j] == 0)
            {
                cnt ++;
            }
        }
    }
    
    maxCnt = max(maxCnt, cnt);
    
}

void createWall(int wallCnt)
{
    if(wallCnt == 3)        // 벽을 3개 세운 경우
    {
        bfs();
        return ;
    }
    
    for(int i = 0; i < N; i ++)
    {
        for(int j = 0; j < M; j ++)
        {
            if(temparr[i][j] == 0)
            {
                temparr[i][j] = 1;          // 벽 세움
                createWall(wallCnt + 1);
                temparr[i][j] = 0;          // 벽 허뭄
            }
        }
    }
    
}

int main()
{
    cin >> N >> M;
    for(int i = 0; i < N; i ++)
    {
        for(int j = 0; j < M; j ++)
        {
            cin >> arr[i][j];
        }
    }
    
    for(int i = 0; i < N; i ++)
    {
        for(int j = 0; j < M; j ++)
        {
            if(arr[i][j] == 0)   // 빈 공간일 경우(벽 생성 가능한 경우)
            {
                copyarr(temparr, arr);
                temparr[i][j] = 1;  // 벽 생성
                createWall(1);
            }
        }
    }
    
    cout << maxCnt << "\n";

    return 0;
}

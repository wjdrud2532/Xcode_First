//
//  1987.cpp
//  Xcode_First
//
//  Created by 한정경 on 2023/10/04.
//

#include <iostream>
#include <math.h>

using namespace std;

int R, C;
char arr[20][20];
bool isVisit[26] = {0, };
int maxCnt = -1;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

void dfs(int currentX, int currentY, int currentCnt)
{
    
    maxCnt = max(currentCnt, maxCnt);
    
    for(int i = 0; i < 4; i ++)
    {
        int nextX = currentX + dx[i];
        int nextY = currentY + dy[i];
        
        if(0 <= nextX && nextX < R && 0 <= nextY && nextY < C) //범위 안에 포함된 경우
        {
            if(isVisit[arr[nextX][nextY] - 'A'] == false)
            {
                isVisit[arr[nextX][nextY] - 'A'] = true;
                dfs(nextX, nextY, currentCnt + 1);
                isVisit[arr[nextX][nextY] - 'A'] = false;
            }
            
        }
    }
    
    
    return ;
}

int main()
{
    cin >> R >> C;
    for(int i = 0; i < R; i ++)
    {
        for(int j = 0; j < C; j ++)
        {
            cin >> arr[i][j];
        }
    }
    
    isVisit[arr[0][0] - 'A'] = true;

    dfs(0, 0, 1);
    
    cout << maxCnt << "\n";
    
    return 0;
}

/*
 8 1
 A
 B
 C
 D
 E
 F
 G
 H
 */

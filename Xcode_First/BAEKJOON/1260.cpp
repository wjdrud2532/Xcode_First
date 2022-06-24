//
//  1260.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/04/12.
//


/*
 DFS는 깊이 우선 탐색으로서 방문한 노드의 깊이를 우선적으로 탐색한다.
 기본적으로 재귀의 형태를 가짐, BFS에 비해 느림
 
 BFS는 너비 우선 탐색으로서 방문한 노드들의 인접 노드를 우선적으로 탐색한다.
 방문한 노드를 차례로 저장한 후 꺼낼 수 있는 자료구조인 Queue를 사용한다.
 선입선출(FIFO) 방식을 사용
 */

#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>        //<-- 기본 Xcode 컴파일 시에는 오류가 나지 않지만 백준 같은 곳에서 컴파일 시 없으면 오류가 난다.

using std::cout;
using std::cin;
using std::endl;
using std::queue;
using std::vector;

vector<int> arr[1001];
bool VisitDfs[1001];
bool VisitBfs[1001];

void dfs(int node)                              //깊이 우선 탐색
{
    VisitDfs[node] = true;                      //해당 번호를 방문함을 표시
    cout << node << " ";
    
    for(int i = 0; i < arr[node].size(); i ++)  //해당 노드의 자식노드들이 있다면 그 크기만큼
    {                                           //반복하며 탐색
        int next = arr[node][i];    //다음 노드의 상태를 받아온 뒤
        if(VisitDfs[next] == false)     //false, 즉 미방문 상태라면 방문한다.
        {
            dfs(next);
        }
    }
}

void bfs(int node)
{
    queue<int> q;
    q.push(node);           //입력받은 정점을 큐에 push
    VisitBfs[node] = true;  //방문했음을 기록
    
    while(!q.empty())       //큐가 비어있지 않다면 반복
    {
        int v = q.front();  //가장 처음에 들어온 노드를 출력하고 삭제
        cout << v << " ";
        q.pop();
        
        for(int i = 0; i < arr[v].size(); i ++) //v와 연결되어 있는 노드의 수 만큼 반복
        {
            int next = arr[v][i];
            if(VisitBfs[next] == false)     //방문하지 않았다면
            {
                VisitBfs[next] = true;      //방문한 뒤 표시
                q.push(next);               //해당 노드 push
            }
        }
    }
}

int main()
{
    int n, m, start;
    cin >> n >> m >> start;
    
    int a, b;
    
    for(int i = 0; i < m; i ++)
    {
        cin >> a >> b;
        
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    
    for(int i = 1; i <= n; i ++)
    {
        sort(arr[i].begin(), arr[i].end());
    }
    
    dfs(start);
    cout << endl;
    bfs(start);
    cout << endl;
    
    return 0;
}

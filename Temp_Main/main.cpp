#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstring>

using namespace std;

//백준 - 1260번 DFS와 BFS
//그래프 탐색하면서 값을 출력하는 문제

bool visit[1005]; //이미 간 곳엔 다시 안 가기 위해서 상태 저장
vector<int> adj[1005]; //인접리스트로 연결된 노드 정보 저장
queue<int> q; //bfs에 사용
 
void dfs(int nowV) {
    visit[nowV] = true; //왔던 곳 표시하고
   // cout << nowV << " ";
    for (int adjV : adj[nowV]) { //근접 노드 애들을 순서대로 돌면서
        cout << " adjv " << adjV << "     nowV " << nowV << endl;
        if (!visit[adjV]) {
            dfs(adjV); //가야 할 곳이면 dfs함수를 재귀 호출
        }
    }
}

void bfs(int nowV) {
    q.push(nowV);
    visit[nowV] = true;
    while (!q.empty()) {
        int x = q.front();
        q.pop(); //큐가 빌 때 까지 계속 꺼내서 다녀오자
        cout << x << " ";
        for (int adjV : adj[x]) {
            if (!visit[adjV]) {
                q.push(adjV); //갈 곳 큐에 넣어놓고
                visit[adjV] = true;
            }
        }
    }
}

int main() {
    int numV, numE, startV;
    int temp1, temp2;

    cin >> numV;
    cin >> numE;
    cin >> startV;

    //간선 정보 받아오고 인접 리스트에 정보기록
    for (int i = 0; i < numE; i++) {
        cin >> temp1;
        cin >> temp2;
        //temp1는 temp2랑 연결되어있어!
        adj[temp1].push_back(temp2);
        adj[temp2].push_back(temp1);
    }

    //갈 수 있는 곳이 여러곳일 때 작은 곳 부터 가도록 정렬
    for (int i = 1; i <= numV; i++) {
        sort(adj[i].begin(), adj[i].end());
    }

    dfs(startV);

    cout << "\n";

    memset(visit, 0, sizeof(visit)); //visit배열을 초기화

    //bfs(startV);

    return 0;
}

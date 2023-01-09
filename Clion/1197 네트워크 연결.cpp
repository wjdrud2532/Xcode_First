#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

vector<pair<int, int>> v[100001];
bool isVisit[1001] = {0, };
int N, M, minValue = 0;

void prim()
{
    //오름차순 정렬
    priority_queue< pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    //비용과 위치
    //비용 0, 시작 위치 1
    pq.push({0, 1});

    //첫 위치 방문처리
    isVisit[1] = true;

    for(int i = 1; i <= N; i ++)
    {
        //우선순위 큐가 비어있지 않은 상태에서 방문한 노드가 들어있다면 그 노드를 제거한다
        while(!pq.empty() && isVisit[pq.top().second])
        {
            pq.pop();
        }

        int tempcost = pq.top().first;
        int next = pq.top().second;
        isVisit[next] = true;

        minValue += tempcost;

        //v[next]의 원소 개수만큼 반복
        // == for(int i = 0; i < v[next].size(), ++i)
        //복사비용 발생하는데 레퍼런스 사용 가능한가?
        for(auto it : v[next])
        {
            pq.push({it.second, it.first});
        }
    }

    return ;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N >> M;

    int a, b, cost;
    for(int i = 0; i < M; i ++)
    {
        cin >> a >> b >> cost;
        v[a].push_back({b, cost});
        v[b].push_back({a, cost});
    }

    prim();

    cout << minValue << "\n";

    return 0;
}
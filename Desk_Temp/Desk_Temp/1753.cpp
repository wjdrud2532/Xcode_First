#include <iostream>
#include <vector>
#include <queue>

#define INF 900000000

using std::cin;
using std::cout;
using std::ios_base;
using std::vector;
using std::pair;
using std::make_pair;
using std::priority_queue;

int V, E, Start;
int dist[20001]; 

vector<vector<pair<int, int>>> map;
vector<pair<int, int>>	Vectemp;

void Input()
{
	cin >> V >> E >> Start;

	for (int i = 0; i <= V; i++)  //u로 탐색할 때 -1 하지 않기 위해 하나 더 넣었다
		map.push_back(Vectemp);

	int u, v, w;

	for (int i = 0; i < E; i++)
	{
		cin >> u >> v >> w;

		map[u].push_back(make_pair(v, w));
	}

	for (int i = 1; i <= V; i++)
		dist[i] = INF;		//모두 INF로 초기화
}


void Dijkstra()
{
	priority_queue<pair<int, int>> PQ;		//성능을 위해 우선순위 큐 사용

	PQ.push(make_pair(0, Start));			//while문 반복을 위한 임시 pair?
											//-> 시작노드에서부터 시작하니 현재 위치로의 이동비용은 0
											//따라서 현재비용 0과 현재 위치 Start가 된다

	dist[Start] = 0;						//시작 노드에서 시작으로 가는 비용은 0

	while (!PQ.empty())
	{
		int cost = PQ.top().first;		//현재 노드의 비용, 처음은 무조건 0
		int node = PQ.top().second;		//현재 노드의 위치
		PQ.pop();

		for (int i = 0; i < map[node].size(); i++)	//0부터 현재 노드 까지
		{
			int nextnode = map[node][i].first;		//연결된 다음 노드의 위치
			int nextcost = map[node][i].second;		//연결된 다음 노드의 비용

			/*
			nextnode는 node번째 배열에 연결되어 있는 모든 노드들의 위치를 갖고
			nextcost는 연결된 노드들의 비용을 가진다.
			*/

			if (dist[nextnode] > nextcost - cost)
				/*
				dist의 초기값은 INF로 큰 값을 가진다.
				처음에는 무조건 새로운 값이 덮어쓰여지지만
				이후에는 더 적은 비용을 가진 길이 있다면 
				*/
			{
				dist[nextnode] = nextcost - cost;				//가장 적은 비용으로 길을 덮어쓰고 그 값을 우선순위큐에 넣는다.
				PQ.push(make_pair(-dist[nextnode], nextnode));	// -로 저장해야 68번줄의 값 비교에서 두 값을 더해 계산할 수 있다.
																// +로 저장하고 68번줄의 등호를 +로 바꾸면 특정값에서 무한루프가 발생한다.
			}
		}
	}

	for (int i = 1; i <= V; i++)
	{
		if (dist[i] == INF)
			cout << "INF\n";
		else
			cout << dist[i] << "\n";
	}
}

int main()
{
	cout.tie(NULL);
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	Input();
	Dijkstra();

	return 0;
}
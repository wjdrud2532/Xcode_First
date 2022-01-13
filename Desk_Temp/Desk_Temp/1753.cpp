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

	for (int i = 0; i <= V; i++)  //u�� Ž���� �� -1 ���� �ʱ� ���� �ϳ� �� �־���
		map.push_back(Vectemp);

	int u, v, w;

	for (int i = 0; i < E; i++)
	{
		cin >> u >> v >> w;

		map[u].push_back(make_pair(v, w));
	}

	for (int i = 1; i <= V; i++)
		dist[i] = INF;		//��� INF�� �ʱ�ȭ
}


void Dijkstra()
{
	priority_queue<pair<int, int>> PQ;		//������ ���� �켱���� ť ���

	PQ.push(make_pair(0, Start));			//while�� �ݺ��� ���� �ӽ� pair?
											//-> ���۳�忡������ �����ϴ� ���� ��ġ���� �̵������ 0
											//���� ������ 0�� ���� ��ġ Start�� �ȴ�

	dist[Start] = 0;						//���� ��忡�� �������� ���� ����� 0

	while (!PQ.empty())
	{
		int cost = PQ.top().first;		//���� ����� ���, ó���� ������ 0
		int node = PQ.top().second;		//���� ����� ��ġ
		PQ.pop();

		for (int i = 0; i < map[node].size(); i++)	//0���� ���� ��� ����
		{
			int nextnode = map[node][i].first;		//����� ���� ����� ��ġ
			int nextcost = map[node][i].second;		//����� ���� ����� ���

			/*
			nextnode�� node��° �迭�� ����Ǿ� �ִ� ��� ������ ��ġ�� ����
			nextcost�� ����� ������ ����� ������.
			*/

			if (dist[nextnode] > nextcost - cost)
				/*
				dist�� �ʱⰪ�� INF�� ū ���� ������.
				ó������ ������ ���ο� ���� �����������
				���Ŀ��� �� ���� ����� ���� ���� �ִٸ� 
				*/
			{
				dist[nextnode] = nextcost - cost;				//���� ���� ������� ���� ����� �� ���� �켱����ť�� �ִ´�.
				PQ.push(make_pair(-dist[nextnode], nextnode));	// -�� �����ؾ� 68������ �� �񱳿��� �� ���� ���� ����� �� �ִ�.
																// +�� �����ϰ� 68������ ��ȣ�� +�� �ٲٸ� Ư�������� ���ѷ����� �߻��Ѵ�.
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
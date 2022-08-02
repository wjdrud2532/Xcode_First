/*
이분탐색으로도 가능(더 빠름)
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <map>

using std::cin;
using std::cout;
using std::ios_base;

using namespace std;




int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, count = 0;
	pair<string, bool> p;
	map<string, bool> m;
	vector<string> v;

	cin >> N >> M;

	p.second = true;
	for (int i = 0; i < N; i++)
	{
		cin >> p.first;
		m.insert(p);
	}

	for (int i = 0; i < M; i++)
	{
		cin >> p.first;

		if (m[p.first])
		{
			v.push_back(p.first);
			count++;
		}
	}

	cout << count << "\n";
	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << "\n";

	return 0;
}
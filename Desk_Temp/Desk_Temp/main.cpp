#include <iostream>
#include <algorithm>

#include <map>

using std::cin;
using std::cout;
using std::ios_base;

using namespace std;

int n, m;
pair<int, bool> p[9];

void dfs(int cnt)
{
	if (m == cnt)
	{
		for (int i = 0; i < m; i++)
			cout << p[i].first << " ";
		cout << "\n";
	}

	for (int i = 1; i <= n; i++)
	{
		if(p[i].second == false)
		{
			p[i].second = true;
			p[cnt].first = i;
			dfs(cnt + 1);
			p[i].second = false;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	

	cin >> n >> m;

	dfs(0);

	return 0;
}


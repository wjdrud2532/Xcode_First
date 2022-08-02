#include <iostream>
#include <map>
#include <algorithm>

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
	map<int, bool> Map;

	cin >> N >> M;

	count = N + M;

	int temp;
	for (int i = 0; i < N + M; i++)
	{
		cin >> temp;

		if (Map.find(temp) != Map.end())
		{
			count -= 2;
		}
		else
		{
			Map.insert(make_pair(temp, true));
		}

	}


	cout << count << "\n";

	return 0;
}
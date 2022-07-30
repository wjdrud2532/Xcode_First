#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <string>
#include <map>

using std::cin;
using std::cout;
using std::ios_base;

using namespace std;

pair<string, int> p[100000], w[100000];

int BS(string str, int N)


{
	int left = 0, right = N - 1, mid;
	string temp1 = str, temp2;
	while (left <= right)
	{
		mid = (left + right) / 2;
		temp2 = p[mid].first;


		if (str > temp2)
		{
			left = mid + 1;
		}
		else if (str < temp2)
		{
			right = mid - 1;
		}

		if (temp2 == str)
		{
			return p[mid].second + 1;
		}
	}

	return -1;
}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;


	cin >> N >> M;


	for (int i = 0; i < N; i++)
	{
		cin >> p[i].first;
		p[i].second = i;
	}

	copy(p, p + N, w);
	sort(p, p + N);

	string tempstr;
	for (int i = 0; i < M; i++)
	{
		cin >> tempstr;
		if ('0' <= tempstr[0] && tempstr[0] <= '9')
		{
			cout << w[stoi(tempstr) - 1].first << "\n";
		}
		else
		{
			cout << BS(tempstr, N) << "\n";
		}
	}


	return 0;
}
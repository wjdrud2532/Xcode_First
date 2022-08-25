#include<iostream>
using namespace std;


long long arr[101] = { 0, 1, 1, 1, 2, 2, 3, 4, 5, 7, 9, };

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);

	int T, n;
	cin >> T;

	for (int i = 11; i < 101; i++)
	{
		arr[i] = arr[i - 2] + arr[i - 3];
	}

	while (T--)
	{
		cin >> n;
		cout << arr[n] << "\n";
	}

	return 0;
}


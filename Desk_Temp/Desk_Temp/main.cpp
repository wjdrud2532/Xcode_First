#include<iostream>
using namespace std;


int arr[1000000];

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);

	arr[0] = 1;
	arr[1] = 2;


	int n;
	cin >> n;

	for (int i = 2; i < n; i++)
	{
		arr[i] = (arr[i - 1] + arr[i - 2]) % 15746;
	}

	cout << arr[n - 1] << "\n";

	return 0;
}


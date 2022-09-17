#include <iostream>

using namespace std;

int main()
{
	int n, maxlength = 0;
	int arr[1001];
	int dp[1001];

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		dp[i] = 1;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j >= 0; j--)
		{
			//
			if (arr[i] > arr[j] && dp[j] >= dp[i] - 1)
				dp[i] = dp[j] + 1;
		}
		if (dp[i] > maxlength)
			maxlength = dp[i];
	}

	cout << maxlength << "\n";

	return 0;
}

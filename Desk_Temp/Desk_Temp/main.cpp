#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);


	int n, maxLength = 0, temp = 0;
	int arr[1001];
	int dp[1001];
	int dp2[1001];

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];

		dp[i] = 1;
		dp2[i] = 1;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j >= 0; j--)
		{
			if (arr[i] > arr[j] && dp[j] >= dp[i] - 1)
				dp[i] = dp[j] + 1;

		}
	}

	for (int i = n - 1; i >= 0; i--)
	{
		for (int j = i; j < n; j++)
		{
			if (arr[i] > arr[j] && dp2[j] >= dp2[i] - 1)
				dp2[i] = dp2[j] + 1;

		}
	}

	for (int i = 0; i < n; i++)
	{
		if ((dp[i] + dp2[i]) > maxLength)
			maxLength = dp[i] + dp2[i];
	}


	cout << maxLength - 1 << "\n";

	return 0;
}

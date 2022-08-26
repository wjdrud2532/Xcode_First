#include<iostream>
#include<cmath>

using namespace std;

int n;
int arr[501][501] = { 0, };
int dp[501][501];
int result = 0;
int temp;

int main()
{
	cin.tie(nullptr);
	cout.tie(nullptr);
	ios_base::sync_with_stdio(false);

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cin >> temp;

			if (j == 1)
				dp[i][j] = dp[i - 1][j] + temp;

			else if (j == i)
				dp[i][j] = dp[i - 1][j - 1] + temp;

			else
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - 1]) + temp;
		}
	}

	for (int i = 1; i <= n; i++)
	{
		if (dp[n][i] > result)
			result = dp[n][i];
	}

	cout << result << "\n";


	return 0;
}


#include <iostream>
#include <cmath>

#define MMAX(a, b, c) max(max(a, b), c)
using namespace std;

int main()
{
	int n, result = -1;
	int arr[10001] = { 0, };
	int dp[10001] = { 0, };

	cin >> n;
	if (n == 1)
	{
		cin >> result;
		cout << result << "\n";
	}
	else if (n == 2)
	{
		cin >> result;
		cin >> n;
		result += n;
		cout << result << "\n";
	}
	else
	{
		for (int i = 1; i <= 3; i++)
		{
			cin >> arr[i];
		}

		dp[1] = arr[1];
		dp[2] = dp[1] + arr[2];
		dp[3] = MMAX(arr[1] + arr[3], arr[2] + arr[3], dp[2]);
		result = dp[3];

		for (int i = 4; i <= n; i++)
		{
			cin >> arr[i];
			dp[i] = MMAX(dp[i - 2] + arr[i], dp[i - 3] + arr[i - 1] + arr[i], dp[i - 1]);

			//cout << dp[i] << " ";

			
		}
		cout << dp[n] << "\n";
	}
	return 0;
}

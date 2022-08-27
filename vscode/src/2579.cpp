#include <iostream>
#include <cmath>

using namespace std;


int main() {

	int n, arr[300] = { 0, };
	int dp[300] = { 0, };

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	dp[0] = arr[0];
	dp[1] = arr[0] + arr[1];
	dp[2] = max(arr[0], arr[1]) + arr[2];

	for (int i = 3; i < n; i++)
	{
		dp[i] = max(dp[i - 2], arr[i - 1] + dp[i - 3]) + arr[i];
	}

	cout << dp[n - 1] << "\n";

	return 0;
}

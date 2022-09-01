#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {

	int n;
	cin >> n;
	
	vector<int> dp(n + 1);

	for (int i = 2; i < n; i++)
	{
		dp[i] = dp[i - 1] + 1;
		//dp[2] = 1로 시자거

		if (i % 2 == 0)
			dp[i] = min(dp[i], dp[i / 2] + 1);
		//2로 나뉜다면 현재값, -1해서 2로 나눈 값 중 더 작은 값을 선택

		if (i % 3 == 0)
			dp[i] = min(dp[i], dp[i / 3] + 1);
		//마찬가지
	}

	cout << dp[n] << "\n";

	return 0;
}

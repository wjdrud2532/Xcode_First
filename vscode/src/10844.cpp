#include <iostream>
#include <algorithm>
#include <cmath>

using std::cin;
using std::cout;

int main() 
{
	int n, divide;
	cin >> n;

	long long dp[101][10] = { 0, };
	long long sum = 0;
	divide = 1000000000;

	for (int i = 0; i < 10; i++)
		dp[1][i] = 1;

	for (int i = 2; i <= n; i++)
	{
		for (int j = 0; j <= 9; j++)
		{ 
			if (j == 0)	//0인 경우 뒤에 1만 올 수 있다
				dp[i][j] = dp[i - 1][j + 1] % divide;

			else if (j == 9)//9인 경우 뒤에 8만 올 수 있다
				dp[i][j] = dp[i - 1][j - 1] % divide;

			else//	나머지의 경우 +-1 의 경우를 모두 더한다
				dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1] % divide;
		}
	}

	for (int i = 1; i <= 9; i++)
		sum += dp[n][i] % divide;

	cout << sum % divide << "\n";

	return 0;

}

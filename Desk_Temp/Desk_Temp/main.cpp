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
			if (j == 0)	//0�� ��� �ڿ� 1�� �� �� �ִ�
				dp[i][j] = dp[i - 1][j + 1] % divide;

			else if (j == 9)//9�� ��� �ڿ� 8�� �� �� �ִ�
				dp[i][j] = dp[i - 1][j - 1] % divide;

			else//	�������� ��� +-1 �� ��츦 ��� ���Ѵ�
				dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1] % divide;
		}
	}

	for (int i = 1; i <= 9; i++)
		sum += dp[n][i] % divide;

	cout << sum % divide << "\n";

	return 0;

}

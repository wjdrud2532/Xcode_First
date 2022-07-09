#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::ios_base;
using std::sqrt;
using std::fill_n;

bool* IsPNum;


bool IsPNumber(int N)
{
	if (N == 1)
		return false;

	for (int i = 2; i <= sqrt(N); i++)
	{
		if (N % i == 0)
			return false;
	}

	return true;
}


void Eratos(int M, int N)
{
	fill_n(IsPNum, N, true);

	for (int i = 2; i <= sqrt(N); i++)		//에라토스테네스에서 범위의 루트까지 계산하면 범위까지 알 수 있다
	{
		if (IsPNum[i] == true && IsPNumber(i) == true)
		{
			for (int j = i * 2; j <= N; j += i)
			{
				IsPNum[j] = false;
			}
		}
	}

	return;
}

int PrintPNumber(int M, int N)
{
	if (M <= 2)
		M = 2;

	int cnt = 0;

	for (int i = M; i <= N; i++)
	{
		if (IsPNum[i] == true)
		{
			cnt++;
			//cout << i << "\n";
		}
	}

	return cnt;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	IsPNum = new bool[123456 * 2];
	Eratos(1, 123456 * 2);

	int N, M;

	cin >> M;
	

	while (M != 0)
	{
		N = M * 2;

		cout << PrintPNumber(++M, N) << "\n";

		cin >> M;
	}



	return 0;
}
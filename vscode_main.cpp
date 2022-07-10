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

void FindGoldbach(int n)
{
	int SmallPNum, BigPNum;
	SmallPNum = BigPNum = n / 2;

	if (IsPNum[BigPNum] == true)
		cout << BigPNum << " " << BigPNum << "\n";

	else
	{
		while (1)
		{
			SmallPNum--;
			BigPNum++;

			if (IsPNum[SmallPNum] == true && IsPNum[BigPNum] == true)
			{
				cout << SmallPNum << " " << BigPNum << "\n";
				break;
			}
		}
	}
	return;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	IsPNum = new bool[10000];
	Eratos(1, 10000);

	int T;
	int n;
	
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> n;
		
		FindGoldbach(n);
	}

	return 0;
}
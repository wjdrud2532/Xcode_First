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
	IsPNum[0] == IsPNum[1] == false;

	for (int i = 2; i <= N; i++)
	{
		if (IsPNumber(i) == true)
		{
			for (int j = i * 2; j <= N; j += i)
			{
				IsPNum[j] = false;
			}
		}
	}

	return;
}

void PrintPNumber(int M, int N)
{
	if (M <= 2)
		M = 2;

	for (int i = M; i <= N; i++)
	{
		if (IsPNum[i] == true)
		{
			cout << i << "\n";
		}
	}

	return;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N, M;

	cin >> M >> N;
	IsPNum = new bool[++N];

	Eratos(M, N);

	PrintPNumber(M, N);

	return 0;
}
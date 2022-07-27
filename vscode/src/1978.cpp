#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::ios_base;
using std::sqrt;


bool IsPNumber (int N)
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

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N, PNumCnt = 0;

	cin >> N;

	int tempNum;
	for (int i = 0; i < N; i++)
	{
		cin >> tempNum;
		if (IsPNumber(tempNum) == true)
			PNumCnt++;
	}
	
	cout << PNumCnt << "\n";

	return 0;
}
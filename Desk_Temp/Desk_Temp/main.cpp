#include<iostream>
using namespace std;

int fibcnt = 0;
int fibonaccicnt = 0;

int fib(int n)
{
	
	if (n == 1 || n == 2)
		return 1;
	else
	{
		fibcnt++;
		return (fib(n - 1) + fib(n - 2));
	}
}

int fibonacci(int n)
{
	int f[41] = { 0, };

	f[1] = f[2] = 1;

	for (int i = 3; i <= n; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
		
		fibonaccicnt++;
	}

	return f[n];
}

int main()
{
	int n;
	cin >> n;

	fib(n);
	fibonacci(n);

	cout << ++fibcnt << " " << fibonaccicnt << "\n";

	return 0;
}


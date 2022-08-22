#include<iostream>
using namespace std;

int wa[20] = { 0, };
int wb[20] = { 0, };
int wc[20] = { 0, };

int w[21][21][21];

int answ(int a, int b, int c)
{
	if (a <= 0 || b <= 0 || c <= 0)
		return 1;
	else if (a > 20 || b > 20 || c > 20)
		return w[20][20][20];
	else
		return w[a][b][c];
}


int main()
{
	int a, b, c;

	wa[0] = wb[0] = wc[0] = 1;




	for (int i = 0; i <= 20; i++)
	{
		for (int j = 0; j <= 20; j++)
		{
			for (int k = 0; k <= 20; k++)
			{
				if (i <= 0 || j <= 0 || k <= 0)
					w[i][j][k] = 1;
				else
					w[i][j][k] = (w[i - 1][j][k] + w[i - 1][j - 1][k] + w[i - 1][j][k - 1]) - w[i - 1][j - 1][k - 1];
				//cout << "i = " << i << ", j = " << j << ", k = " << k << "     ";
				//cout << " " << w[i][j][k] << " = (" << w[i - 1][j][k] << " + " << w[i - 1][j - 1][k] << " + " << w[i - 1][j][k - 1] << ") - " << w[i - 1][j - 1][k - 1] << "\n";

			}
		}

	}


	/*
	2 2 2 라면
	w(1, 2, 2) + w(1, 1, 2) + w(1, 2, 1) - w(1, 1, 1) 이므로
	1			+ 1			+		1		- 1
	3 - 1 = 2가 된다.

	10 4 6 이라면

	(9 4 6) + (9 3 6) + (9 4 5) - (9 3 5)

	*/
	while (1)
	{
		cin >> a >> b >> c;

		if (a == -1 && b == -1 && c == -1)
			break;
		else
			cout << "w(" << a << ", " << b << ", " << c << ") = " << answ(a, b, c) << "\n";

	}







	return 0;
}


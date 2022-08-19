/*
#include <iostream>

using std::cin;
using std::cout;
using std::ios_base;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	return 0;
}
*/

/*
* #include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::ios_base;

using namespace std;

int n, arr[20][20] = { 0, }, arr2[190];
int arr2cnt = 0, cnt = 0;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	cin >> n;

	cnt = ((n * n) - n) / 2;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr2[arr2cnt++] = arr[i][j] + arr[j][i];



			if (i == j)
				arr2cnt--;
			else
				cout << arr[i][j] << " + " << arr[j][i] << " = " << arr2[arr2cnt - 1] << "\n";
		}


	}
	cnt--;

	int min = 201;

	int start, link;
	int sicnt = 0, sjcnt = 1;


	while (cnt--)
	{
		start = arr2[sicnt] + arr2[sjcnt];
		for (int i = 0; i < cnt; i++)
		{
			for (int j = 0; j < cnt; j++)
			{
				if (i != j)
				{

				}
			}
		}
	}
	cout << min << "\n";

	return 0;
}


*/
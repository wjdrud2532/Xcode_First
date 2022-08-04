#include <iostream>
#include <algorithm>
#include <climits>

using std::cin;
using std::cout;
using std::ios_base;

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, num, temp, Lbig = -1, Lsmall = INT_MAX, Rbig = -1, Rsmall = INT_MAX;

	cin >> N;
	for (int i = 0; i < 6; i++)
	{
		cin >> num >> temp;
		if (num == 3 || num == 4)
		{
			if (Lbig < temp)
				Lbig = temp;

			if (Lsmall > temp)
				Lsmall = temp;
		}
		else
		{
			if (Rbig < temp)
				Rbig = temp;

			if (Rsmall > temp)
				Rsmall = temp;
		}
	}

	int all = Lbig * Rbig;
	int part = Lsmall * Rsmall;

	cout << all << " " << part << "\n";

	all = all - part;

	cout << all * N << "\n";
	


	/*
	�������� �»�, ���, ����, ���� 4��
	��, �� ��
	��, �� �� 4���� ����

	�������̹Ƿ� ó�� 4������ �־��� �� ���� �ѹ� ����ϰ�
	�� �ڿ� �ٽ� �ѹ� �� ���

	ù ���� ���� ���
		1, 3 ��° ���� �� ���̰� ���� ���� ����ϰ�
		2, 4 ��° ���� �� ���̰� �� ���� ����Ͽ� 1�� ���̸� ���Ѵ�?
	*/

	return 0;
}
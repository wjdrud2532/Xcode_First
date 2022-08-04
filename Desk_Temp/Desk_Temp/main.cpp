#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::ios_base;

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> v;

	int N, num, temp, all, part;
	int mp1 = 0, mp2 = 0, cp = -1;

	cin >> N;

	cin >> num >> temp;
	v.push_back(temp);
	for (int i = 0; i < 5; i++)
	{
		cin >> num >> temp;
		v.push_back(temp);

		if (cp < v[i] * v[i + 1])		//���� ū ���� �� ���̸� ã��
		{
			mp1 = i;
			mp2 = i + 1;
			cp = v[i] * v[i + 1];
		}
	}

	if (cp < v[0] * v[5])		//v[0] �� v[6]�� �յ� �����ؾ���
	{
		mp1 = 0;
		mp2 = 5;
	}

	all = v[mp1] * v[mp2];

	mp1 += 3;
	mp2 += 3;

	if (mp1 > 5)
		mp1 = mp1 - 6;
	if (mp2 > 5)
		mp2 = mp2 - 6;

	part = v[mp1] * v[mp2];


	cout << (all - part) * N << "\n";
	
	return 0;
}
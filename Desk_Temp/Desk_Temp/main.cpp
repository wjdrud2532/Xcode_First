#include <iostream>
#include <algorithm>
#include <climits>
#include <list>
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

	list<int> list;
	
	vector<int> v;

	int N, num, temp;
	
	cin >> N;
	for (int i = 0; i < 6; i++)
	{
		cin >> num >> temp;
		v.push_back(temp);
	}

	int mp1 = 0, mp2 = 0, cp = -1;
	for (int i = 0; i < v.size() - 1; i++)
	{
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

	int all = v[mp1] * v[mp2];

	mp1 += 3;
	mp2 += 3;

	if (mp1 > 5)
		mp1 = mp1 - 6;
	if (mp2 > 5)
		mp2 = mp2 - 6;

	int part = v[mp1] * v[mp2];

	//cout << all << " " << part << "\n";

	cout << (all - part) * N << "\n";
	




	

	
	


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
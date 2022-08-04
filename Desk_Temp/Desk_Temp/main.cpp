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
		if (cp < v[i] * v[i + 1])		//가장 큰 변의 두 길이를 찾음
		{
			mp1 = i;
			mp2 = i + 1;
			cp = v[i] * v[i + 1];
		}
	}

	if (cp < v[0] * v[5])		//v[0] 과 v[6]의 합도 생각해야함
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
	시작지점 좌상, 우상, 우하, 좌하 4곳
	ㄱ, 역 ㄱ
	ㄴ, 역 ㄴ 4가지 형태

	육각형이므로 처음 4가지가 주어질 때 넓이 한번 계산하고
	그 뒤에 다시 한번 더 계산

	첫 번쨰 넓이 계산
		1, 3 번째 순서 중 길이가 작은 값을 사용하고
		2, 4 번째 순서 중 길이가 긴 것을 사용하여 1차 넓이를 구한다?
	*/

	return 0;
}
#include <iostream>
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

	int N, num;
	int Larr[3], Rarr[3], Lcnt = 0, Rcnt = 0;

	cin >> N;
	for (int i = 0; i < 6; i++)
	{
		cin >> num;
		if (num == 3 || num == 4)
			cin >> Larr[Lcnt++];
		else
			cin >> Rarr[Rcnt++];
	}

	sort(Larr, Larr + 3);
	sort(Rarr, Rarr + 3);

	int all, part;
	all = Larr[2] * Rarr[2];

	int temp1, temp2;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			temp1 = Larr[i] * Rarr[j];

		}
	}

	

	
	


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
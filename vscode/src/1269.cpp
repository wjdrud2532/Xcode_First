#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::ios_base;

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, count = 0;
	map<int, bool> Map;

	vector<int> V;

	cin >> N >> M;

	count = N + M;

	int temp;
	for (int i = 0; i < N + M; i++)
	{
		cin >> temp;
		//V.push_back(temp);

		if (Map.find(temp) != Map.end())
		{
			count -= 2;
		}
		else
		{
			Map.insert(make_pair(temp, true));
		}

	}


	//pair<int, bool> tpair;
	//	//auto temp = V.begin();
	//	for (int i = 0; i < M; i++)
	//	{
	//		cin >> temp;
	//		if (Map.find(temp) != Map.end())
	//		{
	//			count -= 2;
	//		}

	//		//auto it = find(V.begin(), V.end(), temp);
	//		//if (it != V.end())
	//		//{
	//		//	//값이 중복된다면 
	//		//	count -= 2;
	//		//}
	//	}


	cout << count << "\n";

	/*
	집합과 맵

	map으로 입력 받고
	입력 받을 때 공통된 부분을 체크한다?
	출력 시 find로 찾지 못하는 것들만 count ++ 하면?

	처음 입력 받을 때 1로 받는다
	두 번째 입력 받을 때 해당 값이 1이라면 삭제한다
	아니라면 2로 받는다

	마지막에
	1로 된 것들과 2로 된 것들을 출력

	아니 잠깐만 1 + 2를 출력하는게 문제잖아
	그럼 둘을 따로 구별할 필요 없이
	두 번째 input에서 중복되는 값들만 지우면 되는 거잖아

	1 2   4
	  2 3 4 5 6
	이면
	1 2 4를 일단 입력 받고
	나중에 2 3 4 5 6 을 입력 받는데 2 4 는 중복이니까 지워
	그럼 1 3 5 6 만 남고 개수를 네게니까 답이 된다
	*/
	return 0;
}
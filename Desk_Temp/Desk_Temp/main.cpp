#include <iostream>

using std::cin;
using std::cout;
using std::ios_base;

void FindRoomNumber(int H, int W, int N)
{
	int temp1 = N / H;
	int temp2 = N % H;

	int Dong = (N - 1) / H + 1; ;

	int Floor = (N - 1) % H + 1;
	

	cout << Floor;

	cout.width(2); 
	cout.fill('0'); 
	cout << Dong << "\n";

	return ;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int T;
	int H, W, N;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> H >> W >> N;
		FindRoomNumber(H, W, N);
	}

	return 0;
}

/*
	N이 주어진다
	H의 높이로 우선해서 나눈다. 
	그럼 H = 6일 때 6으로 나눠야 한다

	6으로 나눈 몫이 W의 시작 지점이고 1층의 N번 째 방이 된다
	나머지는 층 수가 된다
*/
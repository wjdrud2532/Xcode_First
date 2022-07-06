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
	N�� �־�����
	H�� ���̷� �켱�ؼ� ������. 
	�׷� H = 6�� �� 6���� ������ �Ѵ�

	6���� ���� ���� W�� ���� �����̰� 1���� N�� ° ���� �ȴ�
	�������� �� ���� �ȴ�
*/
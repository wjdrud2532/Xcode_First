#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::ios_base;

using namespace std;

int T, n, startx, starty, arrivalx, arrivaly, cnt;
double tempx, tempy, tempRadius, tempR;
bool temp1, temp2;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> T;

	while (T--)
	{
		cin >> startx >> starty >> arrivalx >> arrivaly;
		cin >> n;

		while (n--)
		{
			cin >> tempx >> tempy >> tempRadius;

			//주어진 원의 좌표로 시작지점과 도착지점이 그 원의 안, 밖 인지 확인한다
			//둘의 상태가 다르다면 진입, 이탈을 해야 하므로 cnt ++ 한다

			//주어진 원과 시작지점
			tempR = sqrt(pow((double)tempx - startx, 2) + pow((double)tempy - starty, 2));	

			//tempR = (tempx - startx) * (tempx - startx) + (tempy - starty) * (tempy - starty);
			temp1 = tempR >= tempRadius * tempRadius ? false : true;

			tempR = sqrt(pow(tempx - arrivalx, 2) + pow(tempy - arrivaly, 2));
			
			//tempR = (tempx - arrivalx) * (tempx - arrivalx) + (tempy - arrivaly) * (tempy - arrivaly);
			temp2 = tempR >= tempRadius * tempRadius ? false : true;

			if (temp1 != temp2)
				cnt++;
		}

		cout << cnt << "\n";
		cnt = 0;
	}

	return 0;
}
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

			//�־��� ���� ��ǥ�� ���������� ���������� �� ���� ��, �� ���� Ȯ���Ѵ�
			//���� ���°� �ٸ��ٸ� ����, ��Ż�� �ؾ� �ϹǷ� cnt ++ �Ѵ�

			//�־��� ���� ��������
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
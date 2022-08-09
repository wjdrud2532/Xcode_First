#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::ios_base;

using namespace std;

int W, H, X, Y, P, cnt = 0;
int p_x, p_y;
int leftcir, rectang, rightcir, radius;
bool temp1, temp2, temp3;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> W >> H >> X >> Y >> P;

	radius = H / 2;

	while (P--)
	{
		cin >> p_x >> p_y;

		//왼쪽 원의 범위
		leftcir = (p_x - X) * (p_x - X) + (p_y - (Y + radius)) * (p_y - (Y + radius));
		if (leftcir <= radius * radius && p_x < X)
			temp1 = true;
		else
			temp1 = false;

		//temp1 = leftcir >= radius * radius ? false : true;

		

		//오른쪽 원의 범위
		rightcir = (p_x - (X + W)) * (p_x - (X + W)) + (p_y - (Y + radius)) * (p_y - (Y + radius));
		if (rightcir <= radius * radius && p_x > X + W)
			temp2 = true;
		else
			temp2 = false;
		
		//temp2 = rightcir >= radius * radius ? false : true;

		

		//직사각형의 범위
		//rectang = (p_x - (X + W)) * (p_x - (X + W)) + (p_y - (Y + radius)) * (p_y - (Y + radius));;
		if (X <= p_x && p_x <= X + W && Y <= p_y && p_y <= Y + H)
			temp3 = true;
		else temp3 = false;

		//temp3 = rectang >= W * H ? false : true;


		if (temp1 == true)
		{
			cnt++;
		}
		else if (temp2 == true)
		{
			cnt++;
		}
		else if (temp3 == true)
		{
			cnt++;
		}

		
	}

	cout << cnt << "\n";

	return 0;
}
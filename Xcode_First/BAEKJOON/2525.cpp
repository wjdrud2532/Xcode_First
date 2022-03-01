#include <iostream>

using std::cin;
using std::cout;
using std::ios_base;

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	int A, B, C;

	int PH, PM;

	cin >> A >> B >> C;

	PM = C % 60;
	PH = C / 60;

	A += PH;
	B += PM;
	
	if (B >= 60)
	{
		A ++;
		B -= 60;
	}

	if (A >= 24)
	{
		A -= 24;
	}
	
	cout << A << " " << B << "\n";

	return 0;
}
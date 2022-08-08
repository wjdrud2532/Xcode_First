#include <iostream>
#include <climits>

using std::cin;
using std::cout;
using std::ios_base;

using namespace std;

int Euclidean(int a, int b)
{
	int r = a % b;
	if (r == 0) {
		return b;
	}
	return Euclidean(b, r);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n1, n2, max;

	cin >> n1 >> n2;
	max = Euclidean(n1, n2);
	cout << max << "\n";
	cout << (n1 * n2) / max << "\n";

	return 0;
}
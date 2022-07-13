#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::ios_base;
using std::sqrt;

void hanoi(int n, int start, int to, int bypass)
{
    if(n == 1)
		cout << start << " " << to << "\n";
    else
    {
        hanoi(n - 1, start, bypass, to);
		cout << start << " " << to << "\n";
        hanoi(n - 1, bypass, to, start);
    }
}
int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

    int num;
    cin >> num;

    cout << (1<<num) -1 << "\n";

    hanoi(num,1,3,2);
}

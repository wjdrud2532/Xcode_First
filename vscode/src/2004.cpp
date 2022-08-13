#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::ios_base;

using namespace std;

long long func(long long n, long long x)
{
    long long num = 0;

    for (long long i = x; n / i >= 1; i *= x)
        num += n / i;

    return num;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long N, M;
    cin >> N >> M;

    long long five, two;

    five = func(N, 5) - func(N - M, 5) - func(M, 5);
    two = func(N, 2) - func(N - M, 2) - func(M, 2);

    cout << min(five, two) << "\n";

    return 0;
}


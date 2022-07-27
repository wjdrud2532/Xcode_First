#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::ios_base;
using std::vector;

int CntBag(int N)
{
    int Count;

    if (N < 5)
    {
        if (N == 3)
            return 1;
        else
            return -1;
    }

    Count = N / 5;
    N %= 5;

    if (N == 0)
        return Count;

    else if (N == 1 || N == 3)
        return Count + 1;

    else if (N == 4)
        return Count + 2;

    else if (N == 2 && Count >= 2)
        return Count + 2;

    else
        return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;

    cin >> N;

    cout << CntBag(N) << "\n";

    return 0;
}
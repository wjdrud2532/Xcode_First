#include <iostream>

using std::cin;
using std::cout;
using std::ios_base;

bool IsTripleSix(int num)
{
    bool IsTripleSix = false;

    while (num > 0)
    {
        if (num % 1000 == 666)
        {
            IsTripleSix = true;
            return IsTripleSix;
        }

        num /= 10;
    }

    return IsTripleSix;
}

int FindNum(int N)
{
    int cnt = 0;
    for (int i = 666;; i++)
    {
        if(IsTripleSix(i) == true)
            cnt ++;

        if(cnt == N)
            return i;
    }

    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N;
    cin >> N;

    cout << FindNum(N) << "\n";

    return 0;
}
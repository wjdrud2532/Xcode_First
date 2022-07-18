
#include <iostream>

using std::cin;
using std::cout;
using std::ios_base;

int temp;

bool IsTripleSix(int num)
{
    bool IsTripleSix = false;

    temp = 0;

    while (num > 0)
    {
        if (num % 1000 == 666)
        {
            IsTripleSix = true;
            return IsTripleSix;
        }

        num /= 10;
        temp++;
    }

    return IsTripleSix;
}

int FindNum(int N)
{
    int cnt = 0;
    for (int i = 666;;)
    {
        if (IsTripleSix(i) == true)
            cnt++;

        if (cnt == N)
            return i;

        if (temp == 0)
            i += 1000;
        else
            {
                int temp2 = 1;
                for(int j = temp - 1; j > 0; j --)
                {
                    temp2 *= 10;
                }
                i += temp2;
            }
    }

    return 0;
}
/*

temp가 0일 경우 + 1000?
        1일 경우 + 1
        2일 경우 + 10
        3일 경우 + 100
*/

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
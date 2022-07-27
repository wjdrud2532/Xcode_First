#include <iostream>

using std::cin;
using std::cout;
using std::ios_base;

int Black(int N)
{
    int temp, Sum;


    for (int i = 1; i < N; i++)
    {
        Sum = temp = i;

        while (temp > 0)
        {
            Sum += (temp % 10);
            temp /= 10;
        }

        if (Sum == N)
            return i;
    }

    return 0;
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base ::sync_with_stdio(false);

    int N;

    cin >> N;

    cout << Black(N) << "\n";
}

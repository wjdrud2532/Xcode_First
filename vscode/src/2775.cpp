#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::ios_base;
using std::vector;

int Apt[15][15];

void MakeNumberOfPeople()
{
    for (int i = 0; i < 15; i++)
    {
        Apt[0][i] = i;
        Apt[i][1] = 1;
    }

    for (int i = 1; i < 15; i++)    //층
    {
        for (int j = 2; j < 15; j++)    //호수
        {
            Apt[i][j] = Apt[i][j - 1] + Apt[i - 1][j];
        }
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T, K, n;

    cin >> T;

    MakeNumberOfPeople();

    for (int i = 0; i < T; i++)
    {
        cin >> K >> n;
        cout << Apt[K][n] << "\n";
    }

    return 0;
}
#include <iostream>

using std::cin;
using std::cout;
using std::ios_base;

int N, M;
char Board[50][50];

char Change(char temp)
{
    if (temp == 'W')
        return 'B';
    else
        return 'W';
}

int ChackWandB(int N, int M, char Start)
{
    int One = 0;
    char Compare = Change(Start);

    for (int i = N; i < N + 8; i++)
    {
        for (int j = M; j < M + 8; j++)
        {
            if (j % 2 == 0 && Board[i][j] == Start)
            {
                One ++;
            }
            else if (j % 2 == 1 && Board[i][j] == Compare)
            {
                One ++;
            }
        }
        Compare = Start;
        Start = Change(Start);
    }
	
    return 64 - One;
}

int Brute(int N, int M)
{
    int min = 65, temp, temp1, temp2;
    for (int i = 0; i < N - 7; i++)
    {
        for (int j = 0; j < M - 7; j++)
        {
            temp1 = ChackWandB(i, j, 'B');
            temp2 = ChackWandB(i, j, 'W');
            temp = (temp1 < temp2) ? temp1 : temp2;
            
            if (temp < min)
                min = temp;
        }
    }
    return min;
}

void Input(int N, int M)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> Board[i][j];
        }
    }

    return;
}

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int N, M;
    cin >> N >> M;

    Input(N, M);

    cout << Brute(N, M) << "\n";

    return 0;
}
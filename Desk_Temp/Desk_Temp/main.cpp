#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::ios_base;
using std::vector;

int CntBag(int N)
{
    //먼저 3과 5로 나눌 수 있는지 확인한다
    //5로 나눴을 때 나머지가 0인 경우
    //              나머지가 1인 경우  5를 하나 빼면 6이 되므로 나눌 수 있음
    //              나머지가 2인 경우  5를 두 개 빼면 12가 되므로 나눌 수 있음
    //              나머지가 3인 경우  바로 3으로 나눌 수 있음
    //              나머지가 4인 경우  5를 하나 빼면 9가 되므로 나눌 수 있음
 
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
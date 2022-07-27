#include <iostream>

using std::cin;
using std::cout;
using std::ios_base;

int ClimbDay(int A, int B, int V)
{
    int cnt = 0;

    int Remain = V - A;
    int OneDayClimb = A - B;

    cnt = Remain / OneDayClimb;

    if (Remain % OneDayClimb != 0)
        cnt++;
    else if (cnt == 0 && Remain != 0)
        cnt++;

    return cnt + 1;

    /*
    나머지가 0이면 잘 나눠진거니까 그대로
    나머지가 있으면 

    나눴을 때 remain보다 크거나 같을 때 중지

    remain이 3이다
    OneDayClimb는 1이다
    3을 1로 나누면 3
    거기에 ++ 해서 결과는 4

    remain은 1
    OneDayClimb는 4
    1을 4로 나누면 0 
           -> 나눈 결과가 0일 때 remain이 0이 아니라면 ++
    나온 결과에 ++ 해서 결과는 2
    */

}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    int A, B, V;

    cin >> A >> B >> V;

    cout << ClimbDay(A, B, V) << "\n";

    return 0;
}
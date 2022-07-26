#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::ios_base;

using std::pair;
using std::sort;

pair<int, int> Coordiante[100000];

void sortCoordinate(int N)
{
    for(int i = 0; i < N; i ++)
    {
        cin >> Coordiante[i].first >> Coordiante[i].second;
    }

    sort(Coordiante, Coordiante + N);

    for(int i = 0; i < N; i ++)
    {
        cout << Coordiante[i].first << " " << Coordiante[i].second << "\n";
    }

    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    cin >> N;

    sortCoordinate(N);

    return 0;
}

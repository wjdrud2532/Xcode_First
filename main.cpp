#include <iostream>
#include <algorithm>

//Clion commit test in window

#define INF 10000001
//100,000*100 = 10,000,000 으로 이 값 이상으로 INF를 설정해야 한다

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;

    int floyd[101][101];

//    cout << "start \n";

    cin >> N >> M;

    for(int i = 1; i <= N; i ++)
    {
        for(int j = 1; j <= N; j ++)
        {
            if(i == j)
                floyd[i][j] = 0;
            else
                floyd[i][j] = INF;
        }
    }

    int startcity, endcity, cost;
    for(int i = 1; i <= M; i ++)
    {
        cin >> startcity >> endcity >> cost;
        floyd[startcity][endcity] = min(floyd[startcity][endcity], cost);
    }


    for(int k = 1; k <= N; k ++)
    {
        for(int i = 1; i <= N; i ++)
        {
            for(int j = 1; j <= N; j ++)
            {
                floyd[i][j] = min(floyd[i][j], floyd[i][k] + floyd[k][j]);
            }
        }
    }

    for(int i = 1; i <= N; i ++)
    {
        for(int j = 1; j <= N; j ++)
        {
            if(floyd[i][j] == INF)
                cout << "0 ";
            else
                cout << floyd[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}

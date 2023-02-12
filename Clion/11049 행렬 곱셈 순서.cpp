

/*
#include <iostream>
#include <cstring>
#include <stack>
#include <climits>
#include <algorithm>

using namespace std;

int N, M, K;
pair<int, int> p[501];
int dp[501][501] = {};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        cin >> p[i].first >> p[i].second;
    }

//    if(N == 1)
//    {
//        cout << p[1].first * p[1].second << "\n";
//        return 0;
//    }
//    if(N == 2)
//    {
//        cout << p[1].first * p[1].second * p[2].second << "\n";
//        return 0;
//    }


    for (int i = 1; i <= N; i++)
    {
        //dp[0][i] = p[i].first * p[i].second;
    }


    for (int i = 1; i < N; i++)
    {
        dp[1][i] = p[i].first * p[i].second * p[i + 1].second;
//        cout << p[i].first << " " << p[i].second << " " << p[i + 1].second << "     ";
//        cout << dp[1][i] << "\n";

        for(int j = 1; j < N; j ++)
        {
            int tempnum;
            if(j == 1)
            {
                if(p[i + 1].second == p[j].first)
                    tempnum = p[j].second;
                else
                    tempnum = p[j].first;
                dp[i][j] = dp[i - 1][j] + (p[i + 1].first * p[i + 1].second * max(p[j].first, p[j].second));
            }
            else if(j == N - 1)
            {
                if(p[i + 1].second == p[j].first)
                    tempnum = p[j].second;
                else
                    tempnum = p[j].first;
                dp[i][j] = dp[i - 1][j] + (p[i - 1].first * p[i - 1].second * max(p[j + 1].first, p[j + 1].second));
            }
            else
            {
                if(p[i + 1].second == p[j].first)
                    tempnum = p[j].second;
                else
                    tempnum = p[j].first;
                dp[i][j] = dp[i - 1][j] + max((p[i + 1].first * p[i + 1].second * max(p[j].first, p[j].second)),
                                              (p[i + 1].first * p[i + 1].second * max(p[j].first, p[j].second)));
            }
        }


    }

    int MinValue = INT_MAX;
    for (int i = 1; i < N; i++)
    {
        if (dp[N - 1][i] < MinValue)
        {
            MinValue = dp[N - 1][i];
        }
    }

    for (int i = 0; i <= N; i++)
    {
        //cout << p[i].first << " " << p[i].second << "\n";
    }

    for (int i = 1; i < N; i++)
    {
        for (int j = 1; j < N; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << "\n";
    }

    cout << MinValue << "\n";

}
 */
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string s1, s2;

int dp[1001][1001] = {0,};
vector<pair<int, string>> v[1001][1001];

pair<int, string> p[1001][1001];

void findLCS(string s1, string s2)
{
    for(int i = 1; i <= s1.length(); i ++)
    {
        p[0][i].second = s1[i];
    }

    for(int i = 1; i <= s2.length(); i ++)
    {
        p[i][0].second = s2[i];
    }



    for (int i = 1; i <= s1.length(); i++)
    {
        for (int j = 1; j <= s2.length(); j++)
        {
            if (s1[i - 1] == s2[j - 1])
                if (p[i][j].first == 0)
                {
                    p[i - 1][j - 1].first++;
                    p[i][j].second += p[i - 1][j - 1].second;
                }

            // 문자열 붙히기
            pair<int, string> tempP;

            //뭘로 max 비교를 하는거지?
            tempP = max({p[i - 1][j - 1], p[i - 1][j], p[i][j - 1]});

            p[i][j].first += tempP.first;
            p[i][j].second += tempP.second;
        }
    }

    return;
}

int main()
{
    cin >> s1 >> s2;

    findLCS(s1, s2);

    for (int i = 0; i <= s1.length(); i++)
    {
        for (int j = 0; j <= s2.length(); j++)
        {
            cout.width(5);
            cout << p[i][j].second << " ";
        }
        cout << "\n";
    }

    cout << p[s1.length()][s2.length()].first << "\n";

    if (p[s1.length()][s2.length()].first == 0)
        return 0;

    cout << p[s1.length()][s2.length()].second << "\n";

    return 0;
}

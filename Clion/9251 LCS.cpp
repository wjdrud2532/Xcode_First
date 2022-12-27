#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string s1, s2;

int dp[1001][1001] = {0,};

void findLCS(string s1, string s2)
{
    for (int i = 1; i <= s1.length(); i++)
    {
        for (int j = 1; j <= s2.length(); j++)
        {
            if (s1[i - 1] == s2[j - 1])
                if (dp[i][j] == 0)
                    dp[i - 1][j - 1]++;

            dp[i][j] = max({dp[i - 1][j - 1], dp[i - 1][j], dp[i][j - 1]});
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
            cout << dp[i][j] << " ";
        }
        cout << "\n";
    }

    cout << dp[s1.length()][s2.length()] << "\n";

    return 0;
}

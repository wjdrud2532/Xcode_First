#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string s1, s2;

string dp[1001][1001];

void findLCS(string s1, string s2)
{

    for (int i = 1; i <= s1.length() + 1; i++)
    {
        for (int j = 1; j <= s2.length() + 1; j++)
        {
            if (s1[i - 1] == s2[j - 1])
                dp[i][j] = dp[i - 1][j - 1] + s1[i - 1];
            else
                dp[i][j] = (dp[i - 1][j].length() > dp[i][j - 1].length() ? dp[i - 1][j] : dp[i][j - 1]);
        }
    }

    return;
}

int main()
{
    cin >> s1 >> s2;

    findLCS(s1, s2);

    if (dp[s1.length()][s2.length()].length() != 0)
    {
        cout << dp[s1.length()][s2.length()].length() << "\n";
        cout << dp[s1.length()][s2.length()] << "\n";
    }
    else
        cout << "0\n";

    return 0;
}

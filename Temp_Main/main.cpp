#include <iostream>

using namespace std;

int dp[31][31];

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    dp[0][0] = dp[0][1] = dp[1][0] = 1;
    
    for(int i = 1; i <= 30; i ++)
    {
        for(int j = 0; j <= i; j ++)
        {
            if(j == 0 || j == i)
                dp[i][j] = 1;
            else
                dp[i][j] = dp[i - 1][j] + dp[i - 1][j - 1];
        }
    }
    
    int T, N, M;
    
    cin >> T;
    
    while(T--)
    {
        cin >> N >> M;
        cout << dp[M][N] << "\n";
    }
    
    
    return 0;
}

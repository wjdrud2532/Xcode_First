#include <iostream>

using std::cin;
using std::cout;
using std::ios_base;

bool isExist[51][51] = {0, };
int T, M, N, K;

int Chain(int x, int y)
{
    if(0 <= x && x <= N && 0 <= y && y <= M)
    {
        if(isExist[x][y] == true)
        {
            isExist[x][y] = false;
            
            Chain(x - 1, y);
            Chain(x + 1, y);
            Chain(x, y - 1);
            Chain(x, y + 1);
        }
    }
    
    return 0;
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    cin >> T;
    
    for(int q = 0; q < T; q ++)
    {
        cin >>  M >> N >> K;
        int worm = 0;

        for(int i = 0; i < K; i ++)
        {
            int temp1, temp2;
            cin >> temp1 >> temp2;
            
            isExist[temp2][temp1] = 1;
        }
        
        for(int i = 0; i < N; i ++)
        {
            for(int j = 0; j < M; j ++)
            {
                if(isExist[i][j] == true)
                {
                    worm ++;
                    Chain(i, j);
                }
            }
        }
        cout << worm << "\n";
    }
    return 0;
}

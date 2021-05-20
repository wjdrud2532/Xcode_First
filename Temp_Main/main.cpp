#include <iostream>

#define max 15

int N;
int cnt;
int arr[max] = {0, };

using namespace std;

void dfs(int queennum)
{
    if(queennum == N)
    {
        cnt ++;
        return;
    }
    
    bool ko;
    
    for(int i = 0; i < N; i ++)
    {
        ko = true;
        for(int j = 0; j < queennum; j ++)
        {
            if( arr[j] == i || abs(queennum - j) == abs(i - arr[j])  )
            {
                ko = false;
                break;
            }
            
        }
        if(ko)
        {
            arr[queennum] = i;
            dfs(queennum + 1);
        }
    }
}

int main()
{
    cin >> N;
    
    dfs(0);
    
    cout << cnt;
    
    return 0;
}

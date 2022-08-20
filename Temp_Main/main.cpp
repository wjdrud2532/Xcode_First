#include<iostream>
#include<math.h>

using namespace std;

int arr[21][21];
bool isvisit[21];
int N, minnum = 201, temp, start, link;


void dfs(int cnt, int m) // x는 카운트 수, pos는 다음 값
{
    if (cnt == N / 2) // 서로 같은 개수로 비교 가능한 경우
    {
        start = link = 0;
        
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= N; j++)
            {
                if(i != j)      //0 값은 생략
                {
                    // 둘 중 한가지 경우만 발생하므로 else if
                    
                    //둘 다 방문했다면 기존값에 더한다
                    //sij 부터 sji 까지 반복하므로 arr[i][j] + arr[j][i]는 하지 않는다
                    //절반으로 나ㅝ서 arr[i][j] + arr[j][i]를 할 경우 1,2 가 안된다
                    if (isvisit[i] == true && isvisit[j] == true)
                        start += arr[i][j];

                    else if (isvisit[i] == false && isvisit[j] == false)
                        link += arr[i][j];
                }
                
            }
        }
        
        temp = abs(start - link);
        
        if (minnum > temp)
            minnum = temp;
        
        return;
    }
    
    for (int i = m; i < N; i++) // dfs   cnt가 n/2가 될 때 까지 반복
    {                           // n/2 가 되어야만 start와 link를 맞아 떨어지게 비교 가능
        isvisit[i] = true;
        dfs(cnt + 1, i + 1);
        isvisit[i] = false;
    }
    
}

int main()
{
    cin >> N;
    
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    dfs(0, 1); // 카운트 0회부터 숫자는 1부터 시작
    
    cout << minnum << "\n";
}


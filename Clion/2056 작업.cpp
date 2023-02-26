#include <iostream>
#include <algorithm>

using namespace std;

int N;
int dp[10001] = {0, };
int result = 0;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    int tempTime, PreWorkNum, PrwWorkMax, PreWorkLoc;
    for(int i = 0; i < N; i ++)
    {
        cin >> tempTime >> PreWorkNum;

        //선행 작업이 존재할 경우
        if(PreWorkNum)
        {
            PrwWorkMax = 0;

            //선행 작업 중 가장 긴 시간이 걸리는 작업을 찾는다
            for(int j = 0; j < PreWorkNum; j ++)
            {
                cin >> PreWorkLoc;
                if(dp[PreWorkLoc - 1] > PrwWorkMax)
                    PrwWorkMax = dp[PreWorkLoc - 1];
            }

            //i번째 작업이 완료되기까지 걸리는 최소 시간
            dp[i] = PrwWorkMax + tempTime;

        }
        else
            //선행 작업이 없을 경우 그냥 추가
            dp[i] = tempTime;

        //위에서 최소 시간을 계산하므로 가장 큰 값은 전체 작업의 최소 시간이 된다
        if(dp[i] > result)
            result = dp[i];
    }

    cout << result << "\n";

    /*
     * 최소 시간 출력
     * 선행 관계가 없는 작업들은 동시에 수행 가능
     * -> 가장 큰 시간을 추가
     *
     * 5
     * + 6 = 11
     * + 8 = 19
     * + 4 = 23
     *
     * 5 6 9 11 12 19 23
     * 선행해야하는 작업들 중 가장 큰 값에 현재 값을 추가한다
     */


    return 0;
}

/*  위상정렬 사용
 * #include <iostream>
#include <algorithm>
#include <queue>
#include <vector>

using namespace std;

int N, M;
vector<int> v[10001];
int indegree[10001] = {0,};
int manytime[10001];
int dp[10001];
int result = 0;

queue<int> q;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    int time, B, tempnum;
    for (int i = 1; i <= N; i ++)
    {
        cin >> time >> B;

        if(B)
        {
            for(int j = 0; j < B; j ++)
            {
                cin >> tempnum;
                v[tempnum].push_back(i);
            }
        }

        manytime[i] = dp[i] = time;
        indegree[i] = B;
    }

    for (int i = 1; i <= N; i ++)
    {
        if (indegree[i] == 0)
            q.push(i);
    }


    while (! q.empty())
    {
        int current = q.front();
        q.pop();

        for (int i = 0; i < v[current].size(); i ++)
        {
            int next = v[current][i];
            indegree[next] --;

            dp[next] = max(dp[next], dp[current] + manytime[next]);

            if (indegree[next] == 0)
            {
                q.push(next);
            }
        }
    }

    for(int i = 1; i <= N; i ++)
    {
        result = max(result, dp[i]);
    }

    cout << result << "\n";

    return 0;
}
 */
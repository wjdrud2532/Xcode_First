#include <ios>
#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;
    while(T --)
    {
        int N, K;
        int indegree[1001] = {0, };
        int time[1001] = {0, };
        vector<int> v[1001];

        int result[1001] = {0, };

        cin >> N >> K;

        for(int i = 1; i <= N; i ++)
            cin >> time[i];

        for(int i = 1; i <= K; i ++)
        {
            int start, end;
            cin >> start >> end;

            v[start].push_back(end);

            indegree[end] ++;
        }

        queue<int> q;
        for(int i = 1; i <= N; i ++)
            if(indegree[i] == 0)
            {
                q.push(i);
                result[i] = time[i];
            }

        while(!q.empty())
        {
            int current = q.front();
            q.pop();

            for(int i = 0; i < v[current].size(); i ++)
            {
                int next = v[current][i];

                indegree[next] --;

                if(result[current] + time[next] > result[next])
                    result[next] = result[current] + time[next];

                if(indegree[next] == 0)
                    q.push(next);
            }
        }

        int target;
        cin >> target;
        cout << result[target] << "\n";
    }
    return 0;
}

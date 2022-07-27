#include <iostream>
#include <vector>
#include <climits>

using std::cin;
using std::cout;
using std::ios_base;
using std::pair;
using std::vector;

void Solve()
{
    int N;
    vector<pair<int, bool>> arr;

    cin >> N;

    pair<int, bool> temppair;
    for (int i = 0; i < N; i++)
    {
        cin >> temppair.first;
        temppair.second = false;
        arr.push_back(temppair);
    }

    //전부 입력 받음

    int min = INT_MAX, tempnum;
    vector<int> temparr;
    int count = 0;

    for (int i = 0; i < N; i++)
    {
        min = INT_MAX;

        for (int j = 0; j < N; j++)
        {
            if (arr[j].second == false)

            {
                if (arr[j].first < min)
                {
                    temparr.clear();
                    min = arr[j].first;
                    temparr.push_back(j);
                    //현재 값들 중 가장 작은 값을 찾는다, 더 작은 값이 나올 경우 다시 초기화
                    //그 값들의 위치를 temparr에 저장한다
                }
                else if (arr[j].first == min) //같은 값일 경우 추가만 한다
                {
                    temparr.push_back(j);
                }
            }
        }

        //가장 작은 값을 count로 바꾼다
        for (int j = 0; j < temparr.size(); j++)
        {
            if (arr[temparr[j]].second == false)

            {
                arr[temparr[j]].first = count;
                arr[temparr[j]].second = true;
            }
        }
        count++;
    }

    for (int i = 0; i < N; i++)
    {
        cout << arr[i].first << " ";
        // cout << arr[i].first << " " << arr[i].second << "\n";
    }

    /*

    가장 작은 값이 0

    들어올 때 마다 상대적인 값을 찾는 것은 비효율적이다

    전부 다 입력 받은 뒤 배열을 이중 for문으로 찾아가면서 상대적인 값을 찾는다?
    */

    return;
}

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    Solve();

    return 0;
}
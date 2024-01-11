#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool linkGroup[1001];
vector<int> link[1001];

int N, M;
int linkCount = 0;

void checkLink(int num)
{
    // num과 연결된 모든 간선들을 방문으로 체크

    for(int i = 0; i < link[num].size(); i ++)
    {
        if(linkGroup[link[num][i]] == true)
        {
            continue;
        }
        else
        {
            linkGroup[link[num][i]] = true;
            checkLink(link[num][i]);
        }
    }

    for(int i = 0; i < link[num].size(); i ++)
    {
        if(linkGroup[link[num][i]] == true)
        {
            continue;
        }
        else
        {
            linkGroup[link[num][i]] = true;
            checkLink(link[num][i]);
        }
    }

    return ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M;

    int temp1, temp2;

    // 간선 개수만큼 입력 받고 서로 연결
    for(int i = 0; i < M; i ++)
    {
        cin >> temp1 >> temp2;
        link[temp1].push_back(temp2);
        link[temp2].push_back(temp1);
    }

    for(int i = 1; i <= N; i ++)
    {
        // 방문한 경우 넘어감
        if(linkGroup[i] == true)
        {
            continue;
        }

        // 방문하지 않은 경우
        linkGroup[i] = true;
        linkCount ++;           // 새로운 간선 그룹 추가 

        // i 의 자식들 확인
        checkLink(i);
    }

    cout << linkCount << endl;

    return 0;
}
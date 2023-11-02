#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int N, M;
int arr[8][8] = {0, };
int temparr[8][8] = {0, };
bool isVisit[8][8] = {false, };
int maxCnt = 0;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

int main()
{
    cin >> N >> M;
    for(int i = 0; i < N; i ++)
    {
        for(int j = 0; j < M; j ++)
        {
            cin >> arr[i][j];
        }
    }

    return 0;
}
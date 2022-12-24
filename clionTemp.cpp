//
// Created by wjdru on 2022-12-24.
//

//#include "clionTemp.h"

/*
 * #include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    int cnt = 0;

    vector<int> v[501];
    vector<int> v2[501];

    cin >> N >> M;

    int small, tall;
    for (int i = 1; i <= M; i++)
    {
        cin >> small >> tall;

        v[tall].push_back(small);

        for (int j = 0; j < v[small].size(); j++)
        {
            //auto it = find(v[tall].begin(), v[tall].end(), v[small][j]);
            //if(it == v[tall].end())
            v[tall].push_back(v[small][j]);
        }

        v2[small].push_back(tall);
    }

    for (int i = 0; i < N; i++)
    {
        sort(v[i].begin(), v[i].end());
        auto it = unique(v[i].begin(), v[i].end());
        v[i].erase(it, v[i].end());
    }

    for (int i = 1; i <= N; i++)
    {

        for (int j = 0; j < v[i].size(); j++)
        {
            v2[i].push_back(v[i][j]);
        }

        v2[i].push_back(i);

        sort(v2[i].begin(), v2[i].end());
    }

    for (int i = 1; i <= N; i++)
    {
        bool isknow = true;
        if (v2[i].size() == N)
        {
            for (int j = 0; j < N; j++)
            {
                if (v2[i][j] != j + 1)
                {
                    isknow = false;
                    break;
                }
            }
            if (isknow)
                cnt++;
        }
    }

    cout << cnt << "\n";

}

 */
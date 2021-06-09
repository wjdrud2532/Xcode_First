//
//  1931.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/06/08.
//

#include <iostream>
#include <algorithm>
#include <vector>

using std::cin;
using std::cout;
using std::ios_base;
using std::pair;

bool Compare(pair<long, long> a, pair<long, long> b)
{
    if(a.second != b.second)
        return a.second < b.second;
    else
        return a.first < b.first;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //꼭 쓰자. 실행시간 3배이상 차이난다.
    
    int N;
    int count = 1;
    
    std::pair<long, long> meeting[100000];
    
    cin >> N;
    
    for(int i = 0; i < N; i ++)
        cin >> meeting[i].first >> meeting[i].second;
    
    std::sort(meeting, meeting + N, Compare);
    
    long end = meeting[0].second;
    for(int i = 1; i < N; i ++)
    {
        if(meeting[i].first >= end)
        {
            end = meeting[i].second;
            count ++;
        }
    }
    
//    for(int i = 0; i < N; i ++)
//    {
//        cout << meeting[i].first << " " << meeting[i].second << "\n";
//    }
    
    cout << count <<"\n";
    
    
}

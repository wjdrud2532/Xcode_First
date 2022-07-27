#include <iostream>
#include <cstring>
#include <algorithm>

using std::cin;
using std::cout;
using std::ios_base;
using std::string;
using std::pair;
using std::stable_sort;

int N;
pair<int, string> P[100000];

bool compare(pair<int, string> a, pair<int, string> b)
{
    if(a.first == b.first)
    {
        return false;
    }
    
    return a.first < b.first;
}

void Input()
{
    cin >> N;
    for(int i = 0; i < N; i ++)
    {
        cin >> P[i].first >> P[i].second;
    }
    
    stable_sort(P, P + N, compare);
    
    for(int i = 0; i < N; i ++)
    {
        cout << P[i].first << " " << P[i].second << "\n";
    }
    
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    Input();
    
    return 0;
}


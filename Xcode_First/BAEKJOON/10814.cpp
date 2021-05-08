//
//  10814.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/05/09.
//

#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::ios_base;
using std::string;

bool compare(std::pair<int, string> a, std::pair<int, string> b)
{
    if(a.first == b.first)
    {
        return false;
        /*
         a, b의 나이가 같을 경우 false를 반환하여 정렬을 하지 않는다.
         즉, first순으로 정렬 하되 first가 같다면 뒤에 계속 쌓이는 것이다.
         */
    }
    
    return a.first < b.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    
    cin >> N;
    
    std::pair<int, string> pstr[N];
    
    for(int i = 0; i < N; i ++)
        cin >> pstr[i].first >> pstr[i].second;
    
    std::stable_sort(pstr, pstr + N, compare);
    
    for(int i = 0; i < N; i ++)
        cout << pstr[i].first << " " << pstr[i].second << "\n";
}

//
//  2164.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/06/23.
//

#include <iostream>
#include <algorithm>
#include <queue>

using std::cin;
using std::cout;
using std::ios_base;
using std::queue;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    queue<int> Q;
    cin >> N;
    
    for(int i = 1; i <= N; i ++)
        Q.push(i);
    
    while(Q.size() != 1)
    {
        Q.pop();
        Q.push(Q.front());
        Q.pop();
    }
    
    cout << Q.front();
}


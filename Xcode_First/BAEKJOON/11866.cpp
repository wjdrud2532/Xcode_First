//
//  11866.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/06/23.
//
//원형 큐 문제
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
    
    int K, N;
    int count = 1;
    cin >> N >> K;
    
    queue<int> Q;
    
    for(int i = 1; i <= N; i ++)
    {
        Q.push(i);
    }
    
    cout << "<";
    while(!Q.empty())
    {
        if(K > 1)
        {
            Q.push(Q.front());
            Q.pop();
            
            count ++;
            
            if(count == K)
            {
                cout << Q.front();
                
                Q.pop();
                count = 1;
                
                if (!Q.empty()) {
                    cout << ", ";
                }
            }
        }
        else
        {
            cout << Q.front();
            Q.pop();
            
            if (!Q.empty()) {
                cout << ", ";
            }
        }
    }
    cout << ">\n";
    
    
}


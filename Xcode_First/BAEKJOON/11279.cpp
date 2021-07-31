//
//  11279.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/08/01.
//우선순위 큐 사용 문제

#include <iostream>
#include <algorithm>
#include <queue>        //큐

using std::cin;
using std::cout;
using std::ios_base;
using std::priority_queue;  //우선순위 큐

int main()
{
    std::ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    priority_queue<int> Q;
    
    cin >> N;
    
    int temp;
    for(int i = 0; i < N; i ++)
    {
        cin >> temp;
        
        if(temp == 0)
        {
            if(Q.empty())
                cout << "0\n";
            else
            {
                cout << Q.top() << "\n";
                Q.pop();
            }
        }
        else
        {
            Q.push(temp);
        }
        
    }
    
}


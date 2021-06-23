//
//  18258.cpp
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
    int temp;
    std::string str;
    queue<int> Q;
    cin >> N;
    
    for(int i = 0; i < N; i ++)
    {
        cin >> str;
        if(str == "push")
        {
            cin >> temp;
            Q.push(temp);
        }
        else if(str == "front")
        {
            if(Q.empty())
                cout << "-1\n";
            else
                cout << Q.front() << "\n";
        }
        else if(str == "back")
        {
            if(Q.empty())
                cout << "-1\n";
            else
                cout << Q.back() << "\n";
        }
        else if(str == "size")
        {
            cout << Q.size() << "\n";
        }
        else if(str == "pop")
        {
            if(Q.empty())
                cout << "-1\n";
            else
            {
                cout << Q.front() << "\n";
                Q.pop();
            }
        }
        else if(str == "empty")
        {
            if(Q.empty())
                cout << "1\n";
            else
                cout << "0\n";
        }
        
    }
    
    
}


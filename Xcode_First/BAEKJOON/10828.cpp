//
//  10828.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/06/21.
//

#include <iostream>
#include <algorithm>
#include <stack>
#include <cstring>

using std::cin;
using std::cout;
using std::ios_base;
using std::stack;
using std::string;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    
    stack<int> S;
    string str;
    int temp;
    for(int i = 0; i < N; i ++)
    {
        cin >> str;
        if(str == "push")
        {
            cin >> temp;
            S.push(temp);
        }
        else if(str == "pop")
        {
            if(!S.empty())
            {
                cout << S.top() << "\n";
                S.pop();
            }
            else
                cout << "-1\n";
        }
        else if(str == "size")
        {
            cout << S.size() << "\n";
        }
        else if(str == "empty")
        {
            cout << S.empty() << "\n";
        }
        else if(str == "top")
        {
            if(!S.empty())
            {
                cout << S.top() << "\n";
            }
            else
                cout << "-1\n";
        }
    }
    
}


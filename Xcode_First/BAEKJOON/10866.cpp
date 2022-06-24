//
//  10866.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/06/28.
//

#include <iostream>
#include <algorithm>
#include <deque>

using std::deque;
using std::cin;
using std::cout;
using std::ios_base;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    deque<int> D;
    
    int N, temp;
    std::string str;
    
    cin >> N;
    
    for(int i = 0; i < N; i ++)
    {
        cin >> str;
        
        if(str == "push_front")
        {
            cin >> temp;
            D.push_front(temp);
        }
        else if(str == "push_back")
        {
            cin >> temp;
            D.push_back(temp);
        }
        else if(str == "pop_front")
        {
            if(D.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << D.front() << "\n";
                D.pop_front();
            }
            
        }
        else if(str == "pop_back")
        {
            if(D.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << D.back() << "\n";
                D.pop_back();
            }
        }
        else if(str == "size")
        {
            cout << D.size() << "\n";
        }
        else if(str == "empty")
        {
            if(D.empty())
            {
                cout << "1\n";
            }
            else
            {
                cout << "0\n";
            }
        }
        else if(str == "front")
        {
            if(D.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << D.front() << "\n";
            }
        }
        else if(str == "back")
        {
            if(D.empty())
            {
                cout << "-1\n";
            }
            else
            {
                cout << D.back() << "\n";
            }
        }
    }
    
}

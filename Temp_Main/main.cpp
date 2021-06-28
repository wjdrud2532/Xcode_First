#include <iostream>
#include <algorithm>
#include <deque>
#include <cstring>

using std::deque;
using std::string;
using std::cin;
using std::cout;
using std::ios_base;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T, N;
    deque<int> D;
    string p, temp;
    
    cin >> T;
    
    for(int i = 0; i < T; i ++)
    {
        cin >> p;
        cin >> N;
        cin >> temp;
        bool IsChain = false;
        for(int j = 1; j < temp.size() - 1; j ++)
        {
            if('0' <= temp[j] && temp[j] <= '9')        //현재값이 숫자이고
            {
                if('0' <= temp[j + 1] && temp[j + 1] <= '9')        //연속될 경우
                {
                    int num = temp[j] - '0';
                    num *= 10;
                    num += temp[j + 1] - '0';
                    temp[j + 1] = num;
                    IsChain = true;
                }
                else        //연속되지 않을 경우
                {
                    if(IsChain)
                        D.push_back(temp[j]);
                    else
                        D.push_back(temp[j] - '0');
                }
            }
            else                                    //현재값이 숫자가 아닐 경우
            {
                
            }
        }
        
        bool StartFront = true;
        bool IsError = false;
        
        for(int j = 0; j < p.size(); j ++)
        {
            if(p[j] == 'R')
            {
                if(StartFront)
                    StartFront = false;
                else
                    StartFront = true;
            }
            else if(p[j] == 'D')
            {
                if(D.empty())
                {
                    IsError = true;
                    break;
                }
                
                if(StartFront)
                    D.pop_front();
                else
                    D.pop_back();
            }
        }
        
        if(IsError)
            cout << "error\n";
        
        else
        {
            cout << "[";
            while(!D.empty())
            {
                if(StartFront)
                {
                    cout << D.front();
                    D.pop_front();
                }
                else
                {
                    cout << D.back();
                    D.pop_back();
                }
                
                
                if(D.size() != 0)
                    cout << ",";
            }
            cout << "]\n";
        }
        D.clear();
    }
    
}


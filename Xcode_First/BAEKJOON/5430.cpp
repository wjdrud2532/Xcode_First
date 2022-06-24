//
//  5430.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/06/30.
//
// ','의 아스키 코드는 44라서 숫자 44를 입력 받을 때 다른 값으로 변하는 오류가 있었으나 44가 나올 경우 ,가 2개 생기는 점을 이용하여 해결했다.
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
    
    int T;
    
    
    cin >> T;
    
    for(int i = 0; i < T; i ++)
    {
        int N;
        deque<int> D;
        string p;
        string temp;
        
        cin >> p;
        cin >> N;
        cin >> temp;
        
        //44가 나올 때 문제가 발생, 해당 값이 없어지고 다음값을 변형시킨다.
        /*
         10
         R
         1
         [44,44]
         */
        
        bool IsChain = false;
        for(int j = 1; j < temp.size() - 1; j ++)
        {
            if(temp[j] != ',')        //현재값이 숫자이고
            {
                if('0' <= temp[j + 1] && temp[j + 1] <= '9')        //연속될 경우
                {
                    int num;
                    if(IsChain)
                        num = temp[j];
                    else
                        num = temp[j] - '0';
                    
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
                    
                    IsChain = false;
                }
            }
            else if(temp[j] == ',' && temp[j + 1] == ',')   //입력값이 44인 경우
            {
                D.push_back(44);
                IsChain = false;
                j ++;
            }
        }
        
        bool StartFront = true;
        bool IsError = false;
        
        for(int j = 0; j < p.size(); j ++)
        {
            if(p[j] == 'R')
                StartFront = !StartFront;
            else if(p[j] == 'D')
            {
                if(D.empty())
                {
                    IsError = true;
                    break;
                }
                else
                {
                    if(StartFront)
                        D.pop_front();
                    else
                        D.pop_back();
                }
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
                
                
                if(!D.empty())
                    cout << ",";
            }
            cout << "]\n";
        }
        
        D.clear();
    }
    return 0;
    
}

/*
 DDRRDD
 345678987654
 
 1
 
 RRDDDDDRRRRRDRDDDRRRRRDRRDRRRR
 
 18
 
 [65,14,87,67,55,58,23,51,85,41,69,25,31,63,70,64,59,21]
 
 [70,63,31,25,69,41,85]
 */

//
//  14888.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/05/23.
//

#include <iostream>
#include <climits>
#include <cstring>

#define max 11

using std::cin;
using std::cout;

int N;
int Sum = 0;
int MaxSum = INT_MIN;
int minSum = INT_MAX;

int num[max];
char operarr[max - 1];
int oper[4];

char dfsarr[max - 1];
bool dfsvisited[max - 1];

void dfs(int count)
{
    if(count == N - 1)
    {
        Sum = num[0];
        
//        cout << num[0] << " ";
//        for(int i = 0; i < N - 1; i ++)
//        {
//            cout << temparr[i] << " " << num[i + 1] << " ";
//        }
        
        for(int i = 1, j = 0; i < N; i ++, j ++)
            {
                if(dfsarr[j] == '+')
                    Sum += num[i];
                else if(dfsarr[j] == '-')
                    Sum -= num[i];
                else if(dfsarr[j] == '*')
                    Sum *= num[i];
                else if(dfsarr[j] == '/')
                    Sum /= num[i];
            }
        //cout <<  " = " << Sum << "\n";
        
        if(Sum > MaxSum)
            MaxSum = Sum;
        if(Sum < minSum)
            minSum = Sum;
        
        
        return;
    }
    
    for(int i = 0; i < N - 1; i ++)
    {
        if(!dfsvisited[i])
        {
            dfsvisited[i] = true;
            
            dfsarr[count] = operarr[i];
            
            dfs(count + 1);
            
            dfsvisited[i] = false;
            
        }
    }
}

int main()
{
    
    
    cin >> N;
    
    for(int i = 0; i < N; i ++)
    {
        cin >> num[i];
    }
    
    int tempcount = 0;
    for(int i = 0; i < 4; i ++)
    {
        cin >> oper[i];
        
        
        
        if(i == 0 && oper[i] != 0)
        {
            std::memset(operarr + tempcount, '+', oper[i]);
            tempcount += oper[i];
        }
        else if (i == 1 && oper[i] != 0)
        {
            std::memset(operarr + tempcount, '-', oper[i]);
            tempcount += oper[i];
        }
        else if( i == 2 && oper[i] != 0)
        {
            std::memset(operarr + tempcount, '*', oper[i]);
            tempcount += oper[i];
        }
        else if (i == 3 && oper[i] != 0)
        {
            std::memset(operarr + tempcount, '/', oper[i]);
            tempcount += oper[i];
        }
    }
    dfs(0);
    
    cout << MaxSum << "\n" << minSum;
    
    return 0;
}


/*
 백준 모범답안
 #include <cstdio>
 #include <algorithm>
 using namespace std;

 int N, A[12], OP[4];
 int Max = -1e9;
 int Min = 1e9;

 void calc(int cnt, int v) {
     if (cnt == N) {
         Max = max(Max, v);
         Min = min(Min, v);
         return;
     }
     if (OP[0]) {
         --OP[0];
         calc(cnt + 1, v + A[cnt]);
         ++OP[0];
     }
     if (OP[1]) {
         --OP[1];
         calc(cnt + 1, v - A[cnt]);
         ++OP[1];
     }
     if (OP[2]) {
         --OP[2];
         calc(cnt + 1, v * A[cnt]);
         ++OP[2];
     }
     if (OP[3]) {
         --OP[3];
         calc(cnt + 1, v / A[cnt]);
         ++OP[3];
     }
 }

 int main()
 {
     scanf("%d", &N);
     for (int i = 0; i < N; ++i) scanf("%d", &A[i]);
     for (int i = 0; i < 4; ++i) scanf("%d", &OP[i]);
     
     calc(1, A[0]);
     printf("%d\n%d", Max, Min);
     return 0;
 }
 */

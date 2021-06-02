//
//  2565.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/06/03.
//


#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using std::cin;
using std::cout;
using std::ios_base;
using std::vector;
using std::pair;
using std::max;

bool cmp(int* a, int* b)
{
   return a[0] > b[0];
}

int main() {
   
   ios_base :: sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
   
   
   int N;
   pair<int, int> line[101];
   int dp[101];
   
   cin >> N;
   
   for(int i = 1; i <= N; i ++)
       cin >> line[i].first >> line[i].second;

   std::sort(line, line + N + 1);
   
   int max = 0;
   
   for(int i = 1; i <= N; i ++)
   {
       for(int j = 0; j <= N; j ++)        //이 부분을 1로 하면 4,1 에서 0이 나온다.
                                           //second가 1일 경우도 1로 초기화 해야한다
       {
           if(line[j].second < line[i].second)
           {
               if(dp[i] <= dp[j])
                   dp[i] = dp[j] + 1;
           }
       }
       max < dp[i] ? max = dp[i] : 1 ;
   }
   
   
//    for(int i = 1; i <= N; i ++)
//        cout << line[i].first << " " << line[i].second << " "<< dp[i] <<  "\n";
   
   
   cout << N - max << "\n";
}


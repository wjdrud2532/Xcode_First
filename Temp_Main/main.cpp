#include <iostream>
#include <algorithm>
#include <vector>

using std::cin;
using std::cout;
using std::ios_base;
using std::vector;

/*
 그냥 중복되는 경우 없이 모두 더하면 된다.
 마치 대진표처럼
 두 개의 dp를 사용 계속해서 줄여나간다
 
 벡터를 쓸까?
 
 
 일단 입력받지 말고 처음 K를 입력 받았을 때 홀짝을 구별,
 홀수면 따로 하나 빼둔다.
 
 이후 두개씩 더한다. 그걸 dp2에 저장?
 
 or
 
 dp하나를 가지고 2개씩 더한다.
 덮어쓰기로 하나씩 하고
 */

bool isodd;


int sum = 0;

int dp(int num, vector<int> dp1)
{
    
}

int main()
{
    std::ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T, K;
    cin >> T;
    
    int temp;
    for(int i = 0; i < T; i ++)
    {
        cin >> K;
        
        vector<int> dp1;
        for(int j = 0; j < K; j ++)
        {
            cin >> temp;
            dp1.push_back(temp);
        }
        cout << dp(K, dp1) << "\n";;
        dp1.clear();
        sum = 0;
    }
}

/*
 11이 나오면 하나 빼서 10이 된다.
 2개씩 더하면 5가 된다.
 
 1 1 1 1
  1   1
    1
 
 40 30 30 50
   70    80
      150
 
 1 21 3 4 5 35 5 4 3 5 98 21 14 17 32

 1 + 21 = 22, sum = 22
 3 + 4 = 7, sum = 29
 7 + 5 = 12, sum = 41
 22 + 12 = 34, sum = 75
 5 + 4 = 9, sum = 84
 3 + 5 = 8, sum = 92
 9 + 8 = 17, sum = 109
 35 + 17 = 52, sum = 161
 34 + 52 = 86, sum = 247
 14 + 17 = 31, sum = 278
 21 + 31 = 52, sum = 330
 52 + 32 = 84, sum = 414
 98 + 84 = 182, sum = 596
 86 + 182 = 268, sum = 864
 
 인접한 페이지끼리만 합치기 가능
 최대한 작은 것 부터 -> 이후 큰 값을 합친다.
 1 21 3 4 5 35 5 4 3 5 98 21 14 17 32
  22   7        9   8          31
         12        17        52
      34                         84
               52           182
           86
                     269
 
 
 
 인접한 것들 중 가장 작은 값과 덧셈을 한다.
 dd
 */

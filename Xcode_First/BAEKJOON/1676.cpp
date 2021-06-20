//
//  1676.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/06/21.
//

#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::ios_base;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    
    std::pair<int, int> dp[501];
    int PrimeNum[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499};
    
    int temp;
    int i = 1;
    for(; i <= N; i ++)
    {
        dp[i].first = dp[i - 1].first;
        dp[i].second = dp[i - 1].second;
        
        temp = i;
        
        for(int j = 0; temp != 1;)
        {
            if(temp % PrimeNum[j] == 0 && temp >= PrimeNum[j])
            {
                if(PrimeNum[j] == 2)
                    dp[i].first ++;
                else if(PrimeNum[j] == 5)
                    dp[i].second ++;
                
                temp /= PrimeNum[j];
                
            }
            else
                j ++;
        }
        
    }
    int num = std::min(dp[i - 1].first, dp[i - 1].second);

        cout << num << "\n";
    
    
    /*
     소인수분해를 사용
     2 - 5  한 쌍일 때 마다 0 추가. 끝에서의 0만 찾으면 되니까 중간에 있는 0은 무시해도 된다.
     
     둘 중 작은 값이 끝 부분의 0의 개수가 된다.
     
    
     ??? 이 코드로 가능하다
     #include <stdio.h>
     int main(){
         int n;
         scanf("%d",&n);
         printf("%d",n/5+n/25+n/125);
     }
     
     */
}


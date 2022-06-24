//
//  9251.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/06/03.
//

//너무 어설프다...

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <cstring>

using std::cin;
using std::cout;
using std::ios_base;
using std::vector;
using std::pair;
using std::max;
using std::string;

int main() {
    
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string str1;
    string str2;
    int MaxLength = 0;
    
    cin >> str1 >> str2;
    
    int dp[1002][1002] = {0,};
    int dp2[1001][1001] = {0, };
    
    for(int i = 1; i <= str2.length(); i ++)
        dp2[i][0] = str2[i - 1];
    for(int i = 1; i <= str1.length(); i ++)
        dp2[0][i] = str1[i - 1];
    
    for(int i = 1; i <= str2.length() ; i ++)
    {
        for(int j = 1; j <= str1.length() ; j ++)
        {
            if(dp2[i][0] == dp2[0][j])
            {
                if(dp[i][j] == 0)
                    dp[i-1][j-1] += 1;
                
                
            }
            if(i > 0 && j > 0)
            {
                dp[i][j] = std::max( std::max(dp[i - 1][j - 1], dp[i - 1][j]) ,dp[i][j - 1]) ;
            }
            
            
        }
        // cout << "\n";
    }
    
    
//    cout << " ";
//    for(int i = 0; i <= str2.length() + 1; i ++)
//    {
//        for(int j = 0; j <= str1.length() + 1; j ++)
//        {
//            if(dp[i][j] != 0)
//            {
//                if(i > 0 && j > 0)
//                    cout << dp[i][j] << " ";
//                else
//                    cout << (char)dp[i][j] << " ";
//
//            }
//            else
//                cout << "  ";
//        }
//        cout << "\n";
//    }
    
    //cout << str1.length() << " " << str2.length() << "\n";
    //cout << str1 << " " << str2 << "\n";
    cout << dp[str2.length() ][str1.length() ] << "\n";
}


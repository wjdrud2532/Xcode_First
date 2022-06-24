//
//  10773.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/06/21.
//

#include <iostream>
#include <algorithm>
#include <stack>

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
    
    int N, Sum = 0;
    stack<int> S;
    
    cin >> N;
    
    int temp;
    for(int i = 0; i < N; i ++)
    {
        cin >> temp;
        if(temp == 0)
            S.pop();
        else
            S.push(temp);
    }
    
    while(!S.empty())
    {
        Sum += S.top();
        S.pop();
    }
    
    cout << Sum << "\n";
}


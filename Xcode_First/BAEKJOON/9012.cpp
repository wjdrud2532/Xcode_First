//
//  9012.cpp
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
    
    int N;
    
    string str;
    
    while(1)
    {
        stack<char> S;
        std::getline(cin, str);
        
        
        
        for(int j = 0; j < str.length(); j ++)
        {
            if(str[j] == '(' || str[j] == '[')
                S.push(str[j]);
            else if(str[j] == ')' || str[j] == ']')
                S.pop();
        }
        
        if(S.empty())
            cout << "yes\n";
        else
            cout << "no\n";
        
    }
}


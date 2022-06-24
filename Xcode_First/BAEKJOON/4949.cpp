//
//  4949.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/06/22.
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
    
    string str;
    
    while(1)
    {
        stack<char> S1;
        std::getline(cin, str);
        
        if(str == ".")
            break;
        
        for(int i = 0; i <= str.length(); i ++)
        {
            if(str[i] == '(' || str[i] == '[')
                S1.push(str[i]);
            else if(str[i] == ')' )
            {
                if(!S1.empty() && S1.top() == '(')
                    S1.pop();
                else
                {
                    S1.push(str[i]);
                    break;
                }
            }
            else if(str[i] == ']' )
            {
                if(!S1.empty() && S1.top() == '[')
                    S1.pop();
                else
                {
                    S1.push(str[i]);
                    break;
                }
            }
            
        }
        
        
        if(S1.empty())
            cout << "yes\n";
        else
            cout << "no\n";
        
    }
}

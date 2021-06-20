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
        stack<char> S2;
        std::getline(cin, str);
        
        for(int i = 0; i < str.length(); i ++)
        {
            if(str[i] == '(')
                S1.push(str[i]);
            else if(str[i] == '[')
                S2.push(str[i]);
        }
        for(int i = 0; i < str.length(); i ++)
        {
            if(str[i] == ')' && !S1.empty())
                S1.pop();
            else if(str[i] == ']' && !S2.empty())
                S2.pop();
        }
        
        
        if(S1.empty() && S2.empty())
            cout << "YES\n";
        else
            cout << "NO\n";
        
        
        
    }
}


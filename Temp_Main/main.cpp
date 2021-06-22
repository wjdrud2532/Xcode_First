#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>

using std::cin;
using std::cout;
using std::ios_base;
using std::stack;
using std::string;
using std::vector;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    stack<int> S;
    //현재 값보다 크고 오른쪽에 가장 가까이 있는 것
    //배열로 하면 훨씬 더 쉬울 것 같다.
    
    cin >> N;
    for(int i = 0; i < N; i ++)
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
        
        
        //d
        //
    }
}


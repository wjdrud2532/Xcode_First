//
//  1874.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/06/22.
//

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
    int arr[100000];
    int arrnum = 0;
    stack<int> result;
    stack<int> num;
    vector<char> V;
    
    int max = 0;
    cin >> N;
    
    for(int i = 0; i < N; i ++)
    {
        cin >> arr[i];
        if(arr[i] > max)
            max = arr[i];
        
    }
    
    for(int i = 1; i <= N; i ++)
    {
        num.push(i);
        V.push_back('+');
        while(!num.empty() && num.top() == arr[arrnum])
        {
            result.push(num.top());
            num.pop();
            V.push_back('-');
            arrnum++;
        }
    }
    
    if(N == arrnum)
        for(int i = 0; i < V.size(); i ++)
            cout << V[i] << "\n";
    else
        cout << "NO\n";
    
}



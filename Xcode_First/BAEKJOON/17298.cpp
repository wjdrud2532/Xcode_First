//
//  17298.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/06/23.
//

#include <iostream>
#include <algorithm>
#include <stack>

using std::cin;
using std::cout;
using std::ios_base;
using std::stack;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    int arr[1000000];
    stack<int> TempStack;
    stack<int> Result;
    
    cin >> N;
    
    for(int i = 0; i < N; i ++)
        cin >> arr[i];
    
    for(int i = N - 1; i >= 0; i --)        //뒤에서부터
    {
        if(TempStack.empty())               //첫 번째의 경우는 무조건 -1
        {
            TempStack.push(arr[i]);
            Result.push(-1);
        }
        else if(arr[i] < TempStack.top())   //오큰수가 바로 붙어있다면 그 수를 스택에 저장
        {
            Result.push(TempStack.top());
            TempStack.push(arr[i]);
        }
        else if(arr[i] >= TempStack.top())      //오큰수가 바로 옆에 없다면
        {                                       //같을 때의 경우도 고려해야 함
            while(arr[i] >= TempStack.top())
            {                                   //오큰수를 찾을 때 까지 TempStack에 있는 값들을 pop 해나감
                TempStack.pop();
                if(TempStack.empty())           //이때 빈 스택이 된다면
                    break;
            }
            if(TempStack.empty())   //현재 입력 받은 값이 가장 큰 값일 경우이므로 -1을 push하고
                Result.push(-1);
            else
                Result.push(TempStack.top());   //오큰수를 찾았다면 그 값을 스택에 push 한다
            
            TempStack.push(arr[i]);
            
        }
    }
    
    while(!Result.empty())      //출력
    {
        cout << Result.top() << " ";
        Result.pop();
    }
    
    
}


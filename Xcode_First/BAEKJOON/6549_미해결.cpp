//
//  6549_미해결.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/07/13.
//https://sexycoder.tistory.com/107         문제 해결 방법 설명
//https://www.acmicpc.net/blog/view/12
//https://www.acmicpc.net/problem/6549      문제 페이지
#include <iostream>
#include <algorithm>
#include <stack>

using std::cin;
using std::cout;
using std::ios_base;
using std::stack;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int N;
    long long temp;
    long long tempSTop;
    long long Width;
    long long area = 0;
    
    
    while(1)
    {
        cin >> N;
        
        if(N == 0)
            break;
        
        stack<long long> S;
        for(int i = 0; i < N; i ++)
        {
            cin >> temp;
            if(S.empty() || S.top() < temp)
                S.push(temp);
            else
            {
                tempSTop = S.top();
                S.pop();
                if(S.empty())
                    Width = temp;
                else
                    Width = temp - S.top();
                
                if(Width * temp > area)
                    area = Width * temp;
                
                S.push(temp);
                
            }
        }
        
        cout << area << "\n";
        
    }
    
    /*
     너비는 항상 1
     모든 높이가 1일 경우 가장 큰 직사각형은 N이 된다.
     
     하나의 직사각형만 보면 높이가 가장 높은 것이 정답이다.
     두개 이상의 직사각형을 볼 때 이전보다 크기가 크거나 같아야 연결된 직사각형을 만들 수 있다.
        높이가 같거나 크다면 합친 직사각형의 넓이를 계산하고 그렇지 않다면 하나의 직사각형만 본다.
            그 하나의 직사각형 조차 이전 가장 큰 값에 비해 작다면 버린다.
     하나의 직사각형과 다음것을 합친 값이
     */
}

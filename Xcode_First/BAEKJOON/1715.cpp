//
//  1715.cpp
//  Xcode_First
//
//  Created by 한정경 on 2023/11/07.
//
/*
 값이 작을 것들끼리 먼저 더해야함
 값이 큰 것들은 가장 나중에 계산해야함
 
 정렬을 통해 가장 작은 것들을 먼저 계산한다.
 
 그러나 계산시마다 매번 정렬하기에는 시간이 너무 오래 걸림
 
 최초 정렬 후, 가장 앞의 두 값을 계산한 뒤
    그 값과 가장 가까우면서 큰 값의 뒤의 값으로 위치를 옮긴다.
 
 우선순위 큐를 사용하여 자동 정렬, 가장 앞의 두 값을 연산하여 다시 push 하는 방식으로 진행
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int N;
int sum = 0;

// 역순으로 우선순위 큐 설정, 작은 것이 가장 앞으로 오도록 함
priority_queue<int, vector<int>, greater<int> > pq;

int main()
{
    cin >> N;
    
    for(int i = 0; i < N; i ++)
    {
        int tempnum;
        cin >> tempnum;
        pq.push(tempnum);
    }
    
    if(pq.size() < 2)
    {
        // N == 1 인 경우 덧셈을 진행하지 않으므로 0이 정답
        cout << "0\n";
        return 0;
    }
    
    while(pq.size() >= 2)
    {
        int tempnum1;
        int tempnum2;
        int tempnum3;
        
        tempnum1 = pq.top();
        pq.pop();
        tempnum2 = pq.top();
        pq.pop();
        
        tempnum3 = tempnum1 + tempnum2;
        pq.push(tempnum3);
        sum += tempnum3;
    }
    
    cout << sum << "\n";
    return 0;
}

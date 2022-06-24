//
//  1021.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/06/28.
//

#include <iostream>
#include <algorithm>
#include <deque>

using std::deque;
using std::cin;
using std::cout;
using std::ios_base;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    deque<int> D1;
    
    int N, M;
    int count1 = 0;
    int temp, tempindex = 0;
    
    cin >> N >> M;
    
    for(int i = 1; i <= N; i ++)
        D1.push_back(i);        //1부터 N까지를 덱에 추가
    
    for(int i = 0; i < M; i ++)
    {
        cin >> temp;            //temp 번째의 인덱스를 빼내는 최소의 경우를 알아내야함
        
        for(int j = 0; j < D1.size(); j ++)
        {
            if(temp == D1[j])       //덱 안에서 temp값을 가지는 인덱스를 tempindex에 저장한다.
            {
                tempindex = j;
                break;
            }
        }
            
        if(tempindex <= D1.size() - tempindex)      //왼쪽과 오른쪽 중 더 작은 경우로 간다.
        {
            while(1)
            {
                if(D1.front()==temp)        //가장 앞이 temp값일 때까지 반복
                    break;
                
                D1.push_back(D1.front());   //아니라면 왼쪽으로 이동한다
                D1.pop_front();
                count1++;
                
            }
            D1.pop_front();
        }
        
        else
        {
            count1++;               //left ＞ right 조건의 경우는 push, pop 횟수보다 이동횟수가 +1이므로 cnt++ 를 한 번 더 해준다.
            while(1)
            {
                if(D1.back()==temp)
                    break;
                
                D1.push_front(D1.back());       //아니라면 오른쪽으로 이동한다.
                D1.pop_back();
                count1++;
                
            }
            D1.pop_back();
            
        }
    }
    
    cout << count1 << "\n";
}


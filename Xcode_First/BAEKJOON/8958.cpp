//
//  8958.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/04/13.
//
#include <iostream>
#include <cstring>
#include <deque>
#include <vector>
#include <queue>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::queue;
using std::ios_base;

void Score(string str);

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    
    int N;
    
    cin >> N;

    string str;
    
    for(int i = 0; i < N; i ++)
    {
        cin >> str;
        Score(str);
    }
    

}

void Score(string str)
{
    int Score = 0, Count = 0;
    
    while(!str.empty())             //문자열이 존재할 때
    {
        if(str.front() == 'O')      //O 라면
        {
            Count ++;               //추가
            Score += Count;
        }
        else
        {
            Count = 0;              //아니면 0으로 초기화
        }
        str.erase(0, 1);            //맨 앞자리 삭제
    }
    
    cout << Score << endl;
}


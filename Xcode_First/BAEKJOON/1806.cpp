//
//  1806.cpp
//  Xcode_First
//
//  Created by 한정경 on 2023/11/02.
//
// 백준 1806, 투 포인터, 골드 4

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, S;
int minValueLength;

vector<int> v;

int main()
{
    cin >> N >> S;
    minValueLength = N + 1;
    
    // input
    for(int i = 0; i < N; i ++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    
    int start, end, sum;
    start = end = 0;
    sum = 0;
    
    while(start <= end)
    {
        if(sum >= S)    // 지정된 값을 넘었다면
        {
            minValueLength = min(minValueLength, end - start);  // 현재값과 새로운 길이를 비교하여 더 작은 것을 선택
            sum -= v[start];    // 앞부분 포인터 이동, 구간 좁아짐
            start ++;
        }
        else if(end == N)
        {
            break;
        }
        else        // 뒷부분을 계속 더하며 뒷부분 포인터 이동
        {
            sum += v[end];      // 뒷부분 포인터 이동
            end ++;
        }
    }
    
    if(minValueLength == N + 1)
    {
        cout << "0\n";
    }
    else
    {
        cout << minValueLength << "\n";
    }
    
}

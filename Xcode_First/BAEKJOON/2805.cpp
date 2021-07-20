//
//  2805.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/07/21.
//
//1654랑 거의 같은 코드

#include <iostream>
#include <algorithm>
#include <vector>

using std::cin;
using std::cout;
using std::ios_base;

int N, M;
int arr[1000000];

long long BinarySearch(long long start, long long end)
{
    long long mid;
    while(start <= end)
    {
        mid = (start + end) / 2;
        long long count = 0;
        for(int i = 0; i < N; i ++)
        {
            if(arr[i] - mid > 0)
                count += arr[i] - mid;
            
            if (count > M)
            {
                start = mid + 1;
                break;
            }
        }
        if(count == M)
        {
            return mid;
        }
        else if (count < M)
            end = mid - 1;
        
    }
    
    return end;
}

int main()
{
    int max1 = -1;
    
    cin >> N >> M;
    
    for(int i = 0; i < N; i ++)
    {
        cin >> arr[i];
        if(arr[i] > max1)
            max1 = arr[i];
    }
    
    cout << BinarySearch(0, max1) << "\n";
    //이것도 시작을 0으로 해야한다.
}

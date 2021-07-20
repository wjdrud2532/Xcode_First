//
//  1654.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/07/21.
//

#include <iostream>
#include <algorithm>
#include <vector>

using std::cin;
using std::cout;
using std::ios_base;
using std::vector;

int K, N;
int arr[10000];

void BinarySearch(long long start, long long end)
{
    while(start <= end)
    {
        long long mid = (start + end) / 2;
        int count = 0;
        for (int i = 0; i < K; i++)
            count += arr[i] / mid;
        
        if (count < N)
            end = mid - 1;
        else
            start = mid + 1;
    }
    cout << end << "\n";
    return ;
    
    
    
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    
    long long min1 = 2147483647, max1 = -1;
    cin >> K >> N;
    for(int i = 0; i < K; i ++)
    {
        cin >> arr[i];
        
        if(arr[i] > max1)
            max1 = arr[i];
        if(arr[i] < min1)
            min1 = arr[i];
    }
    
    BinarySearch(1, max1);
    //1부터 시작해야 한다. 왜?
    
    
}

//
//  11399.cpp
//  Temp_Main
//
//  Created by 한정경 on 2021/06/08.
//

#include <iostream>
#include <algorithm>
#include <vector>

using std::cin;
using std::cout;
using std::ios_base;
using std::pair;


int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    int arr[1000];
    
    cin >> N;
    for(int i = 0; i < N; i ++)
        cin >> arr[i];
    
    std::sort(arr, arr + N);
    
    int temp = 0;
    int min = 0;
    for(int i = 0; i < N; i ++)
    {
        temp += arr[i];
        min += temp;
    }
    
    cout << min << "\n";
}





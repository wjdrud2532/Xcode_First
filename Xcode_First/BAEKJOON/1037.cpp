//
//  1037.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/06/10.
//

#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::ios_base;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    int arr[50];
    long long Realnum;
    int max = 0;
    int min = 1000001;
    cin >> N;
    
    for(int i = 0; i < N; i ++)
    {
        cin >> arr[i];
        
        if(arr[i] > max)
            max = arr[i];
        
        if(arr[i] < min)
            min = arr[i];
    }
    
    
    Realnum = max * min;
    
    cout << Realnum << "\n";
    
    return 0;
}






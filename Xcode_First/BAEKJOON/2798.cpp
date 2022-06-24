//
//  2798.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/05/01.
//

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int N, M;
    int Max = 0;
    
    cin >> N >> M;
    
    int * arr = new int[N];
    
    for(int i = 0; i < N; i ++)
        cin >> arr[i];
    
    for(int i = 0; i < N - 2; i ++)
    {
        for(int j = i + 1; j < N - 1; j ++)
        {
            for(int k = j + 1; k < N; k ++)
            {
                if(arr[i] + arr[j] + arr[k] <= M)
                    if(arr[i] + arr[j] + arr[k] > Max)
                        Max = arr[i] + arr[j] + arr[k];
            }
        }
        if(Max == M)
            break;
    }
    
    cout << Max;
    
}

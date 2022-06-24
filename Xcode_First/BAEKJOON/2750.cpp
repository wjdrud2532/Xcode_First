//
//  2750.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/05/05.
//

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int N;
    
    cin >> N;
    
    int * arr = new int[N];
    
    for(int i = 0; i < N; i ++)
        cin >> arr[i];
    
    for(int i = 0; i < N - 1; i ++)
    {
        for(int j = i; j < N; j ++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        
        
    }
    
    for(int i = 0; i < N; i ++)
        cout << arr[i] << endl;
}


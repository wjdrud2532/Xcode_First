//
//  10989.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/05/05.
//

#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::ios_base;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    cin >> N;

    int arr[10001] = {0 ,};

    for(int i = 0; i < N; i ++)
    {
        int temp;
        cin >> temp;
        arr[temp] ++;
    }

    for(int i = 1; i < 10001; i ++)
    {
        if(arr[i] != 0)
            for(int j = 0; j < arr[i]; j ++)
                cout << i << "\n";
    }
    
}


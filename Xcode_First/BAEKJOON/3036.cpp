//
//  3036.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/06/16.
//

#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::ios_base;

int Euclid(int a, int b)
{
    if(b == 0)
        return a;
    return Euclid(b, a % b);
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    int arr[100];
    
    cin >> N;
    cin >> arr[0];
    int divide;
    
    for(int i = 1; i < N; i ++)
    {
        cin >> arr[i];
        
        divide = Euclid(arr[i], arr[0]);
        cout << arr[0] / divide << "/" << arr[i] / divide << "\n";
    }
    
}






//
//  3009.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/04/29.
//

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    
    int arr[3][2];
    
    for(int i = 0; i < 3; i ++)
    {
        cin >> arr[i][0] >> arr[i][1];
    }
    
    if(arr[0][0] == arr[1][0])
        arr[0][0] = arr[1][0] = -1;
    
    if(arr[1][0] == arr[2][0])
        arr[1][0] = arr[2][0] = -1;
    
    if(arr[0][0] == arr[2][0])
        arr[0][0] = arr[2][0] = -1;
    
    if(arr[0][1] == arr[1][1])
        arr[0][1] = arr[1][1] = -1;
    
    if(arr[1][1] == arr[2][1])
        arr[1][1] = arr[2][1] = -1;
    
    if(arr[0][1] == arr[2][1])
        arr[0][1] = arr[2][1] = -1;
    
    for(int i = 0; i < 3; i ++)
    {
        if(arr[i][0] != -1)
            cout << arr[i][0] << " ";
        
    }
    
    for(int i = 0; i < 3; i ++)
    {
        if(arr[i][1] != -1)
            cout << arr[i][1];
    }
    
}


/*
 #include <cstdio>

 int main() {
     int x = 0, y = 0;
     for (int a, b, t = 3; t--; x ^= a, y ^= b)
         scanf("%d%d", &a, &b);
     printf("%d %d", x, y);
     return 0;
 }
 */

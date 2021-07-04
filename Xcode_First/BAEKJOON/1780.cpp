//
//  1780.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/07/05.
//

#include <iostream>
#include <algorithm>
#include <cstring>

using std::cin;
using std::cout;
using std::ios_base;

int arr[2187][2187];
int ZeroCount = 0, OneCount = 0, MinusCount = 0;

void NineEquals(int x, int y, int N)
{
    int tempOneCount = 0, tempZeroCount = 0;
    
    for(int i = x; i < x + N; i ++)
        for(int j = y; j < y + N; j ++)
            if(arr[i][j] == 1)
                tempOneCount ++;
            else if(arr[i][j] == 0)
                tempZeroCount ++;
            
    if(tempOneCount == N * N)
        OneCount ++;
    else if(tempZeroCount == N * N)
        ZeroCount ++;
    else if(tempZeroCount == 0 && tempOneCount == 0)
        MinusCount ++;
    else                //9등분
    {
        int A = N / 3;
        int B = A * 2;
        NineEquals(x, y, A);
        NineEquals(x, y + A, A);
        NineEquals(x, y + B, A);
        
        NineEquals(x + A, y, A);
        NineEquals(x + A, y + A, A);
        NineEquals(x + A, y + B, A);
        
        NineEquals(x + B, y, A);
        NineEquals(x + B, y + A, A);
        NineEquals(x + B, y + B, A);
       
        //9일 때 0 3 6
        //27일 때 0 9 18
    }
}


int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int N;
    cin >> N;
    
    for(int i = 0; i < N; i ++)
        for(int j = 0; j < N; j ++)
            cin >> arr[i][j];
    
    NineEquals(0, 0, N);
    
    cout << MinusCount << "\n" << ZeroCount << "\n" << OneCount << "\n";
}

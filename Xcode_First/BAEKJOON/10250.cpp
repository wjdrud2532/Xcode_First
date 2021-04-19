//
//  10250.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/04/19.
//

#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout.tie(nullptr);
    cin.tie(nullptr);
    int T;
    int H, W, N;
    int X, Y;
    
    cin >> T;
    
    for(int i = 0; i < T; i ++)
    {
    
    cin >> H >> W >> N;
    
    X = (N / H) + 1;
    Y = N - (N / H) * H;
    
    if(N % H == 0)
    {
        X--;
        Y = H;
    }

    if(Y == 0)
        Y ++;
    
    //(n-1)%h+1, (n-1)/h +1 의 식으로 대체 가능
    cout << Y << std::setfill('0') << std::setw(2) << X << endl;
    }
}

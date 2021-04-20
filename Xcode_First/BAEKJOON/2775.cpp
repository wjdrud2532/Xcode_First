//
//  2775.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/04/20.
//

#include <iostream>
#include <time.h>

using std::cin;
using std::cout;
using std::endl;

int GetNumber(int a, int b)
{
    if(b == 1)
        return 1;       //1호일 경우
    if(a == 0)
        return b;       //0층일 경우
    
    return (GetNumber(a - 1, b) + GetNumber(a, b - 1));
}

int main()
{
    int T, K, N;
    
    cin >> T;
    
    for(int i = 0; i < T; i ++)
    {
        cin >> K >> N;
        cout << GetNumber(K, N) << endl;
    }
}

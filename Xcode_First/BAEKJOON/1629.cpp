//
//  1629.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/07/05.
//
//  분할정복 알고리즘을 사용한 곱셈문제
#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::ios_base;

long long pow(int x, int y, int c)
{
    if(y == 1)
        return x;
    else
    {
        long long temp = pow(x, y / 2, c);     //곱하려는 값을 둘로 나눈다. 이것을 y가 1일 때 까지 반복한다.
        
        if(y % 2)                               // 홀수 / 2하면 1이 남으므로 홀수일 경우 곱셈을 한번 더 진행한다.
            return ((temp*temp) % c * x) % c;       //값이 커질 수 있으므로 계속해서 % c를 한다.
        else
            return (temp*temp) % c;
    }
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int A, B, C;
    
    cin >> A >> B >> C;
    
    
    cout << pow(A % C, B, C) << "\n";
    // 큰 값이 들어갈 경우를 고려하여 A에 % C를 한다.(안해도 작은 경우의 수는 빠르게 나온다.)
    
}

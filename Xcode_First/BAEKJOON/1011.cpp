//
//  1011.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/04/23.
//16ms
#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

#define Squared(x) ((x) * (x))

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    
    int N, x, y;
    cin >> N;
    
    for(int i = 0; i < N; i ++)
    {
        int YminusX = 0, Number = 0, Count = 0;
        cin >> x >> y;
        YminusX = y - x;
        
        if(YminusX <= 3)                //3이하면 그대로 출력
            cout << YminusX << endl;
        else
        {
            for(int j = 1; ; j ++)      //3이상일 경우
            {
                if(std::sqrt(YminusX) < j)  //y - x의 제곱근보다 큰 j를 찾는다.
                {
                    Number = j - 1;         // Number의 제곱 <= y - x Number + 1의 제곱
                    break;
                }
            }
            
            if(Squared(Number) == YminusX)  //y - x가 자연수의 제곱일 경우 개수는 항상 홀수
            {
                Count = (Number - 1) * 2 + 1;   // 앞 뒤가 대칭이고 가운데 Number의 제곱수
            }
            else
            {
                Count = ((Number - 1) * 2) + 1 +  ((((YminusX - 1) % Squared(Number))  / Number) + 1);
                //처음 if문의 조건에서부터 Number 의 범위만큼 값이 커질때마다 자리수가 1씩 늘어남
            }
            
            
            cout <<  Count << endl;
       
        }
    }
}

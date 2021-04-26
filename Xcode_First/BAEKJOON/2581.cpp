//
//  2581.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/04/26.
//

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::sqrt;

int main()
{
    int M, N;
    bool IsPrimeNumber = true;
    bool FirstPrimeNumber = false;
    int PrimeNumberSum = 0;
    int MostSmallPrimeNumber = 0;
    
    cin >> M >> N;
    
    for(int i = M; i <= N; i ++)
    {
        if(i <= 1)                      //1로 시작할 경우 1을 제외하기 위함
            IsPrimeNumber = false;
        
        for(int j = 2; j <= sqrt(i); j ++)      //소수 판별
        {
            if(i <= 1 || i % j == 0)  //소수가 아님
            {
                IsPrimeNumber = false;      //소수가 아니면 false로 바꾸고 반복문 중지
                break;
            }
        }
        
        
        
        if(IsPrimeNumber == true)
        {
            PrimeNumberSum += i;            //소수라면 합한다.
            
            if(FirstPrimeNumber == false)   //첫 소수가 입력되지 않았다면
            {
                MostSmallPrimeNumber = i;   //추가
                FirstPrimeNumber = true;
            }
        }
        else
            IsPrimeNumber = true;           //다시 ture로 초기화
        
        
    }
    if(PrimeNumberSum == 0)
        cout << "-1" << endl;
    else
        cout << PrimeNumberSum << "\n" << MostSmallPrimeNumber << endl;
    
}

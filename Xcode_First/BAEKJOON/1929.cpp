//
//  1929.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/04/27.
//

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    
    int M, N;
    bool * PrimeNumber;
    
    cin >> M >> N;
    
    PrimeNumber = new bool[N + 1];              //동적 배열 할당
    
    std::fill_n(PrimeNumber, N + 1, true);      //모든 공간을 true로 설정
    PrimeNumber[0] = PrimeNumber[1] = false;    //0 1은 소수가 아니므로
    
    for(int i = 2; i <= std::sqrt(N); i ++)     //소수 판별
    {
        if(PrimeNumber[i] == true)              //소수면
            for(int j = i * 2; j <= N; j += i)  //그 수의 배수는 모두 소수가 아니다.
                PrimeNumber[j] = false;
    }
    
    for(int i = M; i <= N; i ++)
    {
        if(PrimeNumber[i] == true)
            printf("%d\n", i);                  //printf와 cout의 시간차이가 어마어마하다
            //cout << i << endl;
    }
    
    return 0;
}

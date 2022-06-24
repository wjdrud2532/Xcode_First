//
//  9020.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/04/29.
//

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::sqrt;
using std::ios_base;
                                //N을 입력 받을 때마다 하던 에라토스테네스의 체를 처음 한번만 진행하도록함. 시간초과 해결됨

bool IsPrimeNumber(int Num)
{
    if(Num == 1)
        return false;
    
    else
        for(int i = 2; i <= sqrt(Num); i ++)
        {
            if(Num % i == 0)
                return false;
        }
    
    return true;
}

int main()
{
    cout.tie(NULL);
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int N, Max = 0;
    
    cin >> N;
    
    int * Narr = new int[N];
    
    for(int i = 0; i < N; i ++)
    {
        cin >> Narr[i];
        if(Narr[i] > Max)
            Max = Narr[i];
    }
    
    bool * IsPrimeNum = new bool[Max];
    
    std::fill_n(IsPrimeNum, Max, true);
    IsPrimeNum[0] = IsPrimeNum[1] = false;
    
    for(int i = 2; i < Max; i ++)
    {
        if(IsPrimeNumber(i) == false)
            IsPrimeNum[i] = false;
    }                                           //소수 판별 완료
    
    
    for(int i = 0; i < N; i ++)
    {
        int EvenNumber;
        int Pnum1 = 0, Pnum2 = 0;
        int PMiunsP = 10001;
        EvenNumber = Narr[i];
        
        for(int j = 2; j < EvenNumber; j ++)    //j는 첫 번째 소수
        {
            if(IsPrimeNum[j] == true)        //j가 소수일 때
            {
                if(IsPrimeNum[EvenNumber - j] == true)   //EvenNumber - j 는 두 번째 소수
                {
                    
                    if((EvenNumber - j) - j < PMiunsP && (EvenNumber - j) - j >= 0)      //큰 소수 - 작은 소수
                    {
                        Pnum2 = EvenNumber - j;
                        Pnum1 = j;
                        PMiunsP = Pnum2 - Pnum1;
                    }
                    
                }
            }
        }
        cout << Pnum1 << " " << Pnum2 << "\n";
    }
    
    
    
    return 0;
}

/*      이 방법으로 더 간략하게 가능하다
 for(int t = 0; t < num; t++)
     {
         for(int j = even[t]/2; j > 0; j--)
         {
             if(prime[j] && prime[even[t]-j])
             {
                 cout << j << ' ' << even[t]-j << '\n';
                 break;
             }
         }
     }
 */

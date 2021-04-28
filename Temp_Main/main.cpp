#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    
    int N;
    
    
        while (1)
        {
            cin >> N;
            
            if(!N)
                break;
            
            bool * PrimeNumber = nullptr;
            int Count = 0;
            int Max = N * 2 + 1;
            PrimeNumber = new bool(Max);
            std::fill_n(PrimeNumber, Max, true);
            PrimeNumber[0] = PrimeNumber[1] = false;
            
            for(int i = 2; i <= std::sqrt(Max - 1); i ++)
            {
                if(PrimeNumber[i] == true)
                    for(int j = i * 2; j <= Max - 1; j += i )
                PrimeNumber[j] = false;
            }
            
            for(int i = N + 1; i <= Max - 1; i ++)
            if(PrimeNumber[i] == true)
                Count ++;
            
            cout << Count << endl;
            delete PrimeNumber;
            
        }
    
    //cout << stderr << endl;
    //ㅠㅕㅛ효ㅕ
    return 0;
    
}

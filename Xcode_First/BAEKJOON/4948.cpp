//
//  4948.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/06/07.
//

#include <iostream>
#include <algorithm>
#include <cmath>


using std::cin;
using std::cout;
using std::ios_base;
using std::max;

int main() {
    
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    int arr[246913] = {0,0,1,2,2,3,3,4,4,4,4  };    //이전까지의 소수 개수의 합
                //     0 1 2 3 4 5 6 7 8 9 10
   
    
    for(int i = 10; i <= 246912; i ++)
    {
        bool IsPrime = true;
        for(int j = 2; j <= std::sqrt(i); j ++)
        {
            if(i % j == 0)  //소수가 아닐 경우
            {
                IsPrime = false;
                //cout << i << " is not Prime Number \n";
                break;
            }
        }
        
        if(IsPrime)
            arr[i] = arr[i - 1] + 1;
        else
            arr[i] = arr[i - 1];
    }
    
    while(1)
    {
        cin >> N;
        
        if(N == 0)
            break;

        cout << arr[N*2] - arr[N] << "\n";
    }
    
    return 0;
}

/*
 
 #include <cstring>
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
             //free(PrimeNumber);
         }
     
     //cout << stderr << endl;
     
     return 0;
     
 }



 */

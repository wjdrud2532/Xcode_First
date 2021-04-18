//
//  1193.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/04/17.
//

//1 2 3 4 5
//1 3 6 10 15

// 1/1 -> 1/2 -> 3/1 -> 1/4
//짝수일 때 1/? 로 시작
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int X;
    bool IsEven;
    cin >> X;
    
//------------------------------------------------------------------------
    
    int Sum = 0;
    int i = 1;
    int temp = 0;
    while(1)
    {
        if(X <= Sum)
        {
            i --;
            break;
        }
        else
        {
            temp = Sum;
            Sum = Sum + i;
            i ++;
        }
    }
    /*
     int N, i, A, B;
     while (N - i > 0)
         {
             N -= i;
             i++;
         }

         A = N;    B = i - N + 1;
     로 가능
     */
//------------------------------------------------------------------------
    
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
    if(i % 2 == 0)
        IsEven = true;
    else
        IsEven = false;
    
  //  cout << Sum << " " << i << " " << temp << " " << X - temp << endl;
        //   총합       a/b일 때 a+b     이전 총합          몇 번째인지
    
    if(IsEven == false)  // ?/1로 시작
    {
        cout << i + 1 - (X - temp) << "/" << X - temp << endl;
    }
    else                // 1/?로 시작
    {
        cout << X - temp << "/" << i + 1 - (X - temp) << endl;
    }
    /*
     if( i % 2 )
        std::swap(A, B); 로 가능       #include<algorithm> 사용해야함
     */
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

}

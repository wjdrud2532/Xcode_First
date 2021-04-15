#include <iostream>

using std::cout;
using std::cin;
using std::endl;

//-----------------------------문제풀이는 맞으나 더 깔끔하게 할 수 있다
/*
bool HanNumber(int Num)
{
    int NowNumber;
    bool Ishan;
    NowNumber = Num % 10;
    Num /= 10;
    //cout << NowNumber << " " << Num << " dd \n" ;
    for (int i = -4; i <= 4; i ++)
    {
        if (NowNumber + i == Num % 10)
            while (Num >= 10)
            {
                cout << i << " NowNumber = " << NowNumber << "  Num % 10 = " << Num % 10 << " " << endl;
                if (NowNumber + i != Num % 10)
                    Ishan = false;
                NowNumber = Num % 10;
                Num /= 10;
            }
    }
    
    return true;
}
*/
bool HanNumber(int Num)
{
    int Number[4];  //a는 최대 1000, 4자리
    int NumberCount = 0;
    int temp = Num;
    
    for (int i = 0; Num > 0; i ++)
    {
        Number[i] = Num % 10;
        Num /= 10;
        NumberCount ++;
    }

            if(Number[0] - Number[1] == Number[1] - Number[2])
            {
               // cout << Number[2] << " " << Number[1] << " " << Number[0] << " -- Num : " << temp << endl;
                return true;
                
            
    }
    
    return 0;
}

int main()
{
    int N;
    int count = 0;
    
    cin >> N;

    if (N < 100)
        count = N;
    else
    {
        if (N == 1000)
            N = 999;
        for (int i = 100; i <= N; i ++)
            {
                if(HanNumber(i) == true)
                    count ++;
            }
        count += 99;
    }
    
    cout << count << endl;
    
    
}

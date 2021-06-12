#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::ios_base;

int Euclid(int N1, int N2)
{
    int temp;
    //a
    while(1)
    {
        temp = N2 % N1;
        
        if(temp == 0)
            return N1;
        
        N2 = N1;
        N1 = temp;
    }
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    int T[1000];
    
    cin >> N;
    int N1, N2;       // 항상 N1 < N2
    for(int i = 0; i < N; i ++)
    {
        cin >> N1 >> N2;
        
        T[i] =  (N1 * N2) / Euclid(N1, N2);
    }
    
    for(int i = 0; i < N; i ++)
        cout << T[i] << "\n";
    
}






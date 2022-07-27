#include <iostream>

using std::cin;
using std::cout;
using std::ios_base;

void Star(int i, int j, int N)
{
    if((i / N) % 3 == 1 && (j / N) % 3 == 1)
        cout << " ";
    
    else
    {
        if(N < 3)
            cout << "*";
        else
            Star(i, j, N / 3);
    }

    return;
}


int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    
    for(int i = 0; i < N; i ++)
    {
        for(int j = 0; j < N; j ++)
            Star(i, j, N);
        cout << "\n";
    }
    
    return 0;
}

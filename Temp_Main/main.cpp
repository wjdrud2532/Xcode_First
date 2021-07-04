#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::ios_base;

long long pow(int x, int y, int c)
{
    if(y == 1)
        return x;
    else
    {
        long long temp = pow(x, y / 2, c);
        
        if(y % 2)
            return ((temp*temp) % c * x) % c;
        else
            return (temp*temp) % c;
    }
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int A, B, C;
    
    cin >> A >> B >> C;
    
    
    cout << pow(A % C, B, C) << "\n";
    
}

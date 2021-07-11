#include <iostream>
#include <algorithm>
#include <vector>

using std::cin;
using std::cout;
using std::ios_base;
using std::vector;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    long long N;
    long long temp = 0;
    vector<long long> V;
    cin >> N;
    
    V.push_back(0);
    V.push_back(1);
    V.push_back(1);
    if(N < 2)
        cout << V[N];
    else
    {
        long long temp1;
        long long temp2;
        while(temp != N)
        {
            temp1 = V[V.size() - 1] % 1000000007;
            temp2 = V[V.size() - 2] % 1000000007;
            //cout << temp1 << " " << temp2 << "\n";
            V.push_back( (temp1 + temp2) % 1000000007);
            temp ++;
        }
        cout << V[N] << "\n";
    }
    
    /*
     Fn = Fn-1 + Fn-2
          Fn-1 = Fn-2 + Fn-3
                 Fn-2 = Fn-3 + Fn-4
     1,000,000,000,000,000,000
     999999999999999999
     */
    
}

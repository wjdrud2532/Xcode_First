#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::ios_base;
using std::sort;
using std::greater;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

    int N;
    
    cin >> N;
    
    int arr[10001] = {0 ,}, temp;
    
    for(int i = 0; i < N; i ++)
    {
        cin >> temp;
        arr[temp] ++;
    }
    
    for(int i = 1; i < 10001; i ++)
    {
        if(arr[i] != 0)
            for(int j = 0; j < arr[i]; j ++)
                cout << i << "\n";
    }

   return 0;
}


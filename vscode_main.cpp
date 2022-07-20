#include <iostream>

using std::cin;
using std::cout;
using std::ios_base;
using std::endl;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

    int N;
    
    cin >> N;
    
    int * arr = new int[N];
    
    for(int i = 0; i < N; i ++)
        cin >> arr[i];
    
    for(int i = 0; i < N - 1; i ++)
    {
        for(int j = i; j < N; j ++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        
        
    }
    
    for(int i = 0; i < N; i ++)
        cout << arr[i] << endl;
}


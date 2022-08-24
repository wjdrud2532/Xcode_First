#include <iostream>

using std::cin;
using std::cout;

int N;
long long arr[101] = {0, 1, 1, 1, 2, 2, };
int count = 5;


void triangle()
{
        for(int i = 5; i <= 100; i ++)
        {
            arr[i] = arr[i - 1] + arr[i - 5];
        }
    
}

int main()
{
    int num = 0;
    
    cin >> num;
    
    triangle();
    
    for(int i = 0; i < num; i ++)
    {
        cin >> N;
        
        cout << arr[N] << "\n";
    }
}

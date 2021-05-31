#include <iostream>
#include <algorithm>
#include <cmath>

using std::cin;
using std::cout;

int main() {
    
    int N;
    int max = 0;
    
    cin >> N;
    
    int arr[1001];
    int dp[1001];
    
    for(int i = 1; i <= N; i ++)
    {
        cin >> arr[i];
        dp[i] = 1;
    }
    
    for(int i = 2; i <= N; i ++)
    {
        for(int j = i; j > 0; j --)
        {
            if(arr[i - 1] < arr[i])
            {
                
            }
        }
    }
    
}

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using std::cin;
using std::cout;
using std::ios_base;
using std::vector;

int Euclid(int a, int b)
{
    int r = a % b;
    
    if (r == 0)
        return b;
    else
        return Euclid(b, r);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    int arr[100];
    vector<int> V;

    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> arr[i];

    std::sort(arr, arr + N);


    
    return 0;
}






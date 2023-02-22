#include <iostream>
#include <algorithm>
#include <type_traits>

using namespace std;

int N, result = 0;
long int arr[2001];

bool TwoPointer(long int num, int current)
{
    int start = 0, end = N - 1, sum = 0, cnt = 0;

    if(start == current)
        start ++;

    if(end == current)
        end --;

    while(start < end)
    {
        sum = arr[start] + arr[end];

        if(sum == num)
            return true;

        else if(sum < num)
            start ++;

        else
            end --;

        if(start == current)
            start ++;

        if(end == current)
            end --;

    }

    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    for(int i = 0; i < N; i ++)
        cin >> arr[i];

    sort(arr, arr + N);

    for(int i = 0; i < N; i ++)
    {
        if(TwoPointer(arr[i], i))
            result ++;
    }

    cout << result << "\n";

    return 0;
}




#include<iostream>
#include <cmath>

using namespace std;


int arr[1000000] = { 0, };
int maxvalue = -2001;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    cin >> arr[0];
    int maxvalue = arr[0];
    int temp;
    for (int i = 1; i < n; i++)
    {
        cin >> temp;

        arr[i] = max(arr[i - 1] + temp, temp);

        if (arr[i] > maxvalue)
            maxvalue = arr[i];

    }

    cout << maxvalue << "\n";

    return 0;
}


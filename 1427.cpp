#include <iostream>
#include <cstring>
#include <algorithm>

using std::cin;
using std::cout;
using std::ios_base;
using std::string;
using std::sort;
using std::greater;

void swap(int a, int b)
{

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string N;
    int arr[10] = {0, };

    cin >> N;

    for(int i = 0; i < N.size(); i ++)
    {
        arr[i] = N[i] - '0';
    }

    sort(arr, arr + N.size(), greater<int>());

    for(int i = 0; i < N.size(); i ++)
    {
        cout << arr[i];
    }
    cout << "\n";

    return 0;
}

#include <iostream>
#include <cstring>
#include <algorithm>

using std::cin;
using std::cout;
using std::greater;
using std::ios_base;
using std::sort;
using std::string;

string N;
int arr[10] = {
    0,
};

void sortnum(string str)
{
    for (int i = 0; i < N.size(); i++)
    {
        arr[i] = N[i] - '0';
    }

    sort(arr, arr + N.size(), greater<int>());

    for (int i = 0; i < N.size(); i++)
    {
        cout << arr[i];
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    sortnum(N);

    return 0;
}

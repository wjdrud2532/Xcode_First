#include <iostream>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::ios_base;

using std::vector;
using std::sort;
using std::find;

int N, M, temp;
vector <int> arrN, arrM;

int BinarySearch(int num)
{
    int left = 0, right = N - 1, mid;

    while (left <= right)
    {
        mid = (left + right) / 2;

        if (arrN[mid] == num)
        {
            return 1;
        }
        else if (arrN[mid] > num)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

     cin >> N;
    
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        arrN.push_back(temp);
    }

    sort(arrN.begin(), arrN.end());

    cin >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> temp;
        cout << BinarySearch(temp) << " ";
    }

    return 0;
}
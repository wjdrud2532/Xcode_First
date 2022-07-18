#include <iostream>

using std::cin;
using std::cout;
using std::ios_base;

void sort()
{
    int N, arr[50][3];
    int weight, height;

    cin >> N;

    for(int i = 0; i < N; i ++)
    {
        cin >> weight >> height;

        arr[i][0] = weight;
        arr[i][1] = height;
        arr[i][2] = 1;

        for(int j = 0; j < i; j ++)
        {
            if(arr[j][0] > arr[i][0] && arr[j][1] > arr[i][1])
                arr[i][2] += 1;
            else if(arr[j][0] < arr[i][0] && arr[j][1] < arr[i][1])
                arr[j][2] += 1;
        }
    }

    for(int i = 0; i < N; i ++)
    {
        cout << arr[i][2] << " ";
    }

    return;
}

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    sort();

    return 0;
}
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

    int temp = 0;

    if (N > 2)
    {
        temp = Euclid(arr[1] - arr[0], arr[2] - arr[1]);
        cout << temp << "    <-  temp\n";


        for (int i = 1; i < N - 2; i++)
            temp = Euclid(temp, Euclid(arr[i + 2] - arr[i + 1], arr[i + 1] - arr[i]));    //��� ������ �ִ� �����

        cout << temp << "    <-  temp\n";

        for (int i = 2; i <= temp; i++)
        {
            if (temp % i == 0)
                V.push_back(i);             //�ִ� ������� ���
        }

        //�ִ� ������� ��� �߿��� �������� ��ġ�ϴ� ���� ã�´�.

        for (int i = 0; i < V.size(); i++)
        {
            for (int j = N - 1; j > 0; j--)
            {
                if (arr[j] - arr[j - 1] != V[i] * (arr[j] / V[i] - arr[j - 1] / V[i]))
                {
                    V.erase(V.begin() + i);
                    i--;
                    break;
                }
            }
        }
    }
    else
    {
        //2���� ��� ū�� �� �������� ���
        int max = arr[N - 1] - arr[0];

        for (int i = 2; i <= max / 2; i++)
        {
            if (max % i == 0)
            {
                V.push_back(i);
            }
        }
        V.push_back(max);
    }


    for (int i = 0; i < V.size(); i++)
        cout << V[i] << " ";

}






#include <iostream>
#include <algorithm>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::floor;
using std::ios_base;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;

    cin >> N;

    int cnt[8001] = {0, };

    double Sum = 0;
    int average = 0, temp = 0, flag = 0, max = -5000, min = 5000, mid = -5000, range, count = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        Sum += temp;

        if (cnt[temp + 4000] == 0)
            count++;

        cnt[temp + 4000]++;

        if (temp > max)
            max = temp;

        if (temp < min)
            min = temp;
    }

    range = max - min;
    average = std::round(Sum / N);


    flag = 0;
    max = 0;

    for (int i = 0; i < 8001; i++)
    {
        if (cnt[i] > max)
        {
            max = cnt[i];
            flag = i;
        }
    }

    for (int i = flag + 1; i < 8001; i++)
    {
        if (cnt[i] == max)
        {
            flag = i;
            break;
        }
    }

    count = 0;
    for (int i = 0; i < 8001; i++)
    {
        count += cnt[i];

        if (count >= (N + 1) / 2)
        {
            mid = i - 4000;
            break;
        }
    }
       



    cout << average << "\n";     //»ê¼úÆò±Õ
    cout << mid << "\n";         //Áß¾Ó°ª
    cout << flag - 4000 << "\n"; //ÃÖºó°ª
    cout << range << "\n";   //¹üÀ§
}

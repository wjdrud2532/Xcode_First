#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::ios_base;

int Euclid(int a, int b) {

    int r = a % b;

    if (r == 0)
        return b;
    else
        Euclid(b, r);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, firstRing, temp, euNum;

    cin >> N >> firstRing;

    for (int i = 0; i < N - 1; i++)
    {
        cin >> temp;
        euNum = Euclid(firstRing, temp);

        //cout << "최대 공약수는 > " << euNum << "\n";
        cout << firstRing / euNum << "/" << temp / euNum << "\n";
    }
    return 0;
}






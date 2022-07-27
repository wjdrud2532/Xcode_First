#include <iostream>

using std::cin;
using std::cout;

bool IsSelfNumber[10000] = { false, };

void FindSelfNumber(int num)
{
    int j;
    for (int sum = num; sum <= 10000;)
    {
        for (j = num; j > 0; j /= 10)
            sum += (j % 10);

        if ((IsSelfNumber[sum] == false) && (sum < 10000))
        {
            IsSelfNumber[sum] = true;
            num = sum;
        }
        else
            return;
    }
}

int main()
{

    for (int i = 1; i <= sizeof(IsSelfNumber); i++)
        if (IsSelfNumber[i] == false)
            FindSelfNumber(i);

    for (int i = 1; i < sizeof(IsSelfNumber); i++)
        if (IsSelfNumber[i] == false)
            cout << i << "\n";
}
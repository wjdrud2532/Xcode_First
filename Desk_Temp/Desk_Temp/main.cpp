#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::ios_base;
using std::strlen;
using std::strcpy;

void divided(char* n, char* m, char* result)
{
    int tempn = strlen(n);
    int tempm = strlen(m);

    //�� �� m�� �� �ڸ����� �����״� m�� �ڸ�����ŭ ����Ѵ�.
    for (int i = tempn, j = tempm; j >= 0; i--, j--)
    {
        n[i] = n[i] - m[i] + '0';

        if (n[i] <'0')    //���� �����;� �� ���
        {
            n[i - 1] --;
            n[i] += 10;
        }
    }

        
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    /*
    aesfeasfewafawefw
    */
    return 0;
}
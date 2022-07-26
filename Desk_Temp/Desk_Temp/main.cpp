#include <iostream>
#include <algorithm>
#include <cstring>

using std::cin;
using std::cout;
using std::ios_base;

using std::sort;
using std::string;
using std::strncpy;

int N;
string arrstr[20001];

int CompareAlpa(const string& a, const string& b)
{
    if (a.size() == b.size())
    {
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] != b[i])
                return a[i] < b[i]; // 1이면 a가 먼저 출력
        }
    }
}

bool CompareLength(const string& a, const string& b)
{
    if (a.size() < b.size()) // a가 더 짧을 경우 먼저 출력
    {
        return true;
    }
    else
    {
        return false;
    }
}

void sortWord(int N)
{
    for (int i = 0; i < N; i++)
    {
        cin >> arrstr[i];
    }

    sort(arrstr, arrstr + N, CompareAlpa);
    sort(arrstr, arrstr + N, CompareLength);

    bool temp = false;

    for (int i = 0; i < N - 1; i++)
    {
        if (arrstr[i].size() == arrstr[i + 1].size())
        {
            for (int j = 0; j < arrstr[i].size(); j++)
            {
                if (arrstr[i][j] != arrstr[i + 1][j])
                {
                    temp = true;
                    break;
                }
            }
            if (temp == true)
            {
                i++;
                temp == false;
            }
        }
        cout << arrstr[i] << "\n";
    }

    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    cout << "          \n";
    sortWord(N);

    sort(arrstr, arrstr + N, CompareLength);

    return 0;
}

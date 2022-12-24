#include <iostream>
#include <cstring>
#include <bitset>

using namespace std;

int N, K;
int bit = 0;
int arr = 0;
bool alpa[26] = {0, };
int alpasize = 0;

void dfs(int count)
{
    if(count == K - 5)
    {
        for(int i = 0; i < M; i ++)
        {
            cout <<
        }
    }

    return ;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    //cout << "start\n";

    cin >> N >> K;

    if (K < 5)
    {
        cout << "0\n";
        return 0;
    }

    if(K == 26)
    {
        cout << N << "\n";
        return 0;
    }

//    bit |= 1 << ('a' - 'a');
//    bit |= 1 << ('n' - 'a');
//    bit |= 1 << ('t' - 'a');
//    bit |= 1 << ('c' - 'a');
//    bit |= 1 << ('t' - 'a');

    alpa['a' - 'a'] = true;
    alpa['n' - 'a'] = true;
    alpa['t' - 'a'] = true;
    alpa['c' - 'a'] = true;
    alpa['i' - 'a'] = true;

    for (int i = 0; i < N; i++)
    {
        string s;
        cin >> s;

        for (int j = 0; j < s.length(); j++)
        {
            if (j < 4)
                continue;

            if (j > s.length() - 5)
                break;

            //  사용된 알파벳 기록
            //arr |= 1 << (s[j] - 'a');
            alpa[s[j] - 'a'] = true;
        }
//        cout << bitset<26>(arr) << " ";
//        cout << "\n";
    }

    //새로 들어온 값들의 조합을 구한다
    for(int i = 0; i < K - 5; i ++)
    {

    }


    //  26개 중 K개의 1을 갖는 비트를 전부 돌린다 -> 너무 느림

    //  두 bit를 조합해서 1이 k개가 되는 경우 이것으로 and 연산을 통해 통과하는 값을 구한다?



    return 0;
}

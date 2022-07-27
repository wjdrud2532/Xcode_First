#include <iostream>
#include <vector>
#include <climits>

using std::cin;
using std::cout;
using std::ios_base;
using std::pair;
using std::vector;

void Solve()
{
    int N;
    vector<pair<int, bool>> arr;

    cin >> N;

    pair<int, bool> temppair;
    for (int i = 0; i < N; i++)
    {
        cin >> temppair.first;
        temppair.second = false;
        arr.push_back(temppair);
    }

    //���� �Է� ����

    int min = INT_MAX, tempnum;
    vector<int> temparr;
    int count = 0;

    for (int i = 0; i < N; i++)
    {
        min = INT_MAX;

        for (int j = 0; j < N; j++)
        {
            if (arr[j].second == false)

            {
                if (arr[j].first < min)
                {
                    temparr.clear();
                    min = arr[j].first;
                    temparr.push_back(j);
                    //���� ���� �� ���� ���� ���� ã�´�, �� ���� ���� ���� ��� �ٽ� �ʱ�ȭ
                    //�� ������ ��ġ�� temparr�� �����Ѵ�
                }
                else if (arr[j].first == min) //���� ���� ��� �߰��� �Ѵ�
                {
                    temparr.push_back(j);
                }
            }
        }

        //���� ���� ���� count�� �ٲ۴�
        for (int j = 0; j < temparr.size(); j++)
        {
            if (arr[temparr[j]].second == false)

            {
                arr[temparr[j]].first = count;
                arr[temparr[j]].second = true;
            }
        }
        count++;
    }

    for (int i = 0; i < N; i++)
    {
        cout << arr[i].first << " ";
        // cout << arr[i].first << " " << arr[i].second << "\n";
    }

    /*

    ���� ���� ���� 0

    ���� �� ���� ������� ���� ã�� ���� ��ȿ�����̴�

    ���� �� �Է� ���� �� �迭�� ���� for������ ã�ư��鼭 ������� ���� ã�´�?
    */

    return;
}

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    Solve();

    return 0;
}
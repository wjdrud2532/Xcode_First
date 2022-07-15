#include <iostream>

using std::cin;
using std::cout;
using std::ios_base;

int Black(int N, int M)
{
    int arr[100];
    int Sum = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)     //
        {
            for (int k = j + 1; k < N; k++)
            {
                if (arr[i] + arr[j] + arr[k] <= M && arr[i] + arr[j] + arr[k] > Sum)    //3가지 수의 합을 비교
                {                                                                       //이전 sum보다 크면서 최대값 M 이하일 때
                    Sum = arr[i] + arr[j] + arr[k];                                     //새로운 sum을 할당

                    if (Sum == M)                                                       //완전히 같을 경우 끝냄
                        break;
                }
            }
        }
    }

    return Sum;
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base ::sync_with_stdio(false);

    int N, M;
    cin >> N >> M;
    cout << Black(N, M) << "\n";
}

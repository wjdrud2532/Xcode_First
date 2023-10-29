//K개 중 하나를 N번 선택하기(Simple) / k개 중에 1개를 n번 뽑기

#include <iostream>
#include <vector>

using namespace std;

// 중복이 포함된 순열 조합

int K, N;
vector<int> v;


void PrintPermutation()
{
    for(int i = 0; i < v.size(); i ++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}

void FindPermutations(int cnt)
{
    if(cnt == N)    // 출력 개수 N에 도달한 경우
    {
        PrintPermutation(); // 차례로 출력
        return ;
    }

    for(int i = 1; i <= K; i ++)        // 1부터 시작하며
    {
        v.push_back(i);                 // 1부터 차례로 원소 추가
        FindPermutations(cnt + 1);      // 목표에 도달한 경우 출력, 아니라면 다음 값 추가를 재귀적으로 반복
        v.pop_back();                   // 출력 이후 원소 제거
    }

}

int main()
{
    cin >> K >> N;

    FindPermutations(0);

    return 0;
}
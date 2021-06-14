#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using std::cin;
using std::cout;
using std::ios_base;
using std::vector;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    int arrN[100];
    vector<int> divise1;
    vector<int> divise2;
    cin >> N;
    
    for(int i = 0; i < N; i ++)
        cin >> arrN[i];
    
    std::sort(arrN, arrN + N);
    
    //반복해야 하는 값의 범위는 가장 큰 값에서 가장 작은 값을 뺀 값이다.
    //s[n - 1] - s[0]; 까지만 반복하면 된다.
    int max = arrN[N - 1] - arrN[0];
    for(int i = 2; i <= max; i ++)
        if(max % i == 0)
            divise1.push_back(i);
    
    for(int i = 0; i < divise1.size(); i ++)
    {
        
    }
    
    /*
     arrN안의 모든 값들의 최대 공약수 X -> 꼭 전부 나뉘지 않아도 된다.
     
     모든 값에서 같은 나머지가 나와야 하므로 arrN[0] 보다 나머지가 크지 않다.
     1. 0부터 arrN[0] - 1까지 나머지 값을 저장한다.
     2. 저장한 값들을 다른 arrN[i]에 나머지 계산을 하여 값이 같다면 저장한다.
     
     
     
     
     
     ----
     유클리드 호제법 - 두 수의 최대 공약수를 빠르게 구할 수 있다.
     
     2부터 가장 큰 값 까지의 나머지를 저장한다.
     다른 값들을 저장한 나머지와 같이 비교한다.
     나머지와 다르다면 그 나머지를 벡터에서 삭제한다.
     -> 그래도 for문의 반복이 2번 들어간다.
     */
}






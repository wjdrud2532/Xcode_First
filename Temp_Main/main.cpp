
#include <iostream>
#include <algorithm>
#include <vector>

using std::cin;
using std::cout;
using std::ios_base;
using std::vector;

int N, C;
vector<int> V;
int Lmax = -1, Rmax = -1;

//처음부터 큰 값을 얻을 수도 있고 작은 값을 얻을 수도 있다. 그냥 값을 모조리 받은 다음에 정렬을 할까?
//이후 C의 값에 맞추어
//일단 처음에는 무조건 하나를 설치해야한다. N == 1인 경우 답은 min - max로 정해진다.
//지금 내가 만든 코드는 간격이 가장 큰 지점을 찾고 있다.
//간격의 종류가 C개를 이하일 경우 정답은 항상 최대 간격이다.
//pair를 사용해서 새로운 간격이 나타날 때 마다 그곳의 벡터 값을 저장한다

int findCount(int Sindex, int Eindex)
{
    int mid = (Sindex + Eindex) / 2;
    
    while(Sindex >= Eindex)
    {
        
    }
    
    return 0;
    
    
}

int BinarySearch(int Sindex, int Eindex)
{
    int mid = (Sindex + Eindex) / 2;
    
    //if(V[mid] - V[mid - 1] > Lmax)
    Lmax = V[mid] - V[mid - 1];
    
    //if(V[mid + 1] - V[mid] > Rmax)
    Rmax = V[mid + 1] - V[mid];
    
    if(Sindex >= Eindex)
    {
        if(Lmax > Rmax)
            return Lmax;
        else
            return Rmax;
    }
    
    
    
    if(Lmax < Rmax) //오른쪽으로의 값 차이가 더 큰 경우 오른쪽으로 간다
        return BinarySearch(mid + 1, Eindex);
    else
        return BinarySearch(Sindex, mid - 1);
    
    
    return 0;
}

int main()
{
    cin >> N >> C;
    int temp = 0;
    for(int i = 0; i < N; i ++)
    {
        cin >> temp;
        V.push_back(temp);
    }
    
    std::sort(V.begin(), V.end());
    
//    for(int i = 0; i < N; i ++)
//        cout << V[i] << " ";
//
//    cout << "\n";
    if(C == 2)
        cout << V[N - 1] - V[0] << "\n";
    else
    {
        int temp = BinarySearch(N - C - 1, N - 1);
        
        if(temp > 0)
            cout << temp << "\n";
        else
            cout << "1\n";
        
    }
    
}
/*
 
 12789
 1 2    4       8 9
 1  2      3
 
 1 2 3 4 6 8 9      //min과 max를 mid에서 뺀 값이 큰 쪽으로 간다.    //이때 mid를 중심으로 양쪽 값과의 차이를 저장한다.
 //값이 같다면? 어느쪽으로 가든지 상관없다.
 1 2 4 5 7 8 9
 2   2
 //중간 지점에서 위의 과정을 반복한다.
 4 6 8 9
 //이진탐색을 마쳤을 때 양쪽 값 차이의 최대값을 반환한다.
 //시작 인덱스, 끝 인덱스
 
 
 */

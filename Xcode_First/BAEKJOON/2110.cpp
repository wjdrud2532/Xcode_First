//
//  2110.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/07/26.
//
//https://m.blog.naver.com/PostView.naver?isHttpsRedirect=true&blogId=vjhh0712v&logNo=221683269377

#include <iostream>
#include <algorithm>
#include <vector>

using std::cin;
using std::cout;
using std::ios_base;
using std::vector;

int N, C;
vector<int> V;

int findCount(int mid, vector<int> &V)  //개수를 count하는 함수
{
    int std = V[0];
    int count = 1;  //0번째 집에는 무조건 공유기가 있으므로
    
    for(int i = 1; i < V.size(); i++)   //1번째 집부터 시작
    {
        if(V[i] - std >= mid)   //현재의 mid값 보다 큰 간격을 가진 값을 count한다.
        {                       //
            count++;
            std = V[i];         //이전의 간격보다 큰 경우 이 간격을 저장하기 위해 선언
        }
    }
    
    return count;
}

int BinarySearch(int start, int end, vector<int> &V)    //올바른 count 값을 찾는 함수
{
    int result = 0;
    int mid = (start + end) / 2;

    if(start > end)     //이진탐색 조건에서 벗어난 경우 출력
    {
        result = std::max(result, mid); //최대값을 구해야 하기 때문에 이전의 result와 현재의 mid중 큰 값을 찾는다.
        return result;
    }
        
    int count = findCount(mid, V);  //현재 mid의 값 앞에 몇 개의 집이 있는지 찾는다
        
        if(count >= C)              //앞에 집이 개수보다 크거나 같다면
        {
            result = std::max(result, mid);     //mid와 이전의 result 중 큰 값을 result로 갖는다(최대값을 구하는 것이기 때문)
            return BinarySearch(mid + 1, end, V);   //이후 뒷부분을 탐색
        }
        else
            return BinarySearch(start, mid - 1, V); //개수가 작다면 앞부분을 탐색
    
    return result;
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
    
    std::sort(V.begin(), V.end());      //정렬
    
    if(C == 2)
        cout << V[N - 1] - V[0] << "\n";
    else
        cout << BinarySearch(1, V[N - 1], V);
    
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
 ////
 
 */

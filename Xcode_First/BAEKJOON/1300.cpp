//
//  1300.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/07/28.
//https://huiung.tistory.com/90 설명 참조하기

#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::ios_base;

int N, K;

int BinarySearch(int start, int end)    //index 1부터 시작하여 같은 수가 몇 개가 있는지 파악한다.
                                        //그 값이 K와 같거나 크다면 리턴한다.
{
    int answer = 0;
    
    while(start <= end)
    {
        int mid = (start + end) / 2;
        
        int temp = 0;
                                        //오름차순으로 정렬했을 때 1 2 2 3 3 4 4 4 ... 식으로 진행되므로 K번째의 값은 무조건 K보다 같거나 작다.
                                        //그리고 예를 들어 3 7 하면 mid는 4 //  4 / 1 , 4 / 2, 4 / 3, 4 / 4
                                        
        for(int i = 1; i <= N; i ++)
            temp += std::min(N, mid / i);// 4/1같은 경우에서 몫이 N보다 큰 경우는 그 개수가 N인 것과 동일하므로 min값을 사용한다.
                                        //즉, mid보다 작은 값들의 개수를 파악한다. (i * j) <= mid
        
        if(temp < K)
            start = mid + 1;
        else
        {
            answer = mid;
            end = mid - 1;
        }
        
        cout << mid << "\n";
    }
    
    return answer;
}

int main()
{
    cin >> N >> K;
    
    cout << BinarySearch(1, K) << "\n";
    
    return 0;
}


/*
 1 2 3 4 5
 2 4 6 8 10
 3 6 9 12 15
 4 8 12 16 20
 5 10 15 20 25
 */


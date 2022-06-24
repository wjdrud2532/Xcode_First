//
//  1966.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/06/24.
//
//우선순위 큐를 사용하지 않고 배열을 이용했다.
#include <iostream>
#include <algorithm>
#include <queue>
#include <utility>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T, temp;
    int N, M;
    cin >> T;
    
    for(int i = 0; i < T; i ++)
    {
        cin >> N >> M;
        queue<pair<int, int>> Q;
        int arr[100];
        
        int answer = 1;
        
        for(int j = 0; j < N; j ++)
        {
            cin >> temp;
            arr[j] = temp;
            Q.push(make_pair(temp, j));     //배열과 스택에 차례로 저장
        }
        
        std::sort(arr, arr + N);        //배열을 정렬
        
        int arrcount = N - 1;           //가장 큰 값부터 시작
        
        while(!Q.empty())               //큐가 빌 때 까지
        {
            
            if(Q.front().first == arr[arrcount])    //가장 큰 순서대로 pop을 한다. 큐의 앞부분이 오름차순이 아니라면 뒤로 보낸다.
            {
                if(Q.front().second == M)           //순서가 맞고 해당 큐의 second가 찾고자 하는 M순서의 값이라면
                {
                    cout << answer << "\n";         //해당 번째의 pop횟수를 출력한다.
                    break;
                }
                else                                //순서는 맞지만 찾고자 하는 순서의 값이 아니라면(값만 같고 순서가 틀릴경우)
                {
                    Q.pop();                        //pop하고 출력 횟수를 증가시킨다.
                    answer ++;
                    arrcount --;
                }
            }
            else                                    //뒤로 보낸다.
            {
                Q.push(make_pair(Q.front().first, Q.front().second));
                Q.pop();
            }
        }
    }
}

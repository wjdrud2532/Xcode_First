//
//  13305.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/06/10.
//

#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::ios_base;

int main()
{
    //입력은 int 범위 안에 들어가지만 출력은 그 범위를 벗어난다. 그것을 잘 확인하자
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    long long minPrice = 0;
    
    int OilPrice[100001];
    int RoadLength[100000];
    
    cin >> N;
    
    for(int i = 0; i < N - 1; i ++)
        cin >> RoadLength[i];
    for(int i = 0; i < N; i ++)
        cin >> OilPrice[i];
    
    minPrice = 0;
    
    int CurrentOilPrice = OilPrice[0];
    long long tempRoadLength = 0;
    for(int i = 0; i < N - 1; i ++)
    {
        //마지막 N - 2에 도착했을 경우 남아있는 모든 거리를 그 가격으로 계산해야 한다.
        if(CurrentOilPrice > OilPrice[i])
        {
            minPrice += tempRoadLength * CurrentOilPrice;
            tempRoadLength = 0;
            CurrentOilPrice = OilPrice[i];
            //cout << minPrice << "\n";
        }
        
        tempRoadLength += RoadLength[i];
        
        
    }
    int temp = 0;
    (CurrentOilPrice > OilPrice[N - 2]) ? temp = OilPrice[N - 2] : temp = CurrentOilPrice;

    minPrice += tempRoadLength * temp;
    cout << minPrice << "\n";
    
    
    /*
     일단 처음엔 첫 기름 가격으로 도로길이만큼의 오일을 사야한다.
     
     현재 지점에서 다음 지점을 계속해서 탐색한다. 이 때 현재 지점보다 적은 값을 가진 지점이 있다면 현재 지점부터 그 지점까지의 거리만큼 현재 지점의 값으로 채운다.
     이후 이것을 반복한다.
     */
}






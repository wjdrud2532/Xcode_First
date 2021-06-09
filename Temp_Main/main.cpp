#include <iostream>
#include <algorithm>
#include <cstring>
#include <stack>

using std::cin;
using std::cout;
using std::ios_base;
using std::string;
using std::stack;


string input;
string tempstr = "";
int temp = 0;



int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    int minPrice = 0;
    
    int OilPrice[100000];
    int RoadLength[99999];
    
    cin >> N;
    
    for(int i = 0; i < N - 1; i ++)
        cin >> RoadLength[i];
    for(int i = 0; i < N; i ++)
        cin >> OilPrice[i];
    
    minPrice = 0;
    
    int CurrentOilPrice = OilPrice[0];
    int tempRoadLength = 0;
    for(int i = 0; i < N - 1; i ++)
    {

        if(CurrentOilPrice <= OilPrice[i] && i == N - 2)
        {
            tempRoadLength += RoadLength[i];
            minPrice += tempRoadLength * OilPrice[i];
            break;
        }
        if(CurrentOilPrice > OilPrice[i] || i == N - 2)
        {
            minPrice += tempRoadLength * CurrentOilPrice;
            tempRoadLength = 0;
            CurrentOilPrice = OilPrice[i];
            
            cout << minPrice << "\n";
        }
        else
            tempRoadLength += RoadLength[i];

    }
    
    cout << minPrice << "\n";
    
    
    /*
     일단 처음엔 첫 기름 가격으로 도로길이만큼의 오일을 사야한다.
     
     현재 지점에서 다음 지점을 계속해서 탐색한다. 이 때 현재 지점보다 적은 값을 가진 지점이 있다면 현재 지점부터 그 지점까지의 거리만큼 현재 지점의 값으로 채운다.
     이후 이것을 반복한다.
     */
}






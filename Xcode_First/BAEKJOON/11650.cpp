//
//  11650.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/05/07.
//

#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::ios_base;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    
    cin >> N;
    
    std::pair<int, int> Coordinates[1000001];
    
    for(int i = 0; i < N; i ++)
    {
        cin >> Coordinates[i].first >> Coordinates[i].second;
    }
    
    //sort의 경우 first가 같다면 second를 가지고 자동으로 정렬한다.
    std::sort(Coordinates, Coordinates + N);
    
    
//    for(int i = 0; i < N; i ++)
//    {
//        for(int j = 0; j < N; j ++)
//        {
//            if(Coordinates[i].first < Coordinates[j].first)
//            {
//                std::pair<int, int> temp = Coordinates[i];
//                Coordinates[i] = Coordinates[j];
//                Coordinates[j] = temp;
//            }
//            else if(Coordinates[i].first == Coordinates[j].first)
//            {
//                if(Coordinates[i].second < Coordinates[j].second)
//                {
//                    std::pair<int, int> temp = Coordinates[i];
//                    Coordinates[i] = Coordinates[j];
//                    Coordinates[j] = temp;
//                }
//            }
//        }
//    }
    
    for(int i = 0; i < N; i ++)
    {
        cout << Coordinates[i].first << " " << Coordinates[i].second << "\n";
    }
}

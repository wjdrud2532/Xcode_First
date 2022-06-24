//
//  9375.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/06/21.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

using std::cin;
using std::cout;
using std::ios_base;
using std::string;
using std::vector;
using std::pair;

string temp1, temp2;

bool isEqual(const pair<string, int>& element)
{
    return element.first ==  temp2;
}


int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T;
    int ClothesNum;
    vector< pair<string, int> > P;
    int arr[100];
    
    cin >> T;
    
    
    for(int i = 0; i < T; i ++)
    {
        cin >> ClothesNum;
        for(int j = 0; j < ClothesNum; j ++)
        {
            cin >> temp1 >> temp2;
            auto it = std::find_if( P.begin(), P.end(), isEqual );
            
            if(it != P.end())       //있을 경우
                it->second ++;
            
            else                    //없을 경우
                P.push_back(std::make_pair(temp2, 1));
        }
        
        int temp = 1;
        for(int j = 0; j < P.size(); j ++)
        {
            temp *= (P[j].second + 1);
        }
        
        arr[i] = temp - 1;
        
        P.clear();
        
    }
    
    for(int i = 0; i < T; i ++)
        cout << arr[i] << "\n";
    /*
     pair를 사용했지만 map과 key를 사용하는 것이 더 일반적인 듯 하다.
     
     신발이 4, 안경이 3, 장갑이 2 일 때 총 개수는
     (4 - 1) * (3 - 1) * (2 - 1) - 1 이다.
     
     
     
     */
}


//
//  11047.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/06/08.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>


using std::cin;
using std::cout;
using std::ios_base;
using std::vector;

int main()
{
    int N, K;
    int count = 0;
    vector<int> V;
    //V.push_back(count);
    
    cin >> N >> K;
    int temp = 0;
    for(int i = 0; i < N; i ++)
    {
        cin >> temp;
        if(temp > K)
        {
            N = i;
            for(int j = i - 1; j <= N; j ++)
                cin >> temp;
            break;
        }
        
            V.push_back(temp);
    }
    for(int i = N - 1 ; i >= 0; i --)
    {
        if(K >= V[i]) //5000 > 100
        {
            count += K / V[i];
            K %= V[i];        //5000 % 100 = 50
        }
    }
    
    
//    for(int i = N - 1; i >= 0; i --)
//        cout << V[i] << " ";
    cout << count << "\n";
    
}

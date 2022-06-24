//
//  2981_너무느림.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/06/21.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

using std::cin;
using std::cout;
using std::ios_base;
using std::vector;

int Euclid(int a, int b)
{
    int share;
    while(1)
    {
        share = b % a;
        if(share == 0)
            break;
        
        b = a;
        a = share;
    }
    //cout << a << " ";
    return a;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    int arr[100];
    vector<int> V;
    
    cin >> N;
    for(int i = 0; i < N; i ++)
        cin >> arr[i];
    
    std::sort(arr, arr + N);
    
    int temp = 0;
    
    if(N > 2)
    {
        temp = Euclid(arr[1] - arr[0], arr[2] - arr[1]);
        for(int i = 1; i < N - 2; i ++)
            temp = Euclid(temp, Euclid(arr[i + 2] - arr[i + 1], arr[i + 1] - arr[i]));    //모든 값들의 최대 공약수
        
        for(int i = 2; i <= temp; i ++)
        {
            if(temp % i == 0)
                V.push_back(i);             //최대 공약수의 약수
        }
        
        //최대 공약수의 약수 중에서 나머지가 일치하는 것을 찾는다.
        
        for(int i = 0; i < V.size(); i ++)
        {
            for(int j = N - 1; j > 0; j --)
            {
                if(arr[j] - arr[j - 1] != V[i] * ( arr[j]/V[i] - arr[j - 1]/V[i] ) )
                {
                    V.erase(V.begin() + i);
                    i --;
                    break;
                }
            }
        }
    }
    else
    {
        //2개일 경우 큰값 ㅡ 작은값의 약수
        int max = arr[N - 1] - arr[0];
        
        for(int i = 2; i <= max / 2; i ++)
        {
            if(max % i == 0)
            {
                V.push_back(i);
            }
        }
        V.push_back(max);
    }
    
    
    for(int i = 0; i < V.size(); i ++)
        cout << V[i] << " ";
    
}


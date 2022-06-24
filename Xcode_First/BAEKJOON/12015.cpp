//
//  12015.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/08/01.
//https://sihyungyou.github.io/baekjoon-12015/

#include <iostream>
#include <algorithm>
#include <vector>

using std::cin;
using std::cout;
using std::ios_base;
using std::vector;

int BinarySearch(int start, int end, vector<int> & V, int Findnum)  //lower bound
{
    int mid = 0;
    int lower_bnd = 0;
    
    while(start <= end)
    {
        mid = (start + end) / 2;
        
        if (V[mid] >= Findnum)
        {
            lower_bnd = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    return lower_bnd;
}

int main()
{
    std::ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    int LCS = 0;
    
    cin >> N;
    
    vector<int> V;

    int temp;
    
    for(int i = 0; i < N; i ++)
    {
        cin >> temp;
        
        if(temp > V.back())   //받은 값이 기존의 값보다 크다면
        {
            V.push_back(temp);  //추가
            LCS ++;             //큰 값이 새로 들어왔으므로 길이가 늘어난다.
        }
        else                    //받은 값이 기존의 값보다 작다면 새로운 LCS를 고려해야한다.
        {                       /*
                                 기존에 1 3 5 가 존재할 때 길이는 3이다. 그리고 4가 들어올 경우
                                    1 3 4 로 변경한다. 이후에 5가 나올 경우 길이는 4가 된다.
                                    1 3 5 에서 2가 나올 경우
                                    1 2 5 로 변경한다. 이후에 3이상이 나올 경우를 위해서이다.
                                 */
            V[BinarySearch(0, (int)V.size(), V, temp)] = temp;
            
            //lower_bound 직접 만드는 것 보다 stl 쓰는게 8ms정도 더 빠르다.
//            vector<int>::iterator low = std::lower_bound(V.begin(), V.end(), temp);
//            *low = temp;
        }
    }
    cout << LCS << "\n";
}



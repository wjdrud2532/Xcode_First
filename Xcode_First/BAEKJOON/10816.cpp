//
//  10816.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/07/15.
//

#include <iostream>
#include <algorithm>
#include <vector>

using std::cin;
using std::cout;
using std::ios_base;
using std::vector;
using std::upper_bound;
using std::lower_bound;

int N;
//이거 사용하는 것 보다 stl사용하는게 약간 더 빠르다
//배열보다 벡터가 더 빠르게 나왔다.
//int lower_binary(vector<int> V, int SearchNum)
//{
//    int mid, start = 0, end = N - 1;
//
//    while (end > start)
//    {
//           mid = (start + end) / 2;
//           if (V[mid] >= SearchNum)
//               end = mid;
//           else start = mid + 1;
//    }
//       return end + 1;
//}
//
//int upper_binary(vector<int> V, int SearchNum)
//{
//    int mid, start = 0, end = N - 1;
//
//    while (end > start)
//    {
//        mid = (start + end) / 2;
//        if (V[mid] > SearchNum)
//            end = mid;
//        else start = mid + 1;
//    }
//    return end + 1;
//}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int M;
    int temp1, temp2;
    vector<int> NV, MV;
    
    cin >> N;
    for(int i = 0; i < N; i ++)
    {
        cin >> temp1;
        NV.push_back(temp1);
    }
    
    std::sort(NV.begin(), NV.end());
    
    cin >> M;
    for(int i = 0; i < M; i ++)
    {
        cin >> temp1;
        temp2 = (upper_bound(NV.begin(), NV.end(), temp1) - lower_bound(NV.begin(), NV.end(), temp1));
                            //Implicit conversion loses integer precision: 'decltype(__x.base() - __y.base())' (aka 'long') to 'int' -> 암시적 형변환은 정수 정밀도를 잃습니다
        MV.push_back(temp2);
    }
    
    for(int i = 0; i < M; i ++)
        cout << MV[i] << " ";
    
}

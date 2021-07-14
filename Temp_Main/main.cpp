#include <iostream>
#include <algorithm>
#include <vector>

using std::cin;
using std::cout;
using std::ios_base;
using std::vector;

int N;
//
//int lower_binary(int * V, int SearchNum)
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
//       return end;
//}
//
//int upper_binary(int * V, int SearchNum)
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
//    return end;
//}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int M;
    int temp1, temp2, temp3;
    int NV[500000], MV[500000], Answer[500000];
    
    cin >> N;
    for(int i = 0; i < N; i ++)
    {
        cin >> temp1;
        NV[i] = temp1;
    }
    
    std::sort(NV, NV + N);
    
    cin >> M;
    for(int i = 0; i < M; i ++)
    {
        cin >> temp1;
        
        MV[i] = temp1;
    }
    
    for(int i = 0; i < M; i ++)
    {
        
        temp2 = std::upper_bound(<#_ForwardIterator __first#>, <#_ForwardIterator __last#>, <#const _Tp &__value_#>, <#_Compare __comp#>)
        temp3 = lower_binary(NV, MV[i]);
        temp1 = temp2 - temp3;
        
        if (temp2 == N - 1 && NV[N - 1] == MV[i])
            temp1 ++;
       
        Answer[i] = temp1;
    }
    
    for(int i = 0; i < M; i ++)
        cout << Answer[i] << " ";
    
}

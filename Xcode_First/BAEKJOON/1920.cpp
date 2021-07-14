//
//  1920.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/07/15.
//이분탐색

#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::ios_base;

int binarySearch(int arr[], int start, int end, int Findnum)
{               //int * arr
    int mid;
    
    if(start >= end)        //없을 경우
    {
        return 0;
    }
    else
    {
        mid = (start + end) / 2;        //반으로 나눈다.
        
        cout << mid << "11\n";
        
        if(arr[mid] == Findnum)
            return 1;
        
        else if(arr[mid] > Findnum)          //찾고자 하는 값이 현재 값보다 작다면
            return binarySearch(arr, start, mid, Findnum);  //현재의 앞부분 ~ 중간을 탐색한다.
        else                       // 크다면
            return binarySearch(arr, mid + 1, end, Findnum);//현재의 중간 ~ 뒷부분을 탐색한다.
                                                            //이때 arr[min]는 이미 탐색범위에 포함됐으니 건너뛴다
    }
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int N, M;
    int Narr[100000];
    int Mnum[100000];
    int temp;
    
    cin >> N;
    for(int i = 0; i < N; i ++)
        cin >> Narr[i];
    
    std::sort(Narr, Narr + N);
    
    cin >> M;
    for(int i = 0; i < M; i ++)
    {
        cin >> temp;
        
        Mnum[i] = binarySearch(Narr, 0, N, temp);
    }
    
    for(int i = 0; i < M; i ++)
        cout << Mnum[i] << "\n";
}

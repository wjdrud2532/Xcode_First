//
//  15650.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/05/19.
//

#include <iostream>

#define max 9

using std::cout;
using std::cin;

int N, M;
int arr[max] = { 0, };
int Visit[max] = {0, };

void dfs(int count, int num)
{
    if(count == M)
    {
        for(int i = 0; i < M; i ++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    
    for(int i = num; i <= N; i ++)
    {
        if(!Visit[i])
        {
            Visit[i] = true;
            arr[count] = i;         //4가 될때까지 N에 i를 저장
            dfs(count + 1, ++num);
            Visit[i] = false;
        }
    }
    
//    for(int i = 0; i < max; i ++)
//    {
//        cout << arr[i] << " ";
//    }
//    cout << "\n";
}

int main()
{
    cin >> N >> M;
    
    dfs(0, 1);
}

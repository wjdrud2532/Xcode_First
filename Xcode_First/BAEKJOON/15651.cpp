//
//  15651.cpp
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

void dfs(int count)
{
    if(count == M)
    {
        for(int i = 0; i < M; i ++)
            cout << arr[i] << " ";
        cout << "\n";
        return;                 //return 을 추가하여
    }                           //아래의 for문에서 범위를 넘지 않도록 함
    
    for(int i = 1; i <= N; i ++)
    {
            Visit[i] = true;
            arr[count] = i;
            dfs(count + 1);
            Visit[i] = false;
    }
    
}

int main()
{
    cin >> N >> M;
    
    dfs(0);
}

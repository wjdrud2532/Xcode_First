#include <iostream>

using std::cin;
using std::cout;

void RCDflase(void)
{
    
}

int main()
{
    int N;
    
    cin >> N;
    
    bool ** arr = new bool * [N];
    for(int i = 0; i < N; i ++)
        arr[i] = new bool[N];
    
    for(int i = 0; i < N; i ++)
        std::memset(arr[i], 1, N);      //일단 모든 배열에 true를 할당
    
    int Queen = N;
    
//    for(int i = 0; i < N; i ++)
//        for(int j = 0; j < N; j ++)
//            cout << i << " " << j << " " << arr[i][j] << "\n";
    
    /*
     0, 0부터 시작해서 Queen을 넣고
    해당 위치 부터 가로, 세로, 대각을 모두 false 해야한다.
    
     (0, 0)이 
     
     */
    for(int i = 0; i < N; i ++)
    {
        for(int j = 0; j < N; j ++)
        {
            
        }
    }
    
    
    for(int i = 0; i < N; i ++)
        delete [] arr[i];
    delete [] arr;
}

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int N;
    
    cin >> N;
    
    int arr[N][3];
    int Max[2] = { 0, 0 };
    
    for(int i = 0; i < N; i ++)
    {
        cin >> arr[i][0] >> arr[i][1];
        
        if(arr[i][0] >= Max[0] && arr[i][1] > Max[1])       //가장 큰 값을 Max에 저장
        {
            Max[0] = arr[i][0];
            Max[1] = arr[i][1];
            arr[i][2] = 1;
        }
    }
    
    int tempNum = 2;
    int count = 0;
    
    for(int i = 0; i < N; i ++)
    {
        if(arr[i][0] != Max[0] && arr[i][1] != Max[1])
        {
            for(int j = 0; j < N; j ++)
            {
                if(arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1])
                {
                    
                }
            }
        }
            
    }
    
}


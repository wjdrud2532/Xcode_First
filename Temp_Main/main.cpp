#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::ios_base;

int N;
int OneCount = 0, ZeroCount = 0;
char arr[64][64];

void quad(int x, int y, int N)
{
    int tempCount = 0;
    
    for (int i = x; i < x + N; i++)
        for (int j = y; j < y + N; j++)
            if (arr[i][j])      //해당 값이 1이라면(blue) tempCount 를 ++ 한다.
                tempCount++;
    
    if (!tempCount)     //만약 blue값을 얻지 못했다면 모두 0인 White이므로 ZeroCount 를 ++ 한다.
        ZeroCount++;//
    else if
        (tempCount == N * N) OneCount++; // tempCount의 값이 사각형의 개수와 같다면 모두 1이므로 ++한다.
    else {                                  //값이 섞여 있다면 사분면으로 나누어 계산을 다시 진행한다.
        quad(x, y, N / 2);  // 2사분면
        quad(x, y + N / 2, N / 2); // 1사분면
        quad(x + N / 2, y, N / 2); // 3사분면
        quad(x + N / 2, y + N / 2, N / 2); // 4사분면
    }
    return;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> N;
    
    for(int i = 0; i < N; i ++)         //입력 받음
        for(int j = 0; j < N; j ++)
            cin >> arr[i][j];
    
    quad(0, 0, N);
    
    cout << ZeroCount << "\n" << OneCount << "\n";
}

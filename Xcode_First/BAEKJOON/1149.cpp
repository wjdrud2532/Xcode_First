//
//  1149.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/05/26.
//

#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::min;

int N;
int RGB[1001][3] = { 0, };
int smallest[1001][3] = {0, };
int Sum = 0;

void findsmall()
{
    
    for(int i = 1; i <= N; i ++)
    {
        cin >> RGB[i][0] >> RGB[i][1] >> RGB[i][2];     //입력받는다
    }
    
    for(int i = 1; i <= N; i ++)
    {
        //i번째 가장 적은 값을 알기 위해 smallest에 저장
        //각각 i번째의 RGB를 받고 이전값에서 받은 색을 제외한 가장 작은 값을 더한다.
        smallest[i][0] = RGB[i][0] + min(smallest[i - 1][1], smallest[i - 1][2]);
        smallest[i][1] = RGB[i][1] + min(smallest[i - 1][0], smallest[i - 1][2]);
        smallest[i][2] = RGB[i][2] + min(smallest[i - 1][0], smallest[i - 1][1]);
    }
    
}

int main()
{
    cin >> N;
    
    findsmall();
    
    //N번째 값에서 가장 작은 값을 출력한다.
    cout << min(smallest[N][0], min(smallest[N][1], smallest[N][2])) << "\n";
    
}

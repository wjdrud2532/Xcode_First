//
//  11720.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/04/12.
//

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int N, Sum = 0;
    char Num;
    
    cin >> N;
    
    for(int i = 0; i < N; i ++)
    {
        cin >> Num;
        Sum += Num - 48;
    }
    
    cout << Sum << endl;
    
    return 0;
    
}

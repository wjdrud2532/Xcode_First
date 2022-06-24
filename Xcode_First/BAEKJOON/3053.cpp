//
//  3053.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/05/01.
//

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

//반지름 * 반지름 * 원주율
//반지름 * 반지름 * 2
int main()
{
    double R;
    
    cin >> R;
    
    cout.setf(std::ios::fixed);     //소수점 자리를 고정시킨다 해제하기 위해선 "cout.unsetf(std::ios::fixed); 를 사용하면 된다.
    cout.precision(6);              //소수점 최대 출력 자리수를 정한다
    cout << R * R * M_PI << "\n" << R * R * 2;
    
}
    


//
//  1978.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/04/23.
//

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::sqrt;

int main() {
    int num;
    cin >> num;
    int count = num;
    int input[100] = {0,};
    for(int i = 0; i < num; i++) {
        cin >> input[i];
        if (input[i] == 1)
            count--;
    }

    for(int i = 0; i < num; i++)
        for(int j = 2; j <= sqrt(input[i]); j++)        //본인 숫자의 제곱근까지 확인하면 된다.
        {                                               //에라토스테네스의 소수 필요충분조건
            if(input[i] % j == 0)
            {
                count--;
                break;
            }
        }
    cout << count;
    return 0;
}

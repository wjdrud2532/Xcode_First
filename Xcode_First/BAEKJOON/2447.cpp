//
//  2447.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/05/01.
//

#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;
using std::sqrt;

void star(int i, int j, int num)
{
    if((i / num)%3 == 1 && (j / num)%3 == 1) {
        cout << ' ';
    }
    else
    {
        if(num / 3 == 0)
            cout <<'*';
        else
            star(i,j,num/3);
    }
}
int main() {
    int num;
    cin >> num;
    for(int i = 0; i < num; i++)
    {
        for(int j = 0; j < num; j++)
            star(i,j,num);
        cout << '\n';
    }
}

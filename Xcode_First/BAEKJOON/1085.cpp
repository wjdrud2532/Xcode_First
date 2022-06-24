//
//  1085.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/04/29.
//

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::ios_base;

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
    
    int x, y, w, h;
    
    int row, col;
    
    cin >> x >> y >> w >> h;
    
    (w - x) > x ? row = x : row = w - x;            //가로 길이에서 x를 뺀 값과 x중 작은 값을 row
    (h - y) > y ? col = y : col = h - y;            //세로 길이에서 y를 뺀 값과 y중 작은 값을 col
    
    row <= col ? cout << row : cout << col;         //둘 중 더 작은 값을 출력
    
    return 0;
}

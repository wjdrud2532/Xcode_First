//
//  2869.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/04/18.
//

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int A, B, V;
    cin >> A >> B >> V;
    
    int Day = 0;
    
    Day = (V - A) / (A - B);    //가야하는 거리에 하루 이동만큼을 빼고 계산을 시작한다.
    
    if((V - A) % (A - B) > 0)   //이 때 나머지가 있다면 한번 더 가야하므로 ++ 한다.
        Day ++;
        
    cout << Day + 1;            //처음 하루 이동을 뺐으므로 + 1 을 한다.
    
}

//
//  15596.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/04/14.
//


#include <vector>


using std::vector;
long long sum(vector<int> &a)
{
    long long ans = 0;
    for(vector<int>::iterator iter = a.begin(); iter < a.end(); iter ++)
    {   //a의 시작을 가리키는 iter              시작부터 끝까지 반복하며 그때마다 iter ++로 다른 값을 받아온다
        ans += *iter;       //그리고 그것을 계속 ans에 더한다.
    }
    return ans;
}

/*
 for(int i = 0; i < a.length(); i++)
     ans += vec[i];
 이것도 가능하다
 */

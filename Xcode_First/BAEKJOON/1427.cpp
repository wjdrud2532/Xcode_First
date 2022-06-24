//
//  1427.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/05/07.
//

#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::ios_base;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    std::string N;
    
    cin >> N;
    
    for(int i = 0; i < N.length(); i ++)
    {
        for(int j = 0; j < N.length(); j ++)
        {
            if(N[i] > N[j])
            {
                char temp = N[i];
                N[i] = N[j];
                N[j] = temp;
            }
        }
    }
    
    cout << N;
    
}

//
//  2675.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/04/16.
//

#include <iostream>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{
    string str;
    int N, R;
    
    cin >> N;
    
    for(int i = 0; i < N; i ++)
    {
        cin >> R >> str;
        
        for(int j = 0; j < str.size(); j ++)
        {
            for(int k = R; k > 0; k --)
            {
                cout << str[j];
            }
        }
        cout << endl;
    }
    
    return 0;
    
}

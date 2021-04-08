//
//  1152.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/04/08.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int num = 0;
    int pos;
    getline(cin, s);
    if (!s.empty())
    {
        if(s.front() == ' ')
            s.erase(s.begin());
        if(!s.empty())
        {
            if(s.back() == ' ')
                s.erase(s.end() - 1);
            
            pos = s.find(' ');
            
            while(pos != s.npos)
            {
                num ++;
                pos = s.find(' ', pos + 1);
            }
            num ++;
        }
    }
    cout << num << "\n";
    return 0;
}

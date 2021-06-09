//
//  1541.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/06/09.
//

#include <iostream>
#include <algorithm>
#include <cstring>
#include <stack>

using std::cin;
using std::cout;
using std::ios_base;
using std::string;
using std::stack;


string input;
string tempstr = "";
int temp = 0;


void maxminus()
{
    bool Isminus = false;
    
    for(int i = 0; i <= input.length(); i ++)
    {
        if(input[i] == '+' || input[i] == '-' || input[i] == '\0')  //부호가 오거나 마지막일 경우
        {
            if(Isminus)
                temp -= std::stoi(tempstr);
            else
                temp += std::stoi(tempstr);
            
            tempstr = "";
            
            if(input[i] == '-')
                Isminus = true;
            
            
        }
        else                                //값만 있을 경우
            tempstr += input[i];
    }
    
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> input;
    
    maxminus();
    
    cout << temp <<"\n";
    
}
//-1+4+5+2-1-5-4+5 안되는데?
//되는 것을 stack으로 만들었으나 부족한 부분이 많아 완성하지 못함
 





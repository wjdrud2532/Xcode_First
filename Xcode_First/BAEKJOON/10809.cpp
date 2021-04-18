//
//  10809.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/04/15.
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
    char Alpa[26];
    int HasAlpa[26];
    std::fill_n(HasAlpa, 26, -1);       //-1로 초기화
    
    cin >> str;
    
    for (int i = 0; i < 26; i ++)
        Alpa[i] = i + 97;               //아스키 97이 아닌 보기 쉽도록 문자 'a'로 대체할 것
   
    for(int i = 0; i < str.size(); i ++)
    {
        for(int j = 0; j < 26; j ++)
        {
            if(str[i] == Alpa[j] && HasAlpa[j] == -1)
                HasAlpa[j] = i;
        }
    }
    
    for(int i = 0; i < 26; i ++)
    cout << HasAlpa[i] << " ";
    
}
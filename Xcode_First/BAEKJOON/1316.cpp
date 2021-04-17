//
//  1316.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/04/17.
//

#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    int N;
    int GroupCount = 0;
    
    bool IsGroup = true;
   
    
    cin >> N;
    
    for(int i = 0; i < N; i ++)
    {
        string str;
        cin >> str;
        char Number[str.size()];
        int count = 0;
        
        for(int j = 0; j < str.size(); j ++)
        {
            if(str[j] != str[j + 1])
            {
                Number[count++] = str[j];
            }
        }
       
        for(int j = 0; j < count; j ++)
        {
            for(int k = j + 1; k < count; k ++)
            {
                if(Number[j] == Number[k])
                    IsGroup = false;
            }
            
            if(IsGroup == false)
                break;
        }
        
        if(IsGroup == true)
            GroupCount ++;
        IsGroup = true;
        
    }
    
    cout << GroupCount;
}

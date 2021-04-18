//
//  1316.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/04/17.
//


/*
 굳이 압축하지 않아도
 26개읠 알파벳 탐색을 위한 배열을 만들고 중복된 부분이 나타난다면 해당 부분을 false 한다.
 모두 true라면 count ++를 하는 방식으로 풀이 가능
 굳이 문자열을 압축할 필요 없었다;;
 */
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
                                                //여기까지 문자열 압축
        for(int j = 0; j < count; j ++)
        {
            for(int k = j + 1; k < count; k ++)
            {
                if(Number[j] == Number[k])      //앞부분부터 중복되는지 탐색
                    IsGroup = false;            //중복된다면 false로 바꾸고
            }
            
            if(IsGroup == false)
                break;
        }
        
        if(IsGroup == true)         //ture라면 ++ 아니라면 넘어간다.
            GroupCount ++;
        IsGroup = true;
        
    }
    
    cout << GroupCount;
}

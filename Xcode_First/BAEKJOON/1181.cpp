//
//  1181.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/05/08.
//

#include <iostream>
#include <algorithm>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::ios_base;
using std::string;

//bool compare(string a, string b)
//{
//    if(a.length() < b.length())
//        return a.length() < b.length();
//
//    else
//        return a.length() > b.length();
//}

bool compareWith(string a, string b)
{
  if(a.length() == b.length())      //문자열의 길이가 같다면
    return a < b;                     //사전순으로 반환하고
    
  return a.length() < b.length();     //아니라면 길이순으로 반환한다.
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    
    cin >> N;
    
    string str [20001];
    
    for(int i = 0; i < N; i ++)
    {
        cin >> str[i];
        
        for(int j = 0; j < i; j ++)
        {
            if(str[j] == str[i])
            {
                i --;
                N --;
                break;
            }
        }
    }
    
    std::sort(str, str + N, compareWith);
    
//    for(int i = 0; i < N; i ++)
//    {
//        for(int j = 0; j < N; j ++)
//        {
//            if(str[i].length() < str[j].length())
//            {
//                string temp = str[i];
//                str[i] = str[j];
//                str[j] = temp;
//            }
//            if(str[i].length() == str[j].length() && str[i] != str[j])
//            {
//                for(int k = 0; k < str[i].length(); k ++)
//                {
//                    if(str[i][k] < str[j][k])
//                    {
//                        string temp = str[i];
//                        str[i] = str[j];
//                        str[j] = temp;
//                    }
//                }
//            }
//
//        }
//    }
    
    cout << "\n\n";
    
    for(int i = 0; i < N; i ++)
        cout << str[i] << "\n";
    
    
}

//
//  2941.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/04/17.
//

#include <iostream>
#include <cstring>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main()
{
    vector<string> Vector = {"c=","c-","dz=","d-","lj","nj","s=","z="};
    int Find;
    string str;
    
    cin >> str;
    
    for(int i = 0; i < Vector.size(); i ++) //변경할 크로아티아 문자의 개수만큼 반복
    {
        while(1)
        {
            Find = str.find(Vector[i]); //바꿀 문자가 있는지 찾는다.
            if(Find == string::npos)    //바꿀 문자가 없다면 반복문 중지
                break;;
            str.replace(Find, Vector[i].length(), "#"); //있다면 #으로 바꾼다.
        }
    }
    
    cout << str.length();   //그리고 문자열의 길이를 출력
    
}

//
//  1157.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/04/12.
//

/*
 알파뱃 갯수만큼 Vector 또는 배열이 필요함
 
 1. getline으로 입력을 받고 하나씩 잘라 비교? -> cstring 필요
 2. char 배열로 입력 받으면서 비교?
 
 알파벳 비교를 어떻게?
 1. switch -> 확실하지만 너무 길다.
 2. 아스키 코드 -> A가 65 ~ 90, a가 97 ~ 122  32차이
 
 */

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
    string str;
    int NumVector[26] = {0, };      //대소문자 구분하지 않으니
    int Max;                        //가장 많은 개수를 판별
    char MostChar = 65;             //마지막 출력
    bool IsSame = false;            //겹치는 것이 있는지 확인
    
    getline(cin, str);              //한줄 입력받음       **************** 굳이 getline이 아니더라도 cin >> str 도 가능하다.
    
    int temp;
    
    while(!str.empty())     //문자열이 빌 때까지
    {
        temp = str.back();
                            //********************* transform(str.begin(), str.end(), str.begin(), (int(*)(int))toupper);
        if(temp < 97)       //전부 소문자로 바꾸어 계산        *********   위의 코드로 전부 대문자로 바꿔줄 수 있다 #include <algorithm> 필요
            temp += 32;
        
        NumVector[temp - 97] ++;    //알파벳의 수많큼 ++
        
        str.pop_back();
    }
    
    Max = NumVector[0];
    for(int i = 1; i < 26; i ++)
    {
        if(NumVector[i] != 0)       //알파벳이 있을 때
        {
            if(NumVector[i] == Max) //알파벳이 존재하고 서로 값이 같을 때 ?를 출력하기 위해
            {
                IsSame = true;
            }
            if(NumVector[i] > Max)  //더 큰 값이 있다면
            {
                Max = NumVector[i];
                MostChar = i + 65;  //그 값을 저장
                IsSame = false;
            }
        }
    }
    
    if(IsSame == true)
        cout << "?" << endl;
    else
        cout << MostChar << endl;
    
    
    return 0;
    
}

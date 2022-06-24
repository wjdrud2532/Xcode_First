#include <iostream>

using std::cout;
using std::cin;
using std::endl;

#include <cstring>

int main()
{
    std::string str;
    int pos;
    int count = 0;
    
    getline(cin, str);  // 전체 한 줄을 읽어들여 str에 저장
    
    if(!str.empty())    // str이 입력을 받았다면
    {
        if(str.front() == ' ')               //맨 앞이 ' '라면
            str.erase(str.begin());          //' '를 삭제한다. (1개)
        
        if(!str.empty())                     //' '삭제 이후에도 값이 남아있다면
        {
            if(str.back() == ' ')            //맨 뒤가 ' '라면
                str.erase(str.end() - 1);    //그것을 삭제
            
            pos = str.find(' ');           //공백을 가진 위치를 count에 저장
            
            while(pos != str.npos)         //공백을 가지지 않았을 경우
            {
                count ++;
                pos = str.find(' ', pos + 1);
                            //공백을 기존위치 count의 + 1부터 찾기 시작한다.
            }
            count ++;       //단어가 하나만 있을 경우
        }
    }
    
    cout << count << endl;
    
    
}

/*
 str::string str;
 
 str::find("문자열");           //처음부터 탐색하며 찾고자 하는 문자열의 첫 번째 index를 반환한다.
      find("문자열", "index");  //index부터 문자열을 탐색한다.
      find('문자');            //단일 문자를 처음부터 탐색한다.
                            
        문자열이 없을 경우 string::npos를 반환한다.
 
 
 str.erase( index, count );      //문자열의 index부터 count 만큼 값을 삭제
            s.erase(0, 5);
 
     erase( index );             //문자열의 index에 있는 값을 삭제
            s.erase(s.find(' '));
 
     erase( first, last );       //문자열의 first 부터 last까지 삭제
            s.erase(std::find(s.begin(), s.end(), ' '));
 */

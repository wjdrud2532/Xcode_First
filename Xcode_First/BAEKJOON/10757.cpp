//
//  10757.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/04/21.
//

#include <iostream>
#include <cstring>
#include <algorithm>        //std::reverse 를 사용하기 위함

using std::cin;
using std::cout;
using std::endl;
using std::string;

string FillZero(string BigSize, string SmallSize)
{
    string C;
    for(int i = 0; i < BigSize.size() - SmallSize.size(); i ++)
        C += '0';
    return C + SmallSize;
}

int main()
{
    string A, B;
    
    cin >> A >> B;
    
    (A.size() > B.size()) ? B = FillZero(A, B) : A = FillZero(B, A);
    
    //cout << A << "\n" << B << endl;               //남은 자리수 0으로 채운 값 출력
    //------------------------------------------------------------
    //빈자리수 0으로 만들기 가능
    
    bool HasCarry = false;          //올림 수 판별
    string Sum;                     //결과
    int Length = (int)A.size();     //A, B 모두 자리수는 같음. 그 크기만큼 반복
    
    
    for(int i = 0; i < Length; i ++)
    {
        string tempSum;                                     //올림수 판별을 위한 임시 string
        int temp = A.back() - '0' + B.back() - '0';         //A 와 B의 마지막 부분(char)형에 - '0'을 하여 int 형에 맞게 계산
        
        if(HasCarry == true)            //이전 결과에 올림수가 있었다면
        {
            temp ++;                    //계산식에 + 1을 함
            HasCarry = false;           //다시 false로 초기화
        }
        
        tempSum = std::to_string(temp); //임시 string tempSum에 int형 temp를 string형으로 변환 수 삽입
                                        //바로 계산해서 삽입하는건 안됨 잘 모르겠음 -------------------------------<<<<<<<<
        if(tempSum.size() > 1)      //자리수가 1이상이라면 즉, 계산 결과에 올림수가 있다면
        {
            HasCarry = true;
            tempSum = tempSum.back();   //올림수를 판별했으니 (앞의 값은 무조건 1) back의 부분만 들고간다.
        }
        
        Sum += tempSum;         //기존 Sum에 붙여준다.
        
        A.pop_back();       //계산한 값을 삭제
        B.pop_back();
    }
        
    if(HasCarry == true)        //자리수를 넘어선 올림값이 존재할 경우 1을 string에 추가한다.
        Sum += '1';
    
    std::reverse(Sum.begin(), Sum.end());       //거꾸로 입력된 string Sum을 뒤집어준다.
    cout << Sum;        //출력
}

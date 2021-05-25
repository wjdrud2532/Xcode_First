//
//  1904.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/05/25.
//

#include <iostream>
//피보나치와 동일하다
using std::cin;
using std::cout;

int N;
int arr[1000001] = {0, 1, 2, };     //최대크기

void dp()
{
    long long temp;
    for(int i = 3; i <= N; i ++)    //2까지는 정해둠
    {
        temp = 0;
        temp = arr[i - 1] + arr[i - 2];
        arr[i] = temp % 15746;      //값을 15746으로 나눈다.
    }
}

int main()
{
    cin >> N;
    
    dp();
    
    cout << arr[N];
}

/*
 #include <iostream>
#include <cstring>
#include <algorithm>

using std::string;
using std::cin;
using std::cout;

string arr[1000001] = {"0", "1", "2", };
int N;


string FillZero(string BigSize, string SmallSize)
{
    string C;
    for(int i = 0; i < BigSize.size() - SmallSize.size(); i ++)
        C += '0';
    return C + SmallSize;
}

string PlusStr(string str1, string str2)
{
    (str1.length() > str2.length()) ? str2 = FillZero(str1, str2) : str1 = FillZero(str2, str1);
    
    bool HasCarry = false;          //올림 수 판별
    string Sum;                     //결과
    int Length = (int)str1.size();     //A, B 모두 자리수는 같음. 그 크기만큼 반복
    
    
    for(int i = 0; i < Length; i ++)
    {
        string tempSum;                                     //올림수 판별을 위한 임시 string
        int temp = str1.back() - '0' + str2.back() - '0';         //A 와 B의 마지막 부분(char)형에 - '0'을 하여 int 형에 맞게 계산
        
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
        
        str1.pop_back();       //계산한 값을 삭제
        str2.pop_back();
    }
        
    if(HasCarry == true)        //자리수를 넘어선 올림값이 존재할 경우 1을 string에 추가한다.
        Sum += '1';
    
    std::reverse(Sum.begin(), Sum.end());       //거꾸로 입력된 string Sum을 뒤집어준다.
    return Sum;

}

string makeTwo(int N)
{
    if(N == 1)
        return arr[1];
    else if(N == 2)
        return arr[2];
    
    if(arr[N].length() != 0)
        return PlusStr(arr[N - 1], arr[N - 2]);
    else
        arr[N] = PlusStr(makeTwo(N - 1), makeTwo(N - 2));
    
    
    return arr[N];
}
//if N == 3, then 100 001 111                   3
//if N == 4, then 1111 1100 0011 1001 0000      5
//if N == 5, then 11111 11100 11001 10011 00111 8
//                10000 00100 00001
//if N == 6, then 111111                        13
//                111100 111001 110011 100111 001111
//                110000 100100 100001 001001 000011 001100
//                000000
int main()
{
    cin >> N;
    
    cout << makeTwo(N);
}
*/

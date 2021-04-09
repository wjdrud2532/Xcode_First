//
//  3052.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/04/09.
//

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

//나머지들을 문자열로 받아서 같은게 있는지 비교 가능한가? -> 자리수가 2자리가 되면 안됨
//char 배열은? -> int 배열과 같다

int main()
{
    int Mod[10];        //나머지를 담을 배열
    int Modcount = 0;   //나머지 개수 count
    int N, temp;              //입력받을 N, 임시 나머지
    bool hasMod = false;
    
    cin >> N;
    temp = N % 42;
    Mod[Modcount++] = temp;             //처음 값을 입력 받음
    
    for(int i = 1; i < 10; i ++)        //1~9 까지 9번 반복
    {
        cin >> N;
        temp = N % 42;
        
        for(int j = 0; j < Modcount; j ++)  //나머지의 개수만큼 반복, 1부터 시작
        {
            if(temp == Mod[j])
            {
                hasMod = true;              //같은 나머지가 있을 경우 true로 바꿔줌
                //cout << "truetruetruetruetruetruetruetrue" << endl;
            }
        }
        
        if(hasMod == false)                 //같은 나머지가 없을 경우
        {
            Mod[Modcount++] = temp;         //++ 하고 새로운 값을 저장
        }
        
        hasMod = false;                     //다시 false로 최기화
    }
    
//    for(int i = 0; i < Modcount; i ++)
//    {
//        cout << i + 1 << " " << Mod[i] << endl;
//    }
    
    cout << Modcount ;
}


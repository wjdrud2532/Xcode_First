//
//  4673_시간줄이는걸로다시풀어보기.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/04/14.
//


#include <iostream>
#include <array>

using std::cin;
using std::cout;
using std::endl;

//int SelfNumber(void)
//{
//
//}

int d(int i)    //비트연산으로는?
{
    int Sum = i;
    
    Sum += i / 1000;
    i %= 1000;
    Sum += i / 100;
    i %= 100;
    Sum += i / 10;
    i %= 10;
    Sum += i / 1;
    i %= 1;
    
    return Sum;
}

int main() {
    
    std::array<int, 10000> arr;
    cout << 1 << "\n" << 3 << "\n"  << 5 << "\n" << 7 << "\n" << 9 << "\n" ;
    
    for(int i = 2; i < arr.size() -1; i ++)
    {
        arr[i] = i;
    }
    
    for(int i = 10; i < arr.size() -1; i ++)
    {
        if(d(i) < arr.size())
            arr[d(i)] = 0;
    }
    
    for(int i = 20; i < arr.size() - 1; i ++)
        if(arr[i] != 0)
            cout << arr[i] << endl;
    

}

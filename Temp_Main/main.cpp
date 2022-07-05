#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::abs;


/*
 1/1 1      1*1
 1/2 2
 
 1/3 6      3*2
 1/4 7
 
 1/5 15     5*3
 1/6 16
 
 1/7 28     7*4
 1/8 29
 
 n*m 보다 작으면 차례로 뺀다
 n*m 보다 크다면 차례로 더한다
 예를들어 주어진 값의 범위가 7~15라면 15에서부터 하나씩 빼가며 값을 찾는다 (m의 값을 줄여나가고 n의 값을 키워간다)
 
 본인 것을 포함해 n개의 값만 가지고 그 이후에는 n을 1 빼야 한다
 */

int main()
{
    int n = 1, m = 1;
    int input;
    int temp;
    
    bool IsUp = false;
    
    cin >> input;
    
    for(; input >= (n * m) + 1;)
    {
        n += 2;
        m ++;
    }
    
    temp = n * m;
    
//    if(input < n * m)
//    {
//        IsUp = true;
//        n --;
//    }
    
//    cout << n << " " << m << "\n";
//    cout << 1 << " " << n << "\n";
//    cout << n * m << "\n";
    
    temp = abs(input - temp);
    
//    cout << temp << "\n";
    
    if(temp >= n)
    {
        temp = temp - (n - 1);
        cout << n - temp << "/" << temp << "\n";
    }
    else
    {
    cout << 1 + temp << "/" << n - temp << "\n";
    }
    
//    for(int i = 0; i < )
    
    return 0;
}

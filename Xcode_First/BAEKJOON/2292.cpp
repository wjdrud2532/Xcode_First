//
//  2292.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/04/17.
//

#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    /*
     1 = 1              1
     2 ~ 7 = 2          6   +5
     8 ~ 19 = 3         12  +6
     20 ~ 37 = 4        18  +6
     38 ~ 61 = 5        24  +6
     
     아래쪽의 방법이 더 간단하고 명료하다.
     */
    int N;
    int Visit = 2;
    cin >> N;
    
    if(N == 1)
        Visit = 1;
    else if(N <= 7)
        Visit = 2;
    else
    {
        int temp = 12;
        int temp2 = 7;
        while(1)
        {
            if(temp2 < N && N <= temp2 + temp )
            {
                Visit ++;
                break;
            }
            else
            {
                temp2 += temp;
                temp += 6;
                Visit ++;
            }
        }
    }
    
    cout << Visit;

     //----------------------------------------------------------------------
    /*
    int n, i = 0;
    cin >> n;
        n--;
        while(1)
        {
            n -= i * 6;
            i++;
            if (n <= 0)
                break;
        }
    cout << i;
        return 0;
    
     */
}

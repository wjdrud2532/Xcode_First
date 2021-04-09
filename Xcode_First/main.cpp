#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int Mod[10];
    int Modcount = 0;
    bool hasMod = false;
    int N, temp;
    
    cin >> N;
    Mod[Modcount] = N % 42;
    
    for(int i = 1; i < 10; i ++)        //이미 하나 입력했으니까
    {
        cin >> N;
        temp = N % 42;
        
        //cout << N << " % " << "42 = " << temp << endl;
        
        for(int j = 0; j < 10; j ++)     //맨 마지막이 다르면 10으로 끝나니까
        {
            if(temp == Mod[Modcount])
                {
                    hasMod = true;      //같은 나머지가 존재한다면 true로 바꿔준다.
                }
        }
        if(hasMod == false)             //같은 나머지가 없다면
        {
            Modcount ++;
            //cout << temp << " " << endl;
            Mod[Modcount] = temp;       //새로운 나머지를 추가하고
            
        }
        hasMod = false;             //false로 초기화한다.
    }
    
    for(int i = 0; i < Modcount; i ++)
    {
        cout << "Mod" << i << " " << Mod[Modcount] << endl;
    }
    
    cout << Modcount << endl;
}



#include <iostream>


using std::cin;
using std::cout;
using std::string;


bool Alpha[26] = {false, };
int cnt = 0;


void FindGroupNumber(string str)
{
    std::fill_n(Alpha, 25, false);
    
    for(int i = 0; i < str.size(); i ++)
    {
        int tempnum = str[i] - 'a';
        
        if(Alpha[tempnum] == true)
            return;
        
        else
        {
            Alpha[tempnum] = true;
            
            for(; i < str.size(); i ++)
            {
                if(str[i] != str[i + 1])
                {
                    i ++;
                    break;
                }
            }
        }
    }

    cnt ++;
    return;
}


int main()
{
    int num = 0;
    cin >> num;


    string str;


    for(int i = 0; i < num; i ++)
    {
        cin >> str;
        FindGroupNumber(str);
    }

    cout << cnt;
}


#include <iostream>

using std::cin;
using std::cout;
using std::string;

bool Alpha[26] = {
    false,
};
int cnt = 0;

bool FindGroupNumber(string str)
{
    std::fill_n(Alpha, 26, false);

    for (int i = 0; i < str.size(); i++)
    {
        int tempnum = str[i] - 'a';

        if (Alpha[tempnum] == true)
            return false;

        else
        {
            Alpha[tempnum] = true;

            for (; i < str.size(); i++)
            {
                if (str[i] != str[i + 1])
                {
                    break;
                }
            }
        }
    }

    //cnt++;
    return true;
}

int main()
{
    int num = 0;
    cin >> num;

    string str;

    for (int i = 0; i < num; i++)

    {
        cin >> str;
        if(FindGroupNumber(str))
            cnt ++;
    }

    cout << cnt;
}
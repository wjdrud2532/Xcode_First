#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s, boom;

    stack<char> stack;

    cin >> s >> boom;


    for(int i = 0; i < s.length(); i ++)
    {
        /*
         * 문자열을 순서대로 폭탄문자열과 비교한다
         * 같다면 폭탄문자열의 끝까지 비교하고
         * 비교 하다가 중간에 달라진다면 지금까지 모았던 값을 전부 스택에 추가한다(임시 변수 생성 필요)
         */

        if (s[i] == boom[0])
        {
            string tempS;
            tempS = boom[0];

            bool IsBoom = true;
            for(int j = 1; j < boom.size(); j ++)
            {

                if(s[i + j] == boom[j])
                {
                    tempS += boom[j];
                }
                else
                {
                    i += j;
                    IsBoom = false;
                    break;
                }
            }

            if(IsBoom)
                tempS = "";

            for(int j = 0; j < tempS.size(); j ++)
            {
                stack.push(tempS[j]);
            }

            //뒤쪽으로 폭탄 있는지 확인
            if(stack.top() == boom[boom.size() - 1])
            {

            }
        }
        else
        {
            stack.push(s[i]);
        }


    }

    //마지막으로 폭탄 있는지 다시 확인
    //역으로 탐색




}
#include <iostream>
#include <algorithm>
#include <queue>

using std::cin;
using std::cout;
using std::ios_base;
using std::priority_queue;

int main()
{
    std::ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    priority_queue< int, std::vector<int>, std::greater<int> > Q;
    
    int temp;
    for(int i = 0; i < N; i ++)
    {
        cin >> temp;
        if(temp == 0)
        {
            if(Q.empty())
                cout << "0\n";
            else
            {
                cout << Q.top() << "\n";
                Q.pop();
            }
        }
        else
        {
            Q.push(temp);
        }
        
    }
}

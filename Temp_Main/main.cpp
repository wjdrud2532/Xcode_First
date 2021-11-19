#include <iostream>
#include <queue>

using std::cout;
using std::cin;

using std::queue;

#define Max 500000;

int main()
{
    int N;
    queue<int> Q;
    cout << "aaa\n";

    cin >> N;
    
    for(int i = 1; i <= N; i ++)
    {
        Q.push(i);
    }
    
    while (Q.size() != 1)
    {
        cout << Q.front() << "\n";
        Q.pop();
        Q.push(Q.front());
        Q.pop();
    }
    
    
    cout << Q.front();
    //a
}

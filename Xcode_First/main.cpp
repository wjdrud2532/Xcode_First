#include <iostream>
#include <stack>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    std::stack<int> MyStack;
    int N, M, V;    //정점의 개수, 간선의 개수, 탐색을 시작할 정점의 번호
    
    cin >> N >> M >> V;
    
    int DFS[2][M];
    
    for(int i = 0; i < M; i ++)
    {
        cin >> DFS[0][i] >> DFS[1][i];
    }
    
    
    
    
    
    
    for(int i = 0; i < M; i ++)
    {
        cout << DFS[0][i] << " " << DFS[1][i] << endl;
    }
    
}

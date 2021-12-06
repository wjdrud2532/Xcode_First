#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::ios_base;
using std::vector;

vector<int> Tree[101];
bool IsVisit[101] = {0, };
int Count = 0;

int dfs(int x)
{
    if(IsVisit[x] == false)
    {
        IsVisit[x] = true;
        
        for(int i = 0; i < Tree[x].size(); i ++)
        {
            int temp = Tree[x][i];
            
            if(IsVisit[temp] == false)
            {
                dfs(temp);
                Count ++;
            }
        }
    }
    
    return 0;
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    int N, Connect;
    
    cin >> N >> Connect;
    
    int temp1, temp2;
    for(int i = 0; i < Connect; i ++)
    {
        cin >> temp1 >> temp2;
        Tree[temp1].push_back(temp2);
        Tree[temp2].push_back(temp1);
    }
    
    dfs(1);
    
    cout << Count << "\n";
    
    return 0;
}















/*
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::ios_base;
using std::vector;

int N, Connect, Count = 0;
bool IsVisit[100] = {0, };
vector< vector<int> > V;
vector<int> V2;

int Reverse(int x)
{
    if(IsVisit[x] == false)
    {
        if(x != 0)
            Count ++;
        IsVisit[x] = true;
    }
    
    if(V[x].size() == 0)
        return 0;
    
    else
    {
        for(int i = 0; i < V[x].size(); i ++)
        {
            Reverse(V[x][i]);
        }
    }
    
    return 0;
}

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);
    
    cin >> N >> Connect;
    
    for(int i = 0; i <= N; i ++)
        V.push_back(V2);
    
    int temp1, temp2;
    for(int i = 0; i < Connect; i ++)
    {
        cin >> temp1 >> temp2;
        
        //(temp1 < temp2) ? V[temp1 - 1].push_back(temp2 - 1) : V[temp2 - 1].push_back(temp1 - 1);
        V[temp1 - 1].push_back(temp2 - 1);
    }
    
    Reverse(0);
    
    cout << Count << "\n";
}

*/


/*
 #include <stdio.h>

 int main() {
     int com, pair, cnt = 0;
     scanf("%d", &com);
     scanf("%d", &pair);

     int graph[102][102] = { 0, };
     int done[102] = { 0, };
     int qu[102] = { 0, };
     int s = 0, t = 0;

     for (int i = 0; i < pair; i++) {
         int x, y;
         scanf("%d %d", &x, &y);
         graph[x][y] = 1;
         graph[y][x] = 1;
     }

     qu[t++] = 1;
     done[1] = 1;

     while (s < t) {
         for (int col = 1; col <= com; col++) {
             if (graph[qu[s]][col] == 1) {
                 if (done[col] != 1) {
                     cnt++;
                     done[col] = 1;
                     qu[t++] = col;
                 }
             }
         }
         s++;
     }
     printf("%d\n", cnt);
     return 0;
 }
 */

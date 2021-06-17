#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

using std::cin;
using std::cout;
using std::ios_base;
using std::string;
using std::vector;
using std::pair;

string temp1, temp2;

int N, M;
int arr[31];
int Visit[101];

void dfs(int count, int num)
{
    if(count == M)
    {
        for(int i = 0; i < M; i ++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    
    for(int i = num; i <= N; i ++)
    {
        if(!Visit[i])
        {
            Visit[i] = true;
            arr[count] = i;         //4가 될때까지 N에 i를 저장
            dfs(count + 1, ++num);
            Visit[i] = false;
        }
    }
}

bool isEqual(const pair<string, int>& element)
{
    return element.first ==  temp2;
}


int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T;
    int ClothesNum;
    vector< pair<string, int> > P;
    
    cin >> T;
    
    
    for(int i = 0; i < T; i ++)
    {
        cin >> ClothesNum;
        for(int j = 0; j < ClothesNum; j ++)
        {
            cin >> temp1 >> temp2;
            auto it = std::find_if( P.begin(), P.end(), isEqual );
            
            if(it != P.end())       //있을 경우
                it->second ++;
            
            else                    //없을 경우
                P.push_back(std::make_pair(temp2, 1));
        }
        
        int arr[P.size()];
        int Visit[P.size()];
        
        
        P.clear();
        
    }
    /*
     1
     2
     3
     4
     12
     13
     14
     23
     24
     34
     123
     124
     134
     234
     1234
     */
}


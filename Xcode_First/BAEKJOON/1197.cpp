//
//  1197.cpp
//  Xcode_First
//
//  Created by 한정경 on 2023/10/05.
//

// 크루스칼 알고리즘, 최소 스패닝 트리

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int V, E, minValue;
int parent[100001] = {0, };
vector<tuple<int, int, int>> v;

int findParent(int);

void unionV(int num1, int num2) // 두 노드의 부모를 합친다
{
    num1 = findParent(num1);
    num2 = findParent(num2);
    
    if(num1 != num2)           // 각 노드의 부모가 다를 경우 num1으로 합친다.
        parent[num2] = num1;
}

int findParent(int num)
{
    if(parent[num] == num)  // 노드의 부모가 자기 자신일 경우 자신 반환
        return num;
    else                    // 연결된 다른 부모를 계속 타고 이동한다
        return parent[num] = findParent(parent[num]);
}


bool isSameParent(int num1, int num2)
{
    num1 = findParent(num1);
    num2 = findParent(num2);
    
    if(num1 == num2)
        return true;
    else
        return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> V >> E;
    for(int i = 0; i < E; i ++)
    {
        int num1, num2, cost;
        cin >> num1 >> num2 >> cost;
        
        v.push_back({cost, num1, num2});
    }
    
    sort(v.begin(), v.end());   // 모든 간선 오름차순 정렬
    
    for(int i = 1; i <= V; i ++)    // 정점 개수만큼 반복
    {                               // 부모 노드 초기화
        parent[i] = i;
    }
    
    for(int i = 0; i < E; i ++) // 간선 개수만큼 반복
    {
        int num1 = get<1>(v[i]);
        int num2 = get<2>(v[i]);
        
        if(isSameParent(num1, num2) == false)   // 두 정점이 연결되어 있지 않을 경우
        {
            unionV(num1, num2);         // 연결 후
            minValue += get<0>(v[i]);   // 최소 가중치 추가 (오름차순 정렬되어 있으므로)
        }
    }
    
    cout << minValue << "\n";
    
    return 0;
}


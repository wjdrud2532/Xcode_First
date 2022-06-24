//
//  1655.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/08/03.
//

#include <iostream>
#include <algorithm>
#include <queue>

using std::cin;
using std::cout;
using std::ios_base;
using std::priority_queue;

/*

 */
int main()
{
    std::ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    priority_queue<int> maxQ;     //최대힙
    priority_queue< int, std::vector<int>, std::greater<int> > minQ;   //최소힙
    cin >> N;
    
    int temp;
    
    for(int i = 0; i < N; i ++)
    {
        cin >> temp;
        if(maxQ.size() > minQ.size())
            minQ.push(temp);
        else
            maxQ.push(temp);

        if(maxQ.size() > 0 && minQ.size() > 0)
        {
            if(maxQ.top() > minQ.top())
            {
                int temp1, temp2;
                temp1 = maxQ.top();
                temp2 = minQ.top();
                
                maxQ.pop();
                maxQ.push(temp2);
                
                minQ.pop();
                minQ.push(temp1);
            }
        }
        
        cout << maxQ.top() << "\n";
    }
    

}


//
//  1927.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/08/02.
//

#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::ios_base;

                            //최소힙
int Minheap[100001];        //문제에서의 최고 크기 100000
int heapsize = 0;

void push(int x)
{
    Minheap[++heapsize] = x;
    
    int child = heapsize;
    int parent = child / 2;
    
    while(child > 1 && Minheap[parent] > Minheap[child])
    {
        std::swap(Minheap[parent], Minheap[child]);
        child = parent;
        parent = child / 2;
    }
}

int pop()
{
    if(heapsize == 0)
        return 0;
    else
    {
        int result = Minheap[1];
        
        std::swap(Minheap[1], Minheap[heapsize]);
        heapsize --;
        
        int parent = 1;
        int child = parent * 2;
        
        if(child + 1 <= heapsize && Minheap[child] > Minheap[child + 1])
            child ++;
        
        while(child <= heapsize && Minheap[parent] > Minheap[child])
        {
            std::swap(Minheap[parent], Minheap[child]);
            
            parent = child;
            child = child * 2;
            
            if(child + 1 <= heapsize && Minheap[child] > Minheap[child + 1])
                child ++;
            
        }
        return result;
    }
}

int main()
{
    std::ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    
    int temp;
    for(int i = 0; i < N; i ++)
    {
        cin >> temp;
        if(temp == 0)
            cout << pop() << "\n";
        else
            push(temp);
    }
}


/*
 stl을 활용한 최소힙 4ms 정도 더 느리다
 
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

 */

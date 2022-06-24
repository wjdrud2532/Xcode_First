//
//  11279.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/08/01.
//우선순위 큐 사용 문제

#include <iostream>
#include <algorithm>
#include <queue>        //큐

using std::cin;
using std::cout;
using std::ios_base;
using std::priority_queue;  //우선순위 큐

int main()
{
    std::ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    priority_queue<int> Q;
    
    cin >> N;
    
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


/*
 직접 구현한 최대힙
 
 #include <iostream>
 #include <algorithm>

 using std::cin;
 using std::cout;
 using std::ios_base;

 int Maxheap[100001];        //문제에서의 최고 크기 100000
 int heapsize = 0;

 void push(int x)
 {
     Maxheap[++heapsize] = x;    //처음에 가장 뒤쪽에 값을 넣는다.
     
     int child = heapsize;       //자식과 부모의 인덱스를 설정한다
     int parent = child / 2;
     
     //    부모의 시자기 1이기 때문에 자식은 최대 2까지만
     //최대 힙이므로 부모의 값이 더 커야한다. 하지만 부모의 값이 더 작다면
     while(child > 1 && Maxheap[parent] < Maxheap[child])
     {
         std::swap(Maxheap[parent], Maxheap[child]); //둘의 위치를 바꾸고
         child = parent;         //인덱스를 다시 설정한다.
         parent = child / 2;
     }
 }

 int pop()
 {
     if(heapsize == 0)
         return 0;
     else
     {
         int result = Maxheap[1];    //가장 최상위 부모를 출력하는 것이므로 따로 저장해둔다.
         
         std::swap(Maxheap[1], Maxheap[heapsize]);   //마지막과 위치를 바꾸고
         heapsize --;                                //마지막을 지운다.
         
         int parent = 1;             //이제 처음부터 다시 최대순으로 정렬을 해야 하므로 1부터 시작
         int child = parent * 2;     //2부터 시작
         
         //   오른쪽 자식이 존재하고           둘 중 더 큰 값으로 간다, 오름차순 정렬이므로
         if(child + 1 <= heapsize && Maxheap[child] <= Maxheap[child + 1])
             child ++;       //오른쪽 자식으로 이동한다.
         
         //          최대 힙 크기 안에서         부모의 크기가 더 작다면
         while(child <= heapsize && Maxheap[parent] < Maxheap[child])
         {
             //둘의 위치를 바꾸고
             std::swap(Maxheap[parent], Maxheap[child]);
             
             parent = child;         //인덱스를 재설정하고
             child = child * 2;
             
             //더 큰 값을 찾는다.
             if(child + 1 <= heapsize && Maxheap[child] <= Maxheap[child + 1])
                 child ++;
             
         }
         //정렬 완료 후 임시로 저장해두었던 최대값을 반환한다.
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
         if(temp == 0)           //0이라면 최대값을 반환하고
             cout << pop() << "\n";
         else                    //그렇지 않다면 저장하고 정렬한다.
             push(temp);
     }
 }

 */

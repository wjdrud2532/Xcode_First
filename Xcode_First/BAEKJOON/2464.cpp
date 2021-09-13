//
//  2464.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/08/03.
//
/*
 절대값이 작은 순서대로 입력을 받는다.
 
 만약 절대값이 같다면 음수인 값이 top에 가도록 정렬한다.
 
 양수에 최대힙
 음수에 최소힙을 저장하여 비트연산으로 계산하는 것도 가능하다.
 */

#include <iostream>
#include <algorithm>

using std::cin;
using std::cout;
using std::ios_base;
using std::swap;

int absheap[100001];
int Hsize = 0;

int abs(int x)
{
    if(x < 0)
        return x * -1;
    else
        return x;
}

void push(int x)
{
    absheap[++Hsize] = x;       //1부터 시작
    
    int child = Hsize;
    int parent = child / 2;
    
    while(child > 1)
    {
        //absoluteheap[parent] > absoluteheap[child]
        int temp1, temp2;
        
        temp1 = abs(absheap[parent]);
        temp2 = abs(absheap[child]);
        
        if(temp1 > temp2)        //절대값에 따른 오름차순, 입력 받은 값이 큰 경우
            swap(absheap[parent], absheap[child]);
        
        else if(temp1 == temp2)     //절대값이 같은 경우
            if(absheap[parent] > absheap[child])  //음수가 앞에 오도록 한다.
                swap(absheap[parent], absheap[child]);
        
        child = parent;
        parent = child / 2;
    }
}

int pop()
{
    if(Hsize == 0)
        return 0;
    else
    {
        int result = absheap[1];
        
        swap(absheap[1], absheap[Hsize]);
        Hsize --;
        
        int parent = 1;
        int child = parent * 2;
        
        //절대값, 음수와 양수를 구별하여 정렬해야 한다.
        int temp1, temp2;
        
        temp1 = abs(absheap[child]);
        temp2 = abs(absheap[child + 1]);
        
        //양쪽 자식이 모두 존재할 때, 절대값의 오름차순이므로 더 작은 쪽으로 간다.
        if(child + 1 <= Hsize)
        {
            if(temp1 > temp2)       //절대값이 작은 쪽으로 간다.
                child ++;
            else if(temp1 == temp2) //절대값이 같을 경우
                if(absheap[child] > absheap[child + 1])   //음수인 쪽으로 간다.
                    child ++;
        }
        
        temp1 = abs(absheap[parent]);
        temp2 = abs(absheap[child]);
        
        while(child <= Hsize)
        {
            
            temp1 = abs(absheap[child]);
            temp2 = abs(absheap[child + 1]);
            
            //양쪽 자식이 모두 존재할 때, 절대값의 오름차순이므로 더 작은 쪽으로 간다.
            if(child + 1 <= Hsize)
            {
                if(temp1 > temp2)       //절대값이 작은 쪽으로 간다.
                    child ++;
                else if(temp1 == temp2) //절대값이 같을 경우
                {
                    if(absheap[child] > absheap[child + 1])   //음수인 쪽으로 간다.
                        child ++;
                }
            }
            
            temp1 = abs(absheap[parent]);
            temp2 = abs(absheap[child]);
            
            //absoluteheap[parent] > absoluteheap[child])
            if(temp1 > temp2)   //절대값이 작은 쪽으로
                swap(absheap[parent], absheap[child]);
            
            else if(temp1 == temp2)                     //절대값이 같다면
                if(absheap[parent] > absheap[child])   //음수인 쪽으로 간다.
                    std::swap(absheap[parent], absheap[child]);
            
            parent = child;
            child = child * 2;
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
            cout << "output : " << pop() << "\n";
        else
            push(temp);
    }
}




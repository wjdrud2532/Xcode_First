#include <iostream>

int main(int argc, const char * argv[]) {
   
    int N, Count = 0;
    int F, B, Sum, Temp;
    
    std::cin >> N;
    
    Temp = N;
    
    do
    {
        F = N / 10;
        B = N % 10;
        
        Sum = F + B;
        
        if(Sum < 10)
        {
            N = (B * 10) + Sum;
        }
        else
            N = (B * 10) + (Sum % 10);
        
        //std::cout << N << "\n";
        Count ++;
    }while(Temp != N);
    
    std::cout << Count;
    
    return 0;
}


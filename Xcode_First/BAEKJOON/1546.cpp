#include <iostream>

int main(int argc, const char * argv[]) {
    
    int N;
    int Max;
    double Sum, Average;
    
    std::cin >> N;
    
    double Num[N];
    
    std::cin >> Num[0];
    Max = Sum = Num[0];
    
    for(int i = 1; i < N; i ++)
    {
        std::cin >> Num[i];
        Sum += Num[i];
        
        if(Num[i] > Max)
            Max = Num[i]; //
    }
    
    Average = Sum/N;
    Sum = 0;
    
    for(int i = 0; i < N; i ++)
    {
        Num[i] = Num[i] / Max * 100;
        Sum += Num[i];
    }
    
   // std::cout.setf(std::ios::fixed);
    std::cout.precision(10);
    Average = Sum/N;
    
    std::cout << Average << std::endl;
    
    
    
    
    return 0;
}


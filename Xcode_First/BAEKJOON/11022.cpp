#include <iostream>

int main(int argc, const char * argv[]) {
   
    int N;
    int A, B;
    
    std::cin >> N;
    
    for(int i = 1; i <= N; i ++)
    {
        std::cin >> A >> B;
        std::cout << "Case #" << i << ": " << A << " + " << B << " = " << A + B << "\n" ;
    }
    
    return 0;
}


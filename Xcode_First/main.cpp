#include <iostream>

int main()
{
    int A, B, C;
    int A1, A2, A3;
    int B1, B2, B3;
    
    std::cin >> A;
    std::cin >> B;
    
    C = A * B;
    
    B1 = B / 100;
    B %= 100;
    B2 = B / 10;
    B %= 10;
    B3 = B / 1;
    
    A1 = A * B3;
    A2 = A * B2;
    A3 = A * B1;
    
    std::cout << A1 << std::endl;
    std::cout << A2 << std::endl;
    std::cout << A3 << std::endl;
    std::cout << C << std::endl;
    
    return 0;
    
}

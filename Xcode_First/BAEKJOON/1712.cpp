#include <iostream>

int main(int argc, const char * argv[]) {
    
    int A, B, C;
    
    std::cin >> A >> B >> C;
    
    if(B < C)
    {
        std::cout << A/(C - B) + 1;
    }
    else
        std::cout << "-1";
    
    return 0;
}


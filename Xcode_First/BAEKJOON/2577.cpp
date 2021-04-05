#include <iostream>

int main(int argc, const char * argv[]) {
   
    int A, B, C, Result;
    int str[10] = {0, };
    
    std::cin >> A >> B >> C;
    
    Result = A * B * C;
    
    int temp;
    
    while(Result > 0)
    {
        temp = Result % 10;
        Result /= 10;
        str[temp] ++;
        //std::cout << temp << std::endl;
    }
    
    for(int i = 0; i < 10; i ++)
    std::cout << str[i] << std::endl;
    
    return 0;
}


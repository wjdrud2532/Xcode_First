#include <iostream>

int main(int argc, const char * argv[]) {
   
    int C;
    int N, Sum, Average, Count;
    
    std::cin >> C;
    
    for(int i = 0; i < C; i++)
    {
        Sum = 0;
        Count = 0;
        std::cin >> N;
        int str[N];
        
        for(int j = 0; j < N; j ++)
        {
            std::cin >> str[j];
            Sum += str[j];
        }
        
        Average = Sum / N;
        
        for(int j = 0; j < N; j ++)
        {
            if(str[j] > Average)
                Count ++;
        }
        std::cout.setf(std::ios::fixed);        //소수점 자리를 고정시킨다 == std::cout << fixed; (같은 의미지만 안됨)
                                                //해제하기 위해선 "cout.unsetf(std::ios::fixed); 를 사용하면 된다.
        std::cout.precision(3);                 //소수점 최대 출력 자리수를 정한다 => fixed와 같이 쓰면 고정 3이됨
                                                //std::cout << N << " " << Average << " " << Count << " \n ";
        std::cout << Count / (double)N * 100 << "%" << std::endl;
        
    }
    
    return 0;
}


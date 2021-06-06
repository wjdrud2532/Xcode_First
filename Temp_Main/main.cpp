#include <iostream>
#include <algorithm>
#include <cmath>


using std::cin;
using std::cout;
using std::ios_base;
using std::max;

int Max = 0;
int N;
int arr[246913] = {0,};    //이전까지의 소수 개수의 합
//     0 1 2 3 4 5 6 7 8 9 10
bool PrimeArray[2469130];

void Eratos(int n = 2469130)
{
    /*  만일 n이 1보다 작거나 같으면 함수 종료 */
      if (n <= 1) return;

      for (int i = 2; i <= n; i++)
          PrimeArray[i] = true;

      for (int i = 2; i * i <= n; i++)
      {
          if (PrimeArray[i])
          {
              for (int j = i * i; j <= n; j += i)
                  PrimeArray[j] = false;
              arr[i] = arr[i - 1] + 1;
          }
                  
          else
              arr[i] = arr[i - 1];
      }
}




int main() {
    
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    Eratos();
    
//    int temp;
//    cin >> temp;
//    for(int i = 1; i <= temp; i ++)
//    {
//        cout << PrimeArray[i] << " ";
//    }
//    cout << "\n";
//    for(int i = 1; i <= temp; i ++)
//    {
//        cout << arr[i] << " ";
//    }
    
    
    while(1)
    {
        cin >> N;
        
        if(N == 0)
            break;
        
        cout << arr[N * 2] - arr[N] <<"\n";
    }
    
    return 0;
}

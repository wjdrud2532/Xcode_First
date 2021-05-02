/* Templates
 
 
 
 #include <iostream>
 #include <cstring>
 #include <deque>
 #include <vector>
 #include <queue>
 #include <algorithm>

 using std::cin;
 using std::cout;
 using std::endl;
 using std::string;
 using std::vector;
 using std::queue;
 using std::ios_base;


 int main() {
     ios_base::sync_with_stdio(false);
     cout.tie(nullptr);
     cin.tie(nullptr);                     
     
    

 }

 
 
 
 */


/*
 
 #include <iostream>
 #include <utility>

 using std::cin;
 using std::cout;
 using std::endl;

 int main() {
     int num;
     int rank = 1;
     std::pair<int,int> arr[50];
     cin >> num;
     for(int i = 0; i < num; i++)
         cin >> arr[i].first >> arr[i].second;
     for(int i = 0; i < num; i++)
     {
         for(int j = 0; j < num; j++)
             if(arr[i].first < arr[j].first && arr[i].second < arr[j].second)
                 rank++;
         cout << rank << ' ';
         rank = 1;
     }
 }

 
 
 
 
 */

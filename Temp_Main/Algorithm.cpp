////using std::ios_base;
//
////ios_base :: sync_with_stdio(false);
////cin.tie(NULL);
////cout.tie(NULL);
//
//
///*
// int N;
// int max = 0;
// 
// 
// cin >> N;
// 
// pair<int, int> a;
// int Fmax = 0;
// int Smax = 0;
// a.first = 9;
// a.second = 9;
// vector<vector<pair<int, int>>> V1(100001, vector<pair<int, int>>(0, a));
// vector<pair<int, int>> V2;
// 
// for(int i = 0; i < N; i ++)
// {
// cin >> a.first >> a.second;
// 
// if(a.first > Fmax)
// Fmax = a.first;
// if(a.second > Smax)
// Smax = a.second;
// 
// V1[a.first].push_back(a);
// }
// 
// for(int i = 0; i <= Fmax; i ++)
// {
// while(!V1[i].empty())
// {
// cout << V1[i].back().first << " " << V1[i].back().second << "\n";
// V1[i].pop_back();
// }
// }
// //
// //    for(int i = 0; i < Fmax; i ++)
// //    {
// //        int count = 1;
// //        while(!V1[i].empty())
// //        {
// //            for(int j = V1[i].back().second; j < Smax; j ++)
// //            {
// //
// //            }
// //            cout << V1[i].back().first << " " << V1[i].back().second << "\n";
// //            V1[i].pop_back();
// //        }
// 
// */
//
//
///*
// #include <iostream>
// #include <cstring>
//
// using std::cin;
// using std::cout;
// using std::ios_base;
// using std::strlen;
// using std::strcpy;
//
// int tempn = 1;
// int tempm = 1;
//
// void divided(char* n, char* m, char* result)
// {
//     tempn = strlen(n);
//     tempm = strlen(m);
//     
//     //앞에 0이 있다면 모두 지운다
//     //최초로 0이 아닌 다른 값이 나왔을 때 그 부분부터 뒤의 값을 복사한다.
//     int nnum = 0, mnum = 0;
//     for(int i = 0; i < tempn; i ++)
//     {
//         if(n[i] == '0')
//             nnum ++;
//         if(n[i] != '0')
//             break;
//     }
//     for(int i = 0; i < tempm; i ++)
//     {
//         if(m[i] == '0')
//             mnum ++;
//         if(m[i] != '0')
//             break;
//     }
//     
//     char temp2[1001];
//     for(int i = nnum; i <= tempn + nnum; i ++)
//         temp2[i - nnum] = n[i];
//     for(int i = 0; i <= tempn - nnum; i ++)
//         n[i] = temp2[i];
//     
//     for(int i = mnum; i <= tempm + mnum; i ++)
//         temp2[i - mnum] = m[i];
//     for(int i = 0; i <= tempm - mnum; i ++)
//         m[i] = temp2[i];
//     
//     //최대 길이 값을 가지고 계산 횟수를 정한다
//     tempn = strlen(n);
//     tempm = strlen(m);
//     
//     //cout << tempn << " " << tempm << "\n";
//     
//     if(tempm < tempn)
//     {
//         char temp[1001];
//         strcpy(temp, m);    //m을 temp에 임시 복사(0을 넣어주기 위해)
//         
//         for(int i = 0; i < tempn - tempm; i ++) //m의 앞에 자리수 만큼 0을 넣는다
//             m[i] = '0';
//         
//         int tempnum = tempn - tempm;
//         for(int i = tempnum; i <= tempn; i ++)
//         {
//             m[i] = temp[i - tempnum];   //앞에 0을 빼고 나머지 값 다시 복사
//         }
//         //이러면 00...m...이 된다
//     }
//     
//     for (int i = tempn - 1, j = tempm - 1; i >= 0; i--, j--)
//     {                   //더 작은 자리수를 가진 m을 기준으로 한다
//         
//         n[i] = n[i] - m[i] + '0';
//         
//         if (n[i] < '0')     //값이 작을 경우
//         {
//             n[i - 1] --;    //윗 자리값에서 1을 뺀다(0이라면?) -> 이 과정을 반복할테니
//             //전체 n의 값이 m보다 크기만 하다면 상관없다.
//             n[i] += 10;
//         }
//     }
//     
//     
//     /*
//      여기서 계산할 때 마다 앞의 0을 모두 지워서 크기비교(크기가 같다면 가장 앞의 값 비교)를 통해 다음
//      계산이 가능한지 확인할까?
//      */
//     
// }
//
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cout.tie(nullptr);
//     cin.tie(nullptr);
//     
//     char n[1001];
//     char m[1001];
//     char result[1001];
//     int count = 0;
//     
//     cin >> n >> m;
//     
//     tempn = strlen(n);
//     tempm = strlen(m);
//     
//     /*
//      반복문으로 만들기
//      
//      같은 자리수 값이 n이 크다면 나누기를 진행하고
//      같은 자리수 값이 같다면 아래로 내려가고
//      같은 자리수 값이 m이 크다면 나누기를 못한다
//      */
//     
//     bool keepgo = true;
//     while(1)
//     {
//         bool candivided = true;
//         
//         if(tempn > tempm)
//             candivided = true;
//         else if(tempn < tempm)
//         {
//             candivided = false;
//             break;
//         }
//         else    //tempn >= tempm
//         {
//             for(int i = 0; i < tempn; i ++)
//             {
//                 if(n[i] > m[i])
//                     break;
//                 else if(n[i] == m[i])
//                     continue;
//                 else
//                 {
//                     candivided = false;
//                     keepgo = false;
//                     break;
//                 }
//             }
//         }
//         
//         if(!keepgo)
//             break;
//         
//         if(candivided)
//         {
//             divided(n, m, result);
//             
// //            cout << "n = ";
// //            for(int i = 0; i < strlen(n); i ++)
// //                cout << n[i];
// //            cout << "\n";
// //
// //            cout << "m = ";
// //            for(int i = 0; i < strlen(m); i ++)
// //                cout << m[i];
// //            cout << "\n";
//                 count ++;
//         }
//     }
//     
//     
//     cout << count << "\n";
//     
//     //출력시 앞의 0을 지워야함
//     bool Zero = true;
//     int zerocount = 0;
//     if(strlen(n) == 0)
//         cout << "0";
//     else
//     {
//         for (int i = 0; i < tempn; i++)
//         {
//             if(n[i] == '0' && Zero)
//             {
//                 zerocount ++;
//             }
//             else
//             {
//                 Zero = false;
//                 zerocount = i;
//                 break;
//             }
//         }
//         if(zerocount >= tempn)
//             cout << "0";
//         else
//             for(int k = zerocount; k < tempn; k ++)
//                 cout << n[k] << "";
//     }
//     cout << "\n";
//     
//     //system("pause");
//     return 0;
// }
//
//
//
// /*
//  이제 나눌 수 없을 때 까지 반복하는 것과
//  나눴을때 카운트하는 것을 넣으면 끝
//  
//  
//  
//  뺐을 때 남은 값들을 비교해야 하는데
//  n의 남은 자리수로 비교를 해야 하나?
//  
//  
//  */
//
// */

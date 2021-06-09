//using std::ios_base;

//ios_base :: sync_with_stdio(false);
//cin.tie(NULL);
//cout.tie(NULL);


/*
 int N;
 int max = 0;
 
 
 cin >> N;
 
 pair<int, int> a;
 int Fmax = 0;
 int Smax = 0;
 a.first = 9;
 a.second = 9;
 vector<vector<pair<int, int>>> V1(100001, vector<pair<int, int>>(0, a));
 vector<pair<int, int>> V2;
 
 for(int i = 0; i < N; i ++)
 {
 cin >> a.first >> a.second;
 
 if(a.first > Fmax)
 Fmax = a.first;
 if(a.second > Smax)
 Smax = a.second;
 
 V1[a.first].push_back(a);
 }
 
 for(int i = 0; i <= Fmax; i ++)
 {
 while(!V1[i].empty())
 {
 cout << V1[i].back().first << " " << V1[i].back().second << "\n";
 V1[i].pop_back();
 }
 }
 //
 //    for(int i = 0; i < Fmax; i ++)
 //    {
 //        int count = 1;
 //        while(!V1[i].empty())
 //        {
 //            for(int j = V1[i].back().second; j < Smax; j ++)
 //            {
 //
 //            }
 //            cout << V1[i].back().first << " " << V1[i].back().second << "\n";
 //            V1[i].pop_back();
 //        }
 
 */

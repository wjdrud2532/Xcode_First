//
//  18870.cpp
//  Xcode_First
//
//  Created by 한정경 on 2021/05/09.
//

#include <iostream>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::ios_base;
using std::vector;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    
    cin >> N;
    
    vector<int> V;
    vector<int> VC;
    
    for(int i = 0; i < N; i ++)
    {
        int temp = 0;
        cin >> temp;
        V.push_back(temp);
        VC.push_back(temp);
    }
    
    std::sort(VC.begin(), VC.end());
    
    VC.erase(unique(VC.begin(), VC.end()), VC.end());
    
    for(int i = 0; i < V.size(); i ++)
    {
        cout << std::lower_bound(VC.begin(), VC.end(), V[i]) - VC.begin() << " ";
    }
    
    return 0;
    
}
/*
 5
 2 4 -10 4 -9
 */

#include <iostream>
#include <vector>

using namespace std;

int T, N, num;
string temp;
vector<pair<string, int>> v;

bool isEqual(const pair<string, int>& element)
{
    return element.first == temp;
}

int main()
{
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);
        
    cin >> T;
        
    while(T--)
    {
        cin >> N;
        while(N--)
        {
            cin >> temp >> temp;
            auto it = find_if(v.begin(), v.end(), isEqual);     //
            
            if( it == v.end())
            {
                v.push_back(make_pair(temp, 1));
            }
            else
            {
                it->second ++;
            }
        }
        
        num = 1;
        for(int i = 0; i < v.size(); i ++)
        {
            num *= v[i].second + 1;     //공식 사용
        }
        
        cout << num - 1 << "\n";
        
        v.clear();
        
    }
    
    
    return 0;
}

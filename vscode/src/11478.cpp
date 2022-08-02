#include <iostream>
#include <cstring>
#include <algorithm>
#include <map>

using std::cin;
using std::cout;
using std::ios_base;

using namespace std;

void print_map(std::map<std::string, bool>& m) {
    for (std::map<std::string, bool>::iterator itr = m.begin(); itr != m.end(); ++itr) {
        std::cout << itr->first << " " << itr->second << std::endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    string S, sub;
    map<string, bool> M;
    
    cin >> S;
    
    for(int i = 1; i < S.length(); i ++)
    {
        for(int j = 0; j + i <= S.length(); j ++)
        {
            //i부터 끝까지
            //j의 개수만큼 잘라서 insert
            //j부터 i길이만큼 짤라서 복사
            sub = S.substr(j, i);
            //cout << i << " 번째 부터" << j << " 만큼 떨어진 값 추출 = " << sub << " " << i + j << "\n";
            M.insert(make_pair(sub, true));
        }
    }
    
    //print_map(M);
    
    cout << "입력된 map의 size = " << M.size() + 1 << "\n";
    
    /*
     string 에서 S의 총 길이가 5이므로
     1~5 까지
     1단위
     2단위
     3단위
     4단위로 확인
     그럼 이중 for문이 되서 시간초과 될 텐데
     
     */
    
    
    return 0;
}


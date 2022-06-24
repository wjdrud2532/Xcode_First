//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//int FindLoad(string arr[][], string IsVisit[][])
//{
//    int count = 0;
//
//    return count;
//}
//
//int main()
//{
//    int n, m;
//    int arr[100][100] = {0, };
//    int IsVisit[100][100] = {1, };  //항상 시작은 (0,0) 이므로
//
//    string str;
//    cin >> n >> m;
//
//    for (int i = 0; i < n; i ++)
//    {
//        cin >> str;
//
//        for (int j = 0; j < m; j ++)
//        {
//            arr[i][j] = str[j] - '0';
//        }
//    }
//
//    cout << FindLoad(arr, IsVisit) << "\n";
//
//
//
//
//    /*
//     최종 목적지는 우하단
//     이동할 수 있는 선택지가 2개 이상일 경우 분기를 저장해둔다 [dp]
//     오른쪽 -> 아래쪽 -> 위쪽 -> 왼쪽 순서대로 우선순위를 정한다.
//     이미 지나온 곳은 true로 해두어 다시 돌아가지 않도록 한다.
//     */
//
//}


#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    cout << a << endl;
}

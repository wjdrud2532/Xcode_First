//https://cryptosalamander.tistory.com/13

#include <iostream>
#include <cstring>
#include <utility>
#include <algorithm>

using std::cin;
using std::cout;
using std::endl;
using std::string;

                        //최선의 경우를 가지고 이것과 얼마나 다른지 비교하기 위해 선언한다.
string Black[8] = {
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW"
};
string White[8] = {
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB",
    "BWBWBWBW",
    "WBWBWBWB"
};

string Board[50];       //N이 최대 50이므로

int BW_cnt(int x, int y)
{
    int cnt = 0;
    for(int i = 0; i < 8; i ++)     //위에서 선언한 최선의 경우가 8 * 8이므로 8 번씩 반복한다.
    {
        for(int j = 0; j < 8; j ++)
        {
            if(Board[x + i][y + j] != Black[i][j])  //string의 배열이므로 [x + i] 부분은 한 줄 이고 [y + j] 부분은 그 한 줄에서 특정 문자를 가리키는 것이다.
                cnt ++;     //최선의 경우와 비교하여 값이 다르다면 cnt를 ++ 한다.
        }
    }
    return cnt;
}

int WB_cnt(int x, int y)
{
    int cnt = 0;
    for(int i = 0; i < 8; i ++)
    {
        for(int j = 0; j < 8; j ++)
        {
            if(Board[x + i][y + j] != White[i][j])
                cnt ++;
        }
    }
    return cnt;
}

int main()
{
    int min_val = 100000;
    
    std::pair<int, int> p1;     //굳이 pair를 써야하나 싶기도 하다  보기 편하라고 하는건가?
    
    cin >> p1.first >> p1.second;
    
    for(int i = 0; i < p1.first; i ++)
    {
        cin >> Board[i];        //입력 받음
    }
    
    for(int i = 0; i + 8 <= p1.first; i ++) // +8을 하는 이유는 아래서 사용하는 BW, WB_cnt가 8 * 8 탐색, 즉 현재로부터 + 8의 경우까지 탐색하기 때문이다
    {                                                                   // +8을 하지 않는다면 범위를 벗어나 오류가 난다.
        for(int j = 0; j + 8 <= p1.second; j ++)
        {
            int temp;
            temp = std::min(BW_cnt(i, j), WB_cnt(i, j));        // 둘 중 더 작은 값을 temp에 할당한다.
            if(temp < min_val)      //가장 작은 값이라면 다시 할당한다.
                min_val = temp;
        }
    }
    cout << min_val;
    return 0;
}

/*
https://avgle.com/video/R9ic9cl_Gce/juy-658-中文字幕-夫が紹介してくれた職場なのに-変態店長のセクハラで性感開発されたパート妻-宝田もなみ
https://avgle.com/video/Lb9papBm8pu/身代わり肉便器-射精しても射精しても終わらない絶倫極道オヤジとの10日間監禁生活-桃乃木かな
https://avgle.com/video/nPTUIUwAbUX/高清中文字幕-kimu-015-義理の娘に理性崩壊濡れ透けつるぺた変態調教-松本いちか
https://avgle.com/video/gpEDZDwGvDO/とろっとろに糸引くスケベな匂いの唾液をたっぷり飲ませてくれて-脳とチ-ポが快感に溺れるぐっちょり濃密エステサロン-根尾あかり
https://avgle.com/video/ltf5B58EI5P/高清中文字幕-miaa-098-和朋友说在哥哥的房间里有想看的av-结果喜欢的女孩也一起来玩的那一天-稻场流花-咲咲原凛
https://avgle.com/video/FDhCcCz7mCy/高清中文字幕-dasd-772-滑溜溜的润滑液巨乳摩擦润滑姐妹争相诱惑哥哥
https://avgle.com/video/WKBalaYDoaH/ボイン大好きしょう太くんのhなイタズラ-稲場るか-gvg-894
https://avgle.com/video/W3Ba_aOUia5/高清中文字幕-ebod-767-離家出走不良學生2人在我家炫耀巨乳
*/

#include <iostream>
#include <algorithm>

using std::ios_base;
using std::cin;
using std::cout;
using std::sort;

int N;
int arr[26][26];
bool isVisit[26][26] = { 0, };

//최대값의 절반에서 반올림 313
int Length[313];

int Lengthnum = 0;
int tempnum = 0;

void Find(int x, int y)
{
	if (0 <= x && 0 <= y)
		if (isVisit[x][y] == false)
			if (arr[x][y] == 1)
			{
				isVisit[x][y] = true;
				tempnum++;

				Find(x, y + 1);
				Find(x + 1, y);
				Find(x, y - 1);
				Find(x - 1, y);
			}
			else
				return;
		else
			return;
	else

		return;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	cin >> N;

	//입력
	//범위를 25로 했을 때 마지막 \n 초과로 틀렸다
	char temp[26];
	
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		for (int j = 0; j < N; j++)
		{
			arr[i][j] = temp[j] - '0';
		}
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			tempnum = 0;
			Find(i, j);

			if(tempnum != 0)
				Length[Lengthnum++] = tempnum;

			tempnum = 0;
		}
	}

	sort(Length, Length + Lengthnum);

	cout << Lengthnum << "\n";

	for (int i = 0; i < Lengthnum; i++)
		cout << Length[i] << "\n";
}


/*
#include <stdio.h>
#include <algorithm>
using namespace std;

int N,cnt=0;
int arr[25][25];

void dfs(int x,int y)
{
	int i,xx,yy;
	int dx[4]={0,0,1,-1};
	int dy[4]={1,-1,0,0};
	arr[x][y]=0;
	cnt++;
	for (i=0;i<4;i++)
	{
		xx=x+dx[i];
		yy=y+dy[i];
		if (xx>=0&&yy>=0&&xx<N&&yy<N&&arr[xx][yy]==1)
		{
			dfs(xx,yy);
		}
	}

}

int main()
{
	int i,j,s=0;
	int count[316];
	scanf("%d",&N);
	for (i=0;i<N;i++)
	{
		for (j=0;j<N;j++)
		{
			scanf("%1d",&arr[i][j]);
		}
	}
	for (i=0;i<N;i++)
	{
		for (j=0;j<N;j++)
		{
			if (arr[i][j]==1){
				dfs(i,j);
				count[s]=cnt;
				cnt=0;
				s++;
			}
		}
	}
	sort(count,count+s);
	printf("%d\n",s);
	for (i=0;i<s;i++)
	{
		printf("%d\n",count[i]);
	}
	return 0;
}
*/
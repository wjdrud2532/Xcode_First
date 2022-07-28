#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using std::cin;
using std::cout;
using std::ios_base;

using namespace std;




int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, count = 0, tempcnt;
	string temp;
	vector <string> arrN, arrM;

	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		arrN.push_back(temp);
	}

	for (int i = 0; i < M; i++)
	{
		cin >> temp;
		arrM.push_back(temp);
	}

	string temp1, temp2;
	bool isInclude;

	for (int i = 0; i < M; i++)
	{
		//비교해야할 단어들
		isInclude = false;
		temp1 = arrM[i];

		for (int j = 0; j < N; j++)
		{
			temp2 = arrN[j];

			if (temp1.length() == temp2.length())
			{
				tempcnt = 0;

				for (int k = 0; k < temp2.length(); k++)
				{
					if (temp1[tempcnt] == temp2[k])
					{
						tempcnt++;
						if (tempcnt == temp1.length())
							break;
					}
					else
					{
						tempcnt = 0;
					}
				}
				if (tempcnt == temp1.length())
					isInclude = true;

				if (isInclude == true)
				{
					count++;
					break;
				}
			}


		}
		//cout << temp1 << "    " << count << "\n";
	}

	cout << count << "\n";

	return 0;
}
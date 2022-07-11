#include <iostream>
#include <cstring>

using std::cin;
using std::cout;
using std::ios_base;
using std::string;

string Recursion(int start, int N)
{
	string temp = "";
	for (int i = 0; i < start; i++)
		temp += "----";

	

	if (start == N)
	{
		cout << temp << "\"����Լ��� ������?\"\n";
		cout << temp << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
		return temp + "��� �亯�Ͽ���.\n";
	}
	else
	{
		cout << temp << "\"����Լ��� ������?\"\n";
		cout << temp << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
		cout << temp << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
		cout << temp << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";

		return Recursion(++start, N) + temp + "��� �亯�Ͽ���.\n";
	}
}

int main()
{
	//ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int N;

	cin >> N;

	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";

	cout <<	Recursion(0, N) << "\n";

	return 0;
}
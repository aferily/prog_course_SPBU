#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	string Str;
	int Otkr = 0;
	bool Res = 1;
	cout << "������� ������" << endl; getline(cin, Str);
	for (int i = 0; i<Str.size(); i++)
	{
		if (Str[i] == '(') Otkr++;
		if (Str[i] == ')')
		{
			if (Otkr > 0) Otkr--;
			else Res = 0;
		}

	}
	if (Res == 1 && Otkr == 0) cout << "���� ������" << endl;
	else cout << "��� �������" << endl;
	return 0;
}
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "������� ���-�� ��������� �������: ";
	int num;
	cin >> num;
	int *mas = new int[num];
	cout << "������� �������� �������: " << endl;
	int nullelement = 0;
	for (int i = 0; i < num; i++)
	{
		cin >> mas[i];
		if (mas[i] == 0)
		{
			nullelement++;
		}
	}
	cout << "���-�� ������� ��������� �������: " << nullelement << endl;
	delete[] mas;
	return 0;
}
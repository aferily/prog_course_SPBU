#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a, b;
	cout << "������� a � b: "; cin >> a >> b;
	if (b == 0)
	{
		cout << "������ �� ����� ��������� 0" << endl; exit(0);
	}
	if (a == 0 || a > 0 && a < abs(b))
	{
		cout << "�������� �������: " << 0 << endl; exit(0);
	}
	if (a < 0 && abs(a) < abs(b))
	{
		cout << "�������� �������: " << -1 << endl; exit(0);
	}
	int Res = 0, c = 0;
	while (c == 0 || c + abs(b) <= a && a > 0 || c > a && a < 0)
	{
		if (a > 0 && b > 0 || a < 0 && b < 0) Res++; else Res--;
		c = Res*b;
	}
	cout << "�������� �������: " << Res << endl;
	return 0;
}
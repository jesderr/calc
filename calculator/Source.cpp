#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a;
	cout << "���� �" << endl;
	cin >> a;
	switch (a)
	{
	case 5:
		{
			cout << "���������" << endl;
			break;
		}
	case 4:
		{
			cout << "���������" << endl;
			break;
		}
	case 3:
		{
			cout << "�����" << endl;
			break;
		}
	case 2:
		{
			cout << "�����" << endl;
			break;
		}
	case 1:
		{
			cout << "������" << endl;
			break;
		}
	default:
			cout << "������������ ����" << endl;
	}
	return 0;
}
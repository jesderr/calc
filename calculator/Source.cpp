#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int a;
	cout << "¬вод а" << endl;
	cin >> a;
	switch (a)
	{
	case 5:
		{
			cout << "ƒетективы" << endl;
			break;
		}
	case 4:
		{
			cout << "мелодрамы" << endl;
			break;
		}
	case 3:
		{
			cout << "ужасы" << endl;
			break;
		}
	case 2:
		{
			cout << "наука" << endl;
			break;
		}
	case 1:
		{
			cout << "дизайн" << endl;
			break;
		}
	default:
			cout << "неправильный ввод" << endl;
	}
	return 0;
}
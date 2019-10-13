//#include <iostream>
//
//
//using namespace std;
//
//
//
//double  calculate (double a, double b, int d)
//{
//	switch (d)
//	{
//		case 1:
//			return a + b;
//		case 2:
//			return a - b;
//		case 3:
//			return a * b;
//		case 4:
//			return a / b;
//	}
//
//}
//
//
//int main()
//{
//	setlocale(0, "");
//	double a, b, res;
//	int d;
//	cout << "введите a,b" << endl;
//	cin >> a >> b;
//	while (true) {
//		cout << "Введите действие:1-сложение,2-вычитание,3-умножение,4-деление" << endl;
//		cin >> d;
//		if (!cin && (d != 1 || d != 2 || d != 3 || d != 4))
//		{
//			cout << "Не верно ввели, повторите ввод" << endl;
//			cin.clear();
//			while (cin.get() != '\n');
//		}
//		else break;
//	}
//	res = calculate(a, b, d);
//	cout << "Ответ:" << res << endl;
//	system("pause");
//	return 0;
//}

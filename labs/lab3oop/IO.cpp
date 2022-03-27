#include "IO.h"

int SetYearBook()
{
	int year;
	cout << "Введите год книги: ";
	cin >> year;
	while (true)
	{
		if (year > 0 && year < 2022)
		{
			return year;
		}
		else
		{
			cout << "год должен быть положительным и не больше текущего 2022, введите заново" << endl;
			cin >> year;
		}
	}
}

int SetCountBookStr()
{
	int str;
	cout << "Введите количество страниц: ";
	cin >> str;
	while (true)
	{
		if (str > 0)
			return str;
		else
		{
			cout << "количество страниц должно быть больше 0, введите заново" << endl;
			cin >> str;
		}
	}
}

int SetCountAuhtorsBook()
{
	int count;
	cout << "Введите количество авторов: ";
	cin >> count;
	while (true)
	{
		if (count >= 1 && count <= 10)
			return count;
		else
		{
			cout << "количество авторов должно быть от 1 до 10, введите заново" << endl;
			cin >> count;
		}
	}
}

int SetNumberRace()
{
	int nubmer;
	cin >> nubmer;
	while (true)
	{
		if (nubmer > 0)
			return nubmer;
		else
		{
			cout << "номер рейса, продолжительность рейса, частота рейсов и количество "
				"рейсов дожны быть больше 0. Повторите попытку" << endl;
			cin >> nubmer;
		}
	}
}

double SetRectangle()
{
	double value;
	cin >> value;
	while (true)
	{
		if (value > 0)
			return value;
		else
		{
			cout << "Длина или ширина не должны быть отрицательнными, повторите попытку!" << endl;
			cin >> value;
		}
	}
}

int SetPositive()
{
	int value;
	cin >> value;
	while (true)
	{
		if (value > 0)
			return value;
		else
		{
			cout << "Число должно быть положительным, повторите попытку!" << endl;
			cin >> value;
		}
	}
	return 0;
}

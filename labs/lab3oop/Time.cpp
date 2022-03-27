#include "Time.h"

Time::Time(int year, int month, int day, int hour, int min)
{
	Year = year;
	Month = month;
	Day = day;
	Hour = hour;
	Minute = min;
}

Time::Time()
{
	Year = 0;
	Month = 0;
	Day = 0;
	Hour = 0;
	Minute = 0;
}

void Time::SetYear(int year)
{
	Year = year;
}

void Time::SetMonth(int month)
{
	if (month > 12)
	{
		while (true)
		{
			cout << "����� �� ������ ���� ������ 12, ��������� �������" << endl;
			cin >> month;
			if (month > 12)
				continue;
			else
			{
				Month = month;
				return;
			}
		}
	}
	Month = month;
}

void Time::SetDay(int day)
{
	if (day > 30)
	{
		while (true)
		{
			cout << "���� �� ������ ���� ������ 30, ��������� �������" << endl;
			cin >> day;
			if (day >30)
				continue;
			else
			{
				Day = day;
				return;
			}
		}
	}
	Day = day;
}

void Time::SetHour(int hour)
{
	if (hour > 24)
	{
		while (true)
		{
			cout << "��� �� ������ ���� ������ 24, ��������� �������" << endl;
			cin >> hour;
			if (hour >24)
				continue;
			else
			{
				Hour = hour;
				return;
			}
		}
	}
	Hour = hour;
}

void Time::SetMin(int min)
{
	if (min > 60)
	{
		while (true)
		{
			cout << "������ �� ������� ���� ������ 60, ��������� �������" << endl;
			cin >> min;
			if (min > 60)
				continue;
			else
			{
				Minute = min;
				return;
			}
		}
	}
	Minute = min;
}

int Time::GetYear()
{
	return Year;
}

int Time::GetMonth()
{
	return Month;
}

int Time::GetDay()
{
	return Day;
}

int Time::GetHour()
{
	return Hour;
}

int Time::GetMin()
{
	return Minute;
}

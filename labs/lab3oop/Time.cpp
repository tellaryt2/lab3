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
			cout << "Месяц не должен быть больше 12, повторите попытку" << endl;
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
			cout << "День не должен быть больше 30, повторите попытку" << endl;
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
			cout << "Час не должен быть больше 24, повторите попытку" << endl;
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
			cout << "Минуты не должены быть больше 60, повторите попытку" << endl;
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

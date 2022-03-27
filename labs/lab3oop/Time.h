#pragma once
#include "IO.h"

class Time
{
public:
	Time(int year, int month, int day, int hour, int min);
	Time();
	void SetYear(int year);
	void SetMonth(int month);
	void SetDay(int day);
	void SetHour(int hour);
	void SetMin(int min);
	int GetYear();
	int GetMonth();
	int GetDay();
	int GetHour();
	int GetMin();
private:
	int Year;
	int Month;
	int Day;
	int Hour;
	int Minute;
};
#pragma once
#include "IO.h"

class Point
{
public:
	Point(double x, double y);
	Point();
	void SetY(double y);
	void SetX(double x);
	double GetX();
	double GetY();

private:
	double X;
	double Y;
};
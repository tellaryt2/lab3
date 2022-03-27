#include "Point.h"

Point::Point(double x, double y)
{
	this->X = x;
	this->Y = y;
}

Point::Point()
{
	this->X = 0;
	this->Y = 0;
}

void Point::SetY(double y)
{
	this->Y = y;
}

void Point::SetX(double x)
{
	this->X = x;
}

double Point::GetX()
{
	return this->X;
}

double Point::GetY()
{
	return this->Y;
}

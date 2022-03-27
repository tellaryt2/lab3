#pragma once
#include "IO.h"
#include "Point.h"

class Rectangle
{
public:
	Rectangle(double lenght, double weight, Point center);
	Rectangle();
	void SetLenght(double lenght);
	void SetWeight(double weight);
	void SetCenter(Point center);
	double GetLenght();
	double GetWeight();
	Point GetPoint();
private:
	double Lenght;
	double Weight;
	Point Center;
};

void DemoRectangleWithPoint();
#include "Rectangle.h"

Rectangle::Rectangle(double lenght, double weight, Point center)
{
	this->Lenght = lenght;
	this->Weight = weight;
	this->Center = center;
}

Rectangle::Rectangle()
{
	this->Lenght = 0.0;
	this->Weight = 0.0;
}


void Rectangle::SetLenght(double lenght)
{
	this->Lenght = lenght;

}

void Rectangle::SetWeight(double weight)
{
	this->Weight = weight;
}

void Rectangle::SetCenter(Point center)
{
	this->Center = center;
}

double Rectangle::GetLenght()
{
	return this->Lenght;
}

double Rectangle::GetWeight()
{
	return this->Weight;
}

Point Rectangle::GetPoint()
{
	return this->Center;
}

void DemoRectangleWithPoint()
{
	Point* points = new Point[5];
	double coordinate;
	for (int i = 0; i < 5; i++)
	{
		cout << "Введите Х точки #" << i + 1 << ": ";
		cin >> coordinate;
		points[i].SetX(coordinate);
		cout << "Введите Y точки #" << i + 1 << ": ";
		cin >> coordinate;
		points[i].SetY(coordinate);
	}

	Rectangle* rectangles = new Rectangle[5];
	for (int i = 0; i < 5; i++)
	{
		cout << "Введите длину и ширину для прямоугольника #" << i + 1 << ": ";
		rectangles[i].SetLenght(SetRectangle());
		rectangles[i].SetWeight(SetRectangle());
		rectangles[i].SetCenter(points[i]);
	}

	for (int i = 0; i < 5; i++)
	{
		cout << "X= " << rectangles[i].GetPoint().GetX() << "; ";
		cout << "Y= " << rectangles[i].GetPoint().GetY() << "; ";
		cout << "Lenght= " << rectangles[i].GetLenght() << "; ";
		cout << "Widht= " << rectangles[i].GetWeight() << "; ";
		cout << endl;
	}

	cout << "------------------------3.3.5----------------------" << endl;
	double xCenter = 0.0;
	double yCenter = 0.0;
	for (int i = 0; i < 5; i++)
	{
		xCenter += rectangles[i].GetPoint().GetX();
		yCenter += rectangles[i].GetPoint().GetY();
	}
	cout << "Сред. Х= " << xCenter / 5 << ", Сред. Y= " << yCenter / 5 << endl;
	delete[] points;
	delete[] rectangles;
}

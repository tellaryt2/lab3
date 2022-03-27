#include "IO.h"
#include "Book.h"
#include "Route.h"
#include "Rectangle.h"
#include "Time.h"
#include "Flight.h"
#include "Band.h"

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "1 = 3.2.2" << endl;
	cout << "2 = 3.2.3" << endl;
	cout << "3 = 3.2.4" << endl;
	cout << "4 = 3.2.5" << endl;
	cout << "5 = 3.2.6" << endl;
	cout << "6 = 3.3.2" << endl;
	cout << "7 = 3.3.4" << endl;
	cout << "8 = 3.3.5" << endl;
	cout << "9 = 3.3.11" << endl;
	cout << "10 = 3.4.6" << endl;

	while (true)
	{
		int command;
		cin >> command;
		switch (command)
		{
			case 1:
			{
				DemoBook();
				break;
			}

			case 2:
			{
				Book *book = new Book();
				ReadBookFromConsole(*book);
				delete book;
				break;
			}

			case 3:
			{
				DemoBook();
				break;
			}

			case 4:
			{
				DemoBook();
				break;
			}

			case 5:
			{
				DemoRoute();
				break;
			}

			case 6:
			{
				Point point(5, 6);
				Rectangle rectangle(20, 30, point);
				cout << rectangle.GetLenght() << endl;
				cout << rectangle.GetWeight() << endl;
				Point newPoint = rectangle.GetPoint();
				cout << newPoint.GetX() << " " << newPoint.GetY() << endl;
				break;
			}

			case 7:
			{
				DemoRectangleWithPoint();
				break;
			}

			case 8:
			{
				DemoRectangleWithPoint();
				break;
			}

			case 9:
			{
				DemoFlightWithTime();
				break;
			}

			case 10:
			{
				Band test;
				test.DemoBand();
				break;
			}

			default:
				break;
		}
	}

	return 0;
}
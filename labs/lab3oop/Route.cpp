#include "Route.h"

void DemoRoute()
{
	Route* routes = new Route[3];
	for (int i = 0; i < 3; i++)
	{
		ReadRouteFromConsole(routes[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		WriteRouteFromConsole(routes[i]);
	}

	cout << "Введите название остановки: ";
	string nameStop;
	cin >> nameStop;
	int index = FindRouteTo(routes, 3, nameStop);
	if (index == -1)
		cout << "Рейсов с такой оставновкой нет" << endl;
	else
		cout << "Индекс рейса: " << index << endl;
	delete[] routes;
}

void ReadRouteFromConsole(Route& route)
{
	cout << "Введите номер рейса: ";
	route.NumberRace = SetNumberRace();
	cout << "Введите Продолжительность маршрута (минуты): ";
	route.TimeRace = SetNumberRace();
	cout << "Введите частоту маршрутов (минуты): ";
	route.RacePeriod = SetNumberRace();
	cout << "Введите количество остановок: ";
	route.CountStops = SetNumberRace();

	route.NameStops = new string[route.CountStops];
	for (int i = 0; i < route.CountStops; i++)
	{
		cout << "Введите название остановки #" << i + 1 << ": ";
		cin >> route.NameStops[i];
	}
}

void WriteRouteFromConsole(Route& route)
{
	cout << route.NumberRace << " ";
	cout << "Время маршрута: " << route.TimeRace << " минут, ";
	cout << "Частота рейсов: " << route.RacePeriod << " минут, ";
	cout << "Остановки: ";
	for (int i = 0; i < route.CountStops; i++)
	{
		cout << route.NameStops[i];
		if (i != route.CountStops - 1)
			cout << ", ";
		else
			cout << " ";
	}
	cout << endl;
}

int FindRouteTo(Route* routes, int countRoutes, string nameStop)
{
	int index = 0;
	for (int i = 0; i < countRoutes; i++)
	{
		for (int j = 0; j < routes[i].CountStops; j++)
		{
			if (routes[i].NameStops[j] == nameStop)
			{
				return index;
			}
		}
		index++;
	}
	return -1;
}
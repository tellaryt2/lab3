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

	cout << "������� �������� ���������: ";
	string nameStop;
	cin >> nameStop;
	int index = FindRouteTo(routes, 3, nameStop);
	if (index == -1)
		cout << "������ � ����� ����������� ���" << endl;
	else
		cout << "������ �����: " << index << endl;
	delete[] routes;
}

void ReadRouteFromConsole(Route& route)
{
	cout << "������� ����� �����: ";
	route.NumberRace = SetNumberRace();
	cout << "������� ����������������� �������� (������): ";
	route.TimeRace = SetNumberRace();
	cout << "������� ������� ��������� (������): ";
	route.RacePeriod = SetNumberRace();
	cout << "������� ���������� ���������: ";
	route.CountStops = SetNumberRace();

	route.NameStops = new string[route.CountStops];
	for (int i = 0; i < route.CountStops; i++)
	{
		cout << "������� �������� ��������� #" << i + 1 << ": ";
		cin >> route.NameStops[i];
	}
}

void WriteRouteFromConsole(Route& route)
{
	cout << route.NumberRace << " ";
	cout << "����� ��������: " << route.TimeRace << " �����, ";
	cout << "������� ������: " << route.RacePeriod << " �����, ";
	cout << "���������: ";
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
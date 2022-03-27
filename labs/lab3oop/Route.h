#pragma once
#include "IO.h"


struct Route
{
	int NumberRace;
	int TimeRace;
	int RacePeriod;
	string* NameStops;
	int CountStops;
};

void DemoRoute();
void ReadRouteFromConsole(Route& route);
void WriteRouteFromConsole(Route& route);
int FindRouteTo(Route* routes, int countRoutes, string nameStop);
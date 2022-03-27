#pragma once
#include "IO.h"
#include "Time.h"

class Flight
{
public:
	Flight(int race, string departure, string destination);
	Flight();
	void SetNumberRace(int race);
	void SetDeparture(string departure);
	void SetDestination(string destination);
	void SetArrival(Time arrive);
	void SetTimeDestination(Time destinationTime);
	int GetNumberRace();
	string GetPlaceDeparture();
	string GetPlaceDestination();
	Time GetTimeDestination();
	Time GetArrival();
private:
	int _numberRace;
	string _placeDeparture;
	string _placeDestination;
	Time _timeDepartion;
	Time Arrival;
};

void  DemoFlightWithTime();
Time GetFlightTimeMinutes(Flight& flight);
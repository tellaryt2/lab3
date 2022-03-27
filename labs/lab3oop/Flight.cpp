#include "Flight.h"

Flight::Flight(int race, string departure, string destination)
{
	_numberRace = race;
	_placeDeparture = departure;
	_placeDestination = destination;

}

Flight::Flight()
{
	_numberRace = 0;
	_placeDeparture = "";
	_placeDestination = "";
}

void Flight::SetNumberRace(int race)
{
	_numberRace = race;
}

void Flight::SetDeparture(string departure)
{
	_placeDeparture = departure;
}

void Flight::SetDestination(string destination)
{
	_placeDestination = destination;
}

void Flight::SetArrival(Time arrive)
{
	if (_timeDepartion.GetDay() > arrive.GetDay())
	{
		while (true)
		{
			cout << "¬рем€ прибыти€ больше чем врем€ отправки, введите день заново" << endl;
			arrive.SetDay(SetPositive());
			if (_timeDepartion.GetDay() > arrive.GetDay())
				continue;
			else
			{
				Arrival = arrive;
				return;
			}
		}
	}
	Arrival = arrive;
}

void Flight::SetTimeDestination(Time destinationTime)
{
	_timeDepartion = destinationTime;
}

int Flight::GetNumberRace()
{
	return _numberRace;
}

string Flight::GetPlaceDeparture()
{
	return _placeDeparture;
}

string Flight::GetPlaceDestination()
{
	return _placeDestination;
}

Time Flight::GetTimeDestination()
{
	return _timeDepartion;
}

Time Flight::GetArrival()
{
	return Arrival;
}

void DemoFlightWithTime()
{
	Flight* flights = new Flight[2];
	Time time;
	for (int i = 0; i < 2; i++)
	{
		cout << "¬ведите номер рейса: ";
		flights[i].SetNumberRace(SetPositive());
		cout << "¬ведите ћесто отправлени€: ";
		string place;
		cin >> place;
		flights[i].SetDeparture(place);
		cout << "¬ведите ћесто прибыти€: ";
		cin >> place;
		flights[i].SetDestination(place);
		cout << "¬ведите дату отправлени€ (год): ";
		time.SetYear(SetPositive());
		cout << "¬ведите дату отправлени€ (мес€ц): ";
		time.SetMonth(SetPositive());
		cout << "¬ведите дату отправлени€ (день): ";
		time.SetDay(SetPositive());
		cout << "¬ведите дату отправлени€ (часы): ";
		time.SetHour(SetPositive());
		cout << "¬ведите дату отправлени€ (минуты): ";
		time.SetMin(SetPositive());
		flights[i].SetTimeDestination(time);
		cout << "¬ведите дату прибыти€ (год): ";
		time.SetYear(SetPositive());
		cout << "¬ведите дату прибыти€ (мес€ц): ";
		time.SetMonth(SetPositive());
		cout << "¬ведите дату прибыти€ (день): ";
		time.SetDay(SetPositive());
		cout << "¬ведите дату прибыти€ (часы): ";
		time.SetHour(SetPositive());
		cout << "¬ведите дату прибыти€ (минуты): ";
		time.SetMin(SetPositive());
		flights[i].SetArrival(time);
	}

	for (int i = 0; i < 2; i++)
	{
		cout << flights[i].GetNumberRace() << " ";
		cout << flights[i].GetPlaceDeparture() << " - ";
		cout << flights[i].GetPlaceDestination() << " ¬ылет ";
		cout << flights[i].GetTimeDestination().GetMonth() << ".";
		cout << flights[i].GetTimeDestination().GetDay() << " ";
		cout << flights[i].GetTimeDestination().GetHour() << ":";
		cout << flights[i].GetTimeDestination().GetMin() << " ѕрибытие ";
		cout << flights[i].GetArrival().GetMonth() << ".";
		cout << flights[i].GetArrival().GetDay() << " ";
		cout << flights[i].GetArrival().GetHour() << ":";
		cout << flights[i].GetArrival().GetMin() << endl;
	}

	cout << "----------------------------3.3.11----------------------------" << endl << endl;
	for (int i = 0; i < 2; i++)
	{
		cout << flights[i].GetNumberRace() << " ";
		cout << flights[i].GetPlaceDeparture() << " - ";
		cout << flights[i].GetPlaceDestination() << " ¬рем€ полета: ";
		time = GetFlightTimeMinutes(flights[i]);
		cout << time.GetHour() << "ч " << time.GetMin() << "мин" << endl;
	}
	delete[] flights;
}

Time GetFlightTimeMinutes(Flight& flight)
{
	Time temp;
	int min;
	int hour = flight.GetArrival().GetHour() - flight.GetTimeDestination().GetHour();
	if (flight.GetArrival().GetMin() < flight.GetTimeDestination().GetMin())
	{
		/*min = flight.GetArrival().GetMin() + flight.GetTimeDestination().GetMin();
		if (min > 60)
		{

		}*/
		min = (flight.GetArrival().GetMin() + 60) - flight.GetTimeDestination().GetMin();
		hour--;
	}
	else
		min = flight.GetArrival().GetMin() - flight.GetTimeDestination().GetMin();

	temp.SetHour(hour);
	temp.SetMin(min);


	return temp;
}

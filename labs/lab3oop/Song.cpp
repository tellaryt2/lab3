#include "Song.h"

Song::Song()
{
}

void Song::SetName(string name)
{
	this->Name = name;
}

void Song::SetTime(int time)
{
	this->Time = time;
}

void Song::SetGenre()
{
	cout << "Pop - 1" << endl << "Rep - 2" << endl;
	cout << "Rock  - 3" << endl << "Slow - 4" << endl;
	cout << "Meshup - 5" << endl << "Remake - 6" << endl;

	while (true)
	{
		cout << "Введите цифру жанра 1 - 6: ";
		int temp;
		cin >> temp;
		switch (temp)
		{
		case 1:
		{
			this->_Genre = Pop;
			return;
		}
		case 2:
		{
			this->_Genre = Rep;
			return;
		}

		case 3:
		{
			this->_Genre = Rock;
			return;
		}
		case 4:
		{
			this->_Genre = Slow;
			return;
		}

		case 5:
		{
			this->_Genre = Meshup;
			return;
		}

		case 6:
		{
			this->_Genre = Remake;
			return;
		}
		default:
			break;
		}
	}
}

string Song::GetName()
{
	return Name;
}

int Song::GetTime()
{
	return Time;
}


Genre Song::GetGenre()
{
	return _Genre;
}

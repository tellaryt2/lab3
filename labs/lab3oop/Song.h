#pragma once
#include "Genre.h"

class Song
{
public:
	Song();
	void SetName(string name);
	void SetTime(int time);
	void SetGenre();
	string GetName();
	int GetTime();
	Genre GetGenre();
private:
	string Name;
	int Time;
	Genre _Genre;
};
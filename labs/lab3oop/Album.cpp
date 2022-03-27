#include "Album.h"

Album::Album()
{
}

void Album::SetName(string name)
{
	this->Name = name;
}

void Album::SetYear(int year)
{
	this->Year = year;
}

void Album::SetSong(Song song, int index)
{
	this->Songs[index] = song;
}

void Album::SetCountSongs(int count)
{
	this->CountSongs = count;
}

string Album::GetName()
{
	return this->Name;
}

int Album::GetYear()
{
	return this->Year;
}

Song Album::GetSong(int index)
{
	
	return this->Songs[index];
}

int Album::GetCountSongs()
{
	return this->CountSongs;
}

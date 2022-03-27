#pragma once
#include "Song.h"

class Album
{
public:
	Album();
	void SetName(string name);
	void SetYear(int year);
	void SetSong(Song song, int index);
	void SetCountSongs(int count);
	string GetName();
	int GetYear();
	Song GetSong(int index);
	int GetCountSongs();
	Song* Songs;
private:
	string Name;
	int Year;
	int CountSongs;
};
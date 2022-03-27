#pragma once
#include "Album.h"

class Band
{
public:
	Band();
	void SetInformation(string info);
	void SetAlbum(Album album, int index);
	void SetCountAlbums(int count);
	string GetInformation();
	Album GetAlbum(int index);
	int GetCountAlbums();

	void DemoBand();
private:
	string Information;
	Album* Albums;
	int CountAlbums;
};


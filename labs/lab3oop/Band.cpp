#include "Band.h"

Band::Band()
{
}

void Band::SetInformation(string info)
{
	this->Information = info;
}

void Band::SetAlbum(Album album, int index)
{
	this->Albums[index] = album;
}

void Band::SetCountAlbums(int count)
{
	this->CountAlbums = count;
}

string Band::GetInformation()
{
	return this->Information;
}

Album Band::GetAlbum(int index)
{
	return this->Albums[index];
}

int Band::GetCountAlbums()
{
	return this->CountAlbums;
}




void Band::DemoBand()
{
	Band band;
	Album* albums = new Album[3];
	Song song;
	string temp;
	band.Albums = new Album[3];
	band.SetCountAlbums(3);
	for (int i = 0; i < 3; i++)
	{
		cout << "¬ведите названи€ альбома #" << i + 1 << ": ";
		cin >> temp;
		albums[i].SetName(temp);
		cout << "¬ведите год альбома #" << i + 1 << ": ";
		albums[i].SetYear(SetPositive());
		cout << "¬ведите количество песен альбома #" << i + 1<< ": ";
		albums[i].SetCountSongs(SetPositive());
		albums[i].Songs = new Song[albums[i].GetCountSongs()];
		for (int j = 0; j < albums[i].GetCountSongs(); j++)
		{
			cout << "¬ведите название песни #" << j + 1 << ": ";
			cin >> temp;
			song.SetName(temp);
			cout << "¬ведите продолжительность песни (мин) #" << j + 1<< ": ";
			song.SetTime(SetPositive());
			song.SetGenre();
			albums[i].SetSong(song, j);
			cout << endl;
		}
		band.SetAlbum(albums[i], i);
	}

	delete[] albums;
}



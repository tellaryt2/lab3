#pragma once
#include "IO.h"

struct Book
{
	string Name;
	int Year;
	int CountStr;
	string* Authors;
	int CountAuthors;

};

void DemoBook();
void ReadBookFromConsole(Book& book);
void WriteBookToConsole(Book& book);
int FindBookByAuthor(Book* books, int booksCount, string author);
#include "Book.h"

void DemoBook()
{
	Book* books = new Book[3];
	for (int i = 0; i < 3; i++)
	{
		ReadBookFromConsole(books[i]);
	}
	for (int i = 0; i < 3; i++)
	{
		WriteBookToConsole(books[i]);
	}

	cout << "------------------------------3.2.5-------------------" << endl;
	string auhtor;
	cout << "¬ведите им€ авторa: ";
	cin >> auhtor;
	int index = FindBookByAuthor(books, 3, auhtor);
	if (index == -1)
		cout << "такого автора нет" << endl;
	else
		cout << "индекс книги с таким автором: " << index << endl;
	delete[] books;
}

void ReadBookFromConsole(Book& book)
{
	cout << "¬ведите название книги: ";
	cin >> book.Name;
	book.Year = SetYearBook();
	book.CountStr = SetCountBookStr();
	book.CountAuthors = SetCountAuhtorsBook();
	book.Authors = new string[book.CountAuthors];
	for (int i = 1; i < book.CountAuthors + 1; i++)
	{
		cout << "¬ведите автора #" << i << ": ";
		cin >> book.Authors[i - 1];
	}
}

void WriteBookToConsole(Book& book)
{
	for (int i = 0; i < book.CountAuthors; i++)
	{
		cout << book.Authors[i];
		if (i != book.CountAuthors - 1)
			cout << ", ";
		else
			cout << " ";
	}
	cout << book.Name << ". ";
	cout << book.Year << ". - ";
	cout << book.CountStr << "c" << endl;
}

int FindBookByAuthor(Book* books, int booksCount, string author)
{
	int index = 0;
	for (int i = 0; i < booksCount; i++)
	{
		for (int j = 0; j < books[i].CountAuthors; j++)
		{
			if (books[i].Authors[j] == author)
			{
				return index;
			}
		}
		index++;
	}
	return -1;
}
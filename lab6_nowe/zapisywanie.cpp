#include "Tablica.hpp"
#include "zapisywanie.hpp"

int Tablica::rozmiar_odczytX() 
{

	int x;
	fstream size_file;

	size_file.open("size.txt", ios::in);

	if (size_file.good()) {

		size_file >> x;

	}
	else {
		return 1;

	}

	size_file.close();
	return x;

}

int Tablica::rozmiar_odczytY() 
{

	int x, y;
	fstream size_file;

	size_file.open("size.txt", ios::in);

	if (size_file.good()) {

		size_file >> x;
		size_file >> y;

	}
	else {
		return 1;

	}

	size_file.close();
	return y;

}

int Tablica::rozmiar_zapis()
{
	int x, y;
	fstream size_file;

	size_file.open("size.txt", ios::in);
	if (size_file.good()) {
	
		size_file >> rozmiarX;
		size_file >> endl;
		size_file >>  rozmiarY;
	}
	else{
		return 1;
	}
	
	return 0;
	
	
}

int Tablica::zapis()
{

	fstream file;
	file.open("savefile.txt", ios::in);


	if (file.good()) {

	arr[x][y].ustaw();


	}
	
	return 0;
}
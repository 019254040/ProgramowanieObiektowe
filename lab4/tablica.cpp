#include "main.hpp"


	void Tablica::tablica_powstanie()
	{ //tutaj tworze pierwszy raz tablice dwuwymiarowa, zwracam wskaznik do niej
	


		float** tablica = new float* [line];
			for (int i = 0; i < column; i++)
			{
				tablica[i] = new float[column];
			}
			
			for (int i = 0; i < line; i++) {
				for (int j = 0; j < column; j++) {

					tablica[i][j] = zero;
					}

			}
			tablica_str=tablica;
	}
	
	/////////////////////////////////////////////////////////////////////////////
	
	
	
	void Tablica::filling()
	{
	

	for (int i = 0; i < line; i++) {
		 for (int j = 0; j < column; j++) {
			 
			tablica_str[i][j]=zero;

		 }


	 }
	
		
	}
	
	
	
	
	
	
	
	

	void Tablica::removing_table()
	{
		
		for (int i = 0; i < line ; i++)
		{
			delete[] tablica_str[i];
		}
		
		delete[] tablica_str;

	}



/////////////////////////////////////////////////////////////////////////////






	void Tablica::tablica_rozmiar() 
	{ //zmiana rozmiaru tablicy
	
		old1=line;
		old2= column;
		

		if (line>=old1 || column>=old2) 
		{
			float** tab_copy = new float* [line];

			for (int i = 0; i < column; i++)
			tab_copy[i] = new float[column];

			for (int i = 0; i < line; i++) {
				for (int j = 0; j < column; j++) {

					tab_copy[i][j] = 0;

				}


			}



			for (int i = 0; i < old1; i++) {
				for (int j = 0; j < old2; j++)
					tab_copy[i][j] = tablica_str[i][j];

			}
			
			for(int i=0; i < old1; i++)
			{
				delete[] tablica_str[i];
			}
			
			delete[] tablica_str;
			

			tablica_str = tab_copy;
			
			
			for(int i=0; i < line; i++)
			{
				delete[] tab_copy[i];
			}
			
			delete[] tab_copy;
		}
		else {
			cout << endl << "Nowe wymiary musza byc wieksze  od poprzednich!" << endl;
		}
	}




//////////////////////////////////////////////////////////////////////////////////






	void Tablica::aktualizowanie() 
	{

		int wiersz, kolumna;
		int koniec = 0;
		

		cout << "Rozmiar obecnej tablicy to: " << line << "x" << column << endl;

		while (koniec == 0)
		{

			cout << "Ktory element tablicy chcesz edytowac?" << endl;
			cout << "Wpisz numer wiersza: ";

			cin >> wiersz;
			while (wiersz  < 0 || wiersz > line)
			{
				cout << "Nie ma takiego wiersza! Wprowadz numer wiersza ponownie: ";
				cin >> wiersz;

			}

			cout << "Wpisz numer kolumny: ";

			cin >> kolumna;
			while (kolumna < 0 || kolumna > column)
			{
				cout << "Nie ma takiej kolumny! Wprowadz numer kolumny ponownie: ";
				cin >> kolumna;

			}

			cout << "W tej komorce znajduje sie: " << tablica_str[wiersz][kolumna] << endl;
			cout << "Wprowadz nowa wartosc: ";
			cin >> tablica_str[wiersz][kolumna];

			cout << endl << "Czy chcesz zakonczyc edycje? Jezeli tak wcisnij 1, jezeli nie kliknij dowolny inny przycisk. ";



			cin >> koniec; 

			if (koniec == 1) {
				koniec = 1;
			}
			else
			{
				koniec = 0;
			}
		}


	}

/////////////////////////////////////////////////////////////


void Tablica::how()
	{
		int z=0;
		int w=0;
		old1=line;
		old2=column;
		
		while(z<1)
		{
			
			cout << "Podaj ilosc wierszy: ";
			cin >> z;
		
			if(z<1)
			{
				cout << endl << "Wprowadzono bledno wartosc, wpisz poprawna jeszcze raz." <<  endl;
			
			
			}
		
		}
		
		while(w<1)
		{
								
			cout << "Podaj ilosc kolumn: ";
			cin >> w;
				
			if(w<1)
			{
				cout << endl << "Wprowadzono bledno wartosc, wpisz poprawna jeszcze raz." <<  endl;
			
			
			}



		}

		line=z;
		column=w;


	}
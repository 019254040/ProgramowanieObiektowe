#include "main.hpp"
#include "tablica.hpp"
#include "menu.hpp"
#include "zapisywanie.hpp"
#include "tablica_wysw.hpp"

using namespace std;

	

	int menu() 
	{

		int m=0;
		
		cout << endl <<"MENU" << endl;
		cout << "WYBIERZ NUMER OPERACJI KTORA CHCESZ WYKONAC, WCISNIJ ENTER BY POTWIERDZIC: " << endl;
		cout << "1. Stworz nowa tabele (poprzednia zostanie usunieta)" << endl <<
			"2. Zmien rozmiar istniejacej tabeli" << endl <<
			"3. Aktualizuj istniejace elementy w tabeli" << endl <<
			"4. Wyswietl zawartosc tabeli" << endl
			<< "5. Operacje matematyczne" << endl
			<< "6. Zakoncz program" << endl;


			cin >> m;
					
					return m;
	}


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	void how(Tablica & tab )
	{
		int z=0;
		int w=0;
		
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

		tab.line=z;
		tab.column=w;


	}

		
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int menu_operations()
{
	
	int m;
	
	cout << "1. Zsumuj elementy w wybranym wierszu." << endl 
	<< "2. Zsumuj elementy w wybranej kolumnie."<< endl
	<< "3. Znajdz najmniejszy element w tabeli" << endl
	<< "4. Znajdz najwiekszy element w tabeli" << endl 
	<<  "5. Policz srednia wszystkich elementow" << endl
	<< "Wcisnij 6 zeby wrocic do menu" << endl;
	
	cin >> m;
	
	return m;
}


///////////////////////////////////////////////////////////////////////////////////////////////////////////////

void error()
{
	
	
	cout << endl << "Nowe wymiary musza byc wieksze  od poprzednich!" << endl;
	
	
	
}

	////////////////////////////////////////////////////////////////////////////////////////////////////////////

void interface_aktualizowanie1 (int x, int y)
{

cout << "Rozmiar obecnej tablicy to: " << x << "x" << y << endl;

}	

void interface_aktualizowanie2 ()
{
	
	cout << "Ktory element tablicy chcesz edytowac?" << endl;
	cout << "Wpisz numer wiersza: ";
	
}

void interface_aktualizowanie3 ()
{
	cout << "Nie ma takiego wiersza! Wprowadz numer wiersza ponownie: ";
	
}

void interface_aktualizowanie4 ()
{
	cout << "Wpisz numer kolumny: ";

	
}

void interface_aktualizowanie5 ()
{
cout << "Nie ma takiej kolumny! Wprowadz numer kolumny ponownie: ";

}

void interface_aktualizowanie6(float x)
{
	
	cout << "W tej komorce znajduje sie: " << x << endl;
	cout << "Wprowadz nowa wartosc: ";
	
}

void interface_aktualizowanie7()
{

	cout << endl << "Czy chcesz zakonczyc edycje? Jezeli tak wcisnij 1, jezeli nie kliknij dowolny inny przycisk. ";

}		
	
///////////////////////////////////////////////////////////////////////////////////////////////////////

void error_zapisywanie(int x)
{
	
	switch(x)
	{
	
	case 1:
	
	cout << "ERROR SIZE_OPEN";
	
	break;
	
	case 2:
	
	cout << "ERROR FILE_OPEN";
	
	break;
	
	case 3:
	
	cout << "ERROR SIZE_CLOSE";
	
	break;
	
	case 4:
	
	cout << "ERROR FILE_CLOSE";
	
	break;
	
	default:
	
	break;
	
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////

void interface_wysw(int x)
{
	
	switch(x)
	{
		
	case 1:
	
		cout << "Chcesz wyswietlic wszystkie elementy, czy wybrany pojedynczy?" << endl <<
				"1. Wszystkie" << endl << "2. Wybrany" << endl;
	
	break;
	
	case 2:
				
			cout << "Wprowadz wspolrzedne:" << endl << "Wiersz: ";
				
	break;
	
	case 3:
	
		cout << endl << "Nie ma takiej wspolrzednej, wprowadz poprawna: ";
	
	break;
	
	case 4:
	
		cout << endl << "Kolumna: ";
	
	break;
	
	default:
	
	break;
	
	}
	
}

///////////////////////////////////////////////////////////////////////////////////////////////////////

void interface_operations(int x)
{
	
	switch(x)
	{
	
	case 1:
		cout << endl << "W tablicy znajduje sie ";
	
	break;
	
	case 2:
		cout<< " wierszy.";
		cout << endl << "Ktory wiersz chcesz zsumowac?";
		cout << endl << "Nr wiersza: ";
	
	break;
	
	case 3:
		cout <<endl <<" Nie ma takiego adresu, wprowadz poprawny numer: ";
	
	break;
	
	case 4:
	cout << endl <<"Suma elementow: " ;
	
	break;
	
	case 5:
	cout << " kolumn.";
	cout << endl << "Ktora kolumne chcesz zsumowac?";
	cout << endl << "Nr kolumny: ";
	
	break;
	
	
	}
}
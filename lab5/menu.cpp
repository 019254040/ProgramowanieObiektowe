#include "menu.hpp"
#include "main.hpp"

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

	

		
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int menu_operations()
{
	
	int m;
	
	cout << "1. Zsumuj elementy w wybranym wierszu." << endl 
	<< "2. Zsumuj elementy w wybranej kolumnie."<< endl
	<< "3. Znajdz najmniejszy element w wierszu" << endl
	<< "4. Znajdz najmniejszy element w kolumnie" << endl
	<< "5. Znajdz najwiekszy element w wierszu" << endl 
	<< "6. Znajdz najwiekszy element w kolumnie" << endl
	<<  "7. Policz srednia elementow w wierszu" << endl
	<< "8. Policz srednia elementow w kolumnie" << endl
	<< "Wcisnij 9 zeby wrocic do menu" << endl;
	
	cin >> m;
	
 return m;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////

void interface_tablica(int x, int line_1, int column_1, float val)
{

		switch(x)
		{
					case 1:
					
					cout << endl << "Nowe wymiary musza byc wieksze  od poprzednich!" << endl;
					
					break;
					
					case 2:
					
					cout << "Rozmiar obecnej tablicy to: " << line_1 << "x" << column_1 << endl;

					break;

					case 3:
					
					cout << "Ktory element tablicy chcesz edytowac?" << endl;
					cout << "Wpisz numer wiersza: ";
					
					break;

					case 4:
	
					cout << "Nie ma takiego wiersza! Wprowadz numer wiersza ponownie: ";
					
					break;
					
					case 5:
					
					cout << "Wpisz numer kolumny: ";
					
					break;
					
					case 6:
					
					cout << "Nie ma takiej kolumny! Wprowadz numer kolumny ponownie: ";
					
					break;
					
					case 7:
					
					cout << "W tej komorce znajduje sie: " << val << endl;
					cout << "Wprowadz nowa wartosc: ";
					
					break;
					
					case 8:
					
					cout << endl << "Czy chcesz zakonczyc edycje? Jezeli tak wcisnij 1, jezeli nie kliknij dowolny inny przycisk. ";
					
					break;
					
					case 9:
					
					cout << "Podaj ilosc wierszy: ";
					
					break;
					
					case 10:
					
					cout << endl << "Wprowadzono bledno wartosc, wpisz poprawna jeszcze raz." <<  endl;
					
					break;
					
					case 11:
					
					cout << "Podaj ilosc kolumn: ";
					
					break;
					
					default:
					
					break;
					

		}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

	}

}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Tablica::interface_operations_add(int choice)
{


	int number_l=0 , number_c= 0;

	


	if(choice=1)
	{
		cout << endl << "W tablicy znajduje sie " << line << " wierszy.";
		cout << endl << "Ktory wiersz chcesz zsumowac?";
		cout << endl << "Nr wiersza: ";
		
		cin >> number_l;
		
	}
	else
	{
		
		cout << endl << "W tablicy znajduje sie " << column << " kolumn.";
		cout << endl << "Ktora kolumne chcesz zsumowac?";
		cout << endl << "Nr kolumny: ";
		
		cin >> number_c;
		
		
	}

	if(number_l < 0 || number_l > line || number_c <0 || number_c > column)
	{

	
	cout << endl <<"Zostal podany nieistniejacy numer!" << endl;
	
	return 0;
	
	}
	
	if(number_l >= number_c)
	{
	
	return number_l;
	
	}
	else
	{
			
	return number_c;
	
	}

}

///////////////////////////////////////////////////////////////////////////////////////////////////////

void interface_operations_add2(float sum)
{

cout << "Suma elementow wynosi: " << sum ;


}

///////////////////////////////////////////////////////////////////////

float Tablica::testing (int op)
{
	float x;

	if(op==1)
	{
		cout << endl << "Wprowadz numer wiersza: " ;
		cin >> x;
			while(x<0 || x> line)
			{
				cout << endl << "Bledna wartosc, podaj nowa: ";
				cin >>  x;
				
			}
	}
	else
	{
		cout << endl <<"Wprowadz numer kolumny: ";
		cin >> x;
		while(x <0 || x > column)
		{
			
			cout << "Bledna wartosc, podaj nowa: ";
			cin >> x;
		
		}
	}
	return x;
};

/////////////////////////////////////////////////////////////////////////////////////////

void interface_operations(float x)
{
	
	
	cout << endl << "Wynik: " << x;
	
	
	
}

///////////////////////////////////////////////////////////////////////////////////////////////

int choice_arr()
{
	
	int x;
	cout << "Jezeli chcesz utworzyc tablice liczb wybierz 1, jezeli chcesz utworzyc tablice slow wcisnij 2 "<< endl;
	

	cin >> x;
	
	while(x!=1 || x!=2)
	{
		
	cout << "Nie ma takiej opcji, wcisnij 1 lub 2: ";
	cin >> x;
	}
	
	
return x;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////

void main_error_string()
{
	
	cout << endl << "Opcje niedostepne dla tablicy stringow";
	
}

#include "menu.hpp"

using namespace std;

	

	int menu(int x) 
	{

		int m=0;
		
	cout << endl <<"MENU" << endl;
		cout << "WYBIERZ NUMER OPERACJI KTORA CHCESZ WYKONAC, WCISNIJ ENTER BY POTWIERDZIC: " << endl;
		cout << "1. Stworz nowa tabele (poprzednia zostanie usunieta)" << endl <<
			"2. Zmien rozmiar istniejacej tabeli" << endl <<
			"3. Aktualizuj istniejace elementy w tabeli" << endl <<
			"4. Wyswietl zawartosc tabeli" << endl
			<< "5.Zakoncz program" << endl<< endl;


			cin >> m;
					
					return m;
	}


	void how(int* x, int* y )
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

		*x=z;
		*y=w;


	}

		




		

			







		
	







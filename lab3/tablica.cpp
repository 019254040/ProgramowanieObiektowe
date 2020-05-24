#include "main.hpp"
#include "menu.hpp"
#include "tablica.hpp"


using namespace std;
	


	void tablica_powstanie(Tablica & tab)
	{ //tutaj tworze pierwszy raz tablice dwuwymiarowa, zwracam wskaznik do niej
	


		float** tablica = new float* [tab.line];
			for (int i = 0; i < tab.column; i++)
			{
				tablica[i] = new float[tab.column];
			}
			
			for (int i = 0; i < tab.line; i++) {
				for (int j = 0; j < tab.column; j++) {

					tablica[i][j] = zero;
					}

			}
			tab.tablica_str=tablica;
	}
	
	/////////////////////////////////////////////////////////////////////////////
	
	
	
	void filling(Tablica & tab)
	{
	

	for (int i = 0; i < tab.line; i++) {
		 for (int j = 0; j < tab.column; j++) {
			 
			tab.tablica_str[i][j]=zero;

		 }


	 }
	
		
	}
	
	
	
	
	
	
	
	

	void removing_table(Tablica & tab)
	{
		
		for (int i = 0; i < tab.line ; i++)
		{
			delete[] tab.tablica_str[i];
		}
		
		delete[] tab.tablica_str;

	}



/////////////////////////////////////////////////////////////////////////////






	int tablica_rozmiar(int old1, int old2, Tablica & tab) 
	{ //zmiana rozmiaru tablicy



		if (tab.line>=old1 || tab.column>=old2) 
		{
			float** tab_copy = new float* [tab.line];

			for (int i = 0; i < tab.column; i++)
			{
			tab_copy[i] = new float[tab.column];
			}
			
			for (int i = 0; i < tab.line; i++)
				{
				for (int j = 0; j < tab.column; j++) 
				{

					tab_copy[i][j] = 0;

				}


			}



			for (int i = 0; i < old1; i++) 
			{
				for (int j = 0; j < old2; j++)
				{
					tab_copy[i][j] = tab.tablica_str[i][j];
				}
			}
			
			for(int i=0; i < old2; i++)
			{
				delete[] tab.tablica_str[i];
			}
			
			delete[] tab.tablica_str;

			tab.tablica_str = tab_copy;
			
			for(int i=0; i < tab.line; i++)
			{
				delete[] tab_copy[i];
			}
			
			delete[] tab_copy;
		}
		else {
			
			return 1;
			
		}
		
		return 0;
	}




//////////////////////////////////////////////////////////////////////////////////






	void aktualizowanie(Tablica & tab) 
	{

		int wiersz, kolumna;
		int koniec = 0;
		
	interface_aktualizowanie1(tab.line, tab.column);
		

		while (koniec == 0)
		{

		interface_aktualizowanie2();

			cin >> wiersz;
			while (wiersz  < 0 || wiersz > tab.line)
			{
				interface_aktualizowanie3();
				cin >> wiersz;

			}

				interface_aktualizowanie4();

			cin >> kolumna;
			while (kolumna < 0 || kolumna > tab.column)
			{
				interface_aktualizowanie5();
				cin >> kolumna;

			}

			interface_aktualizowanie6(tab.tablica_str[wiersz][kolumna]);
			cin >> tab.tablica_str[wiersz][kolumna];

			interface_aktualizowanie7();



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

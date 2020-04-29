#include "tablica.hpp"


using namespace std;


namespace {
	


	void tablica_powstanie(int* r1, int* r2, float** tab) { //tutaj tworze pierwszy raz tablice dwuwymiarowa, zwracam wskaznik do niej
		int wym1 = *r1;
		int wym2 = *r2;

		float** tablica = new float* [wym1];
			for (int i = 0; i < wym2; i++)
			tablica[i] = new float[wym2];

			for (int i = 0; i < wym1; i++) {
				for (int j = 0; j < wym2; j++) {

					tablica[i][j] = 0;
					}

			}
	}
	
	
	
	
	
	void filling(int* x, int* y, float** tab){
	
	int z,w;
	z=*x;
	w=*y;
	
	for (int i = 0; i < z; i++) {
		 for (int j = 0; j < w; j++) {

			 tab[i][j] = 0;

		 }


	 }
	
		
	}
	
	
	
	
	
	
	
	

	void removing_table(int* columns_number, float** tab) {
		int num = *columns_number;
		for (int i = 0; i < num; i++)
			delete[] tab[i];

		delete[] tab;

	}










	void tablica_rozmiar(int old1, int old2, int* rozmiar1, int* rozmiar2, float** tab) { //zmiana rozmiaru tablicy

		int r1 = *rozmiar1;
		int r2 = *rozmiar2;
		
		int *old2_ind=&old1;

		if (r1>=old1 || r2>=old2) {
			float** tab_copy = new float* [r1];

			for (int i = 0; i < r2; i++)
			tab_copy[i] = new float[r2];

			for (int i = 0; i < r1; i++) {
				for (int j = 0; j < r2; j++) {

					tab_copy[i][j] = 0;

				}


			}



			for (int i = 0; i < old1; i++) {
				for (int j = 0; j < old2; j++)
					tab_copy[i][j] = tab[i][j];

			}
			removing_table(old2_ind, tab);

			tab = tab_copy;
			
			removing_table(rozmiar2, tab_copy);
		}
		else {
			cout << endl << "Nowe wymiary musza byc wieksze  od poprzednich!" << endl;
		}
	}











	void aktualizowanie(int* rozmiar1, int* rozmiar2, float** tab) {

		int wiersz, kolumna;
		int koniec = 0;
		int w = *rozmiar1;
		int k = *rozmiar2;

		cout << "Rozmiar obecnej tablicy to: " << w << "x" << k << endl;

		while (koniec == 0)
		{

			cout << "Ktory element tablicy chcesz edytowac?" << endl;
			cout << "Wpisz numer wiersza: ";

			cin >> wiersz;
			while (wiersz  < 0 || wiersz > w)
			{
				cout << "Nie ma takiego wiersza! Wprowadz numer wiersza ponownie: ";
				cin >> wiersz;

			}

			cout << "Wpisz numer kolumny: ";

			cin >> kolumna;
			while (kolumna < 0 || kolumna > k)
			{
				cout << "Nie ma takiej kolumny! Wprowadz numer kolumny ponownie: ";
				cin >> kolumna;

			}

			cout << "W tej komorce znajduje sie: " << tab[wiersz][kolumna] << endl;
			cout << "Wprowadz nowa wartosc: ";
			cin >> tab[wiersz][kolumna];

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
}
#include "menu.hpp"



#define GREEN 32
using namespace std;
namespace {
	

	void wyswietlanie(int* r1, int* r2,  float**  tab) {

		int rr1 = *r1;
		int rr2 = *r2;

		
			int wyb;
			cout << "Chcesz wyswietlic wszystkie elementy, czy wybrany pojedynczy?" << endl <<
				"1. Wszystkie" << endl << "2. Wybrany" << endl;

			cin >>wyb;


			switch (wyb)
			{
			case 1:
			
			
			cout << " |";
			for(int i=0; i < rr2; i++){  //nr kolumny
				
					
				cout <<i;
					
				cout <<"|";
			}
			cout <<endl;
			for(int a=0; a <=rr2; a++){
				cout <<"==";
			}
				cout << endl;
				
				for (int i = 0; i < rr1; i++) {
					
					
					cout << i;
						
					cout << "|";
					
					
					for (int j = 0; j < rr2; j++) {

						cout << tab[i][j] << "|";
							

					}
					cout << endl;
					for(int a=0; a <=rr2; a++){
						
				cout <<"==";
			}
					cout << endl;
				}

				break;
			case 2:
				int x, y;
				cout << "Wprowadz wspolrzedne:" << endl << "Wiersz: ";
				cin >> x;
				while (x<1 || x>rr1)
				{
					cout << endl << "Nie ma takiej wspolrzednej, wprowadz poprawna: ";
					cin >> x;
				}

				cout << endl << "Kolumna: ";
				cin >> y;
				while (y<1 || y>rr1)
				{
					cout << endl << "Nie ma takiej wspolrzednej, wprowadz poprawna: ";
					cin >> y;
				}

				cout << tab[x][y];

				break;
			default:

				break;
			}



		



	}
}


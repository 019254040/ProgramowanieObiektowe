
#include <iostream>
#include <stdio.h>
#define GREEN 32
using namespace std;
namespace {
	float** tabl;

	void wyswietlanie(int* r1, int* r2) {

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
				
					printf("%c[%dm",0x1B,GREEN);
				cout <<i;
					printf("%c[%dm",0x1B,0);
				cout <<"|";
			}
			cout <<endl;
			for(int a=0; a <=rr2; a++){
				cout <<"==";
			}
				cout << endl;
				
				for (int i = 0; i < rr1; i++) {
					
						printf("%c[%dm",0x1B,GREEN);
					cout << i;
						printf("%c[%dm",0x1B,0);
					cout << "|";
					
					
					for (int j = 0; j < rr2; j++) {

						cout << tabl[i][j] << "|";
							

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

				cout << tabl[x][y];

				break;
			default:

				break;
			}



		



	}
}


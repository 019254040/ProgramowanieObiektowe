#include "main.hpp"
	

	void Tablica::wyswietlanie() 
	{
		
			int wyb;
			cout << "Chcesz wyswietlic wszystkie elementy, czy wybrany pojedynczy?" << endl <<
				"1. Wszystkie" << endl << "2. Wybrany" << endl;

			cin >>wyb;


			switch (wyb)
			{
			case 1:
			
			
			cout << " |";
			for(int i=0; i < line ; i++){  //nr kolumny
				
					
				cout <<i;
					
				cout <<"|";
			}
			cout <<endl;
			for(int a=0; a <=column; a++){
				cout <<"==";
			}
				cout << endl;
				
				for (int i = 0; i < line; i++) {
					
					
					cout << i;
						
					cout << "|";
					
					
					for (int j = 0; j < column; j++) {

						cout << tablica_str[i][j] << "|";
							

					}
					cout << endl;
					for(int a=0; a <=column; a++){
						
				cout <<"==";
			}
					cout << endl;
				}

				break;
			case 2:
				int x, y;
				cout << "Wprowadz wspolrzedne:" << endl << "Wiersz: ";
				cin >> x;
				while (x<1 || x>line)
				{
					cout << endl << "Nie ma takiej wspolrzednej, wprowadz poprawna: ";
					cin >> x;
				}

				cout << endl << "Kolumna: ";
				cin >> y;
				while (y<1 || y>column)
				{
					cout << endl << "Nie ma takiej wspolrzednej, wprowadz poprawna: ";
					cin >> y;
				}

				cout << tablica_str[x][y];

				break;
			default:

				break;
			}



		



	}



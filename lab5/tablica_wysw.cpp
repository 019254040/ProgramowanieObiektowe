#include "main.hpp"
#include "menu.hpp"
	

	void Tablica::wyswietlanie() 
	{
		
			int wyb;
			
			interface_wysw(1);
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
				
				interface_wysw(2);
				
				cin >> x;
				while (x<1 || x>line)
				{
					interface_wysw(3);
					cin >> x;
				}

				interface_wysw(4);
				cin >> y;
				while (y<1 || y>column)
				{
					interface_wysw(3);
					cin >> y;
				}

				cout << tablica_str[x][y];

				break;
			default:

				break;
			}



		



	}



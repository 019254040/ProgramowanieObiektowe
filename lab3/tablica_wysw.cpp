#include "main.hpp"
#include "tablica_wysw.hpp"
#include "menu.hpp"

using namespace std;
	

	void wyswietlanie(Tablica & tab) 
	{
		
			int wyb;
			
			interface_wysw(1);

			cin >>wyb;


			switch (wyb)
			{
			case 1:
			
			
			cout << " |";
			for(int i=0; i < tab.line ; i++)
			{  //nr kolumny
				
					
				cout <<i;
					
				cout <<"|";
			}
			cout <<endl;
			for(int a=0; a <=tab.column; a++)
			{
				cout <<"==";
			}
				cout << endl;
				
				for (int i = 0; i < tab.line; i++)
					{
					
					
					cout << i;
						
					cout << "|";
					
					
					for (int j = 0; j < tab.column; j++)
						{

						cout << tab.tablica_str[i][j] << "|";
							

					}
					cout << endl;
					for(int a=0; a <=tab.column; a++)
					{
						
				cout <<"==";
			}
					cout << endl;
				}

				break;
			case 2:
				int x, y;
				
				interface_wysw(2);
				
				cin >> x;
				while (x<1 || x>tab.line)
				{
					interface_wysw(3);
					
					cin >> x;
				}

				interface_wysw(4);
				cin >> y;
				while (y<1 || y>tab.column)
				{
					interface_wysw(3);
					cin >> y;
				}

				cout << tab.tablica_str[x][y];

				break;
			default:

				break;
			}



		



	}



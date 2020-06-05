#include "main.hpp"
#include "menu.hpp"

	void Tablica::wyswietlanie(int type) 
	{
			
				int x, y;
				interface_wysw(2);
				cin >> x;
				
				while (x<1 || x>line)
				{
					interface_wysw(3);
					cin >> x;
				}

				interface_wysw(1);
				cin >> y;
				while (y<1 || y>column)
				{
					interface_wysw(3);
					cin >> y;
				}

			if(type==1){
				cout << cellArr[x][y].floatOut();

			}
			else{
				
				cout << cellArr[x][y].stringOut();

			}


	}
		



	



#include "main.hpp"
#include "menu.hpp"

int choice;

int loop=1;


Tablica arr;


int main() 
{
	////////
	arr.size_open();
	
	arr.tablica_powstanie();

	arr.filling();
	
	arr.file_open();
	
	//// interface



	while(loop!=0){
		choice=menu();
		switch(choice) 
		{

			case 1:
		
				arr.removing_table();

				arr.how();

				arr.tablica_powstanie();

			break;
			
			case 2:
					
				arr.how();

				arr.tablica_rozmiar();
				
			case 3:
			
				arr.aktualizowanie();

			break;
			
			case 4:

				arr.wyswietlanie();

			break;
				
			case 5:
			
			switch(menu_operations())
				{
					case 1:	
						arr.addition_line ();
					break;
					
					case 2:
						arr.addition_column ();
					break;
					
					case 3:
						arr.minimum ();
					break;
					
					case 4:
						arr.maximum ();
					break;
					
					case 5:
						arr.average ();
					break;
					
					default:
						
					break;
				}
				
			
			break;
			
			case 6:
				
				loop=0;
			
			break;
				
			default:
			break;
				
				
	
		}					
	}
	////

		arr.size_close();


		arr.file_close();

		arr.removing_table();

	return 0;
}
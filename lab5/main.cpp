#include "main.hpp"
#include "menu.hpp"

int choice;

int loop=1;
int error=0;
int type;

Tablica arr;


int main() 
{
	type=typeMenu();
	
	error=arr.size_open(type);
	
	interface(error);
	
	arr.tablica_powstanie();
	
	error=arr.file_open(type);
	
	interface(error);
	
if(error!=1)
{

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

				error=arr.tablica_rozmiar(type);
				
				interface(error);
				
				if(error==2)
				{
					loop=0;
				}
				
			case 3:
			
				arr.aktualizowanie(type);

			break;
			
			case 4:

				arr.wyswietlanie(type);

			break;
				
			case 5:
			
			switch(menu_operations(type))
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
}
		error=0;
		
		error=arr.size_close(type);

		interface(error);

		error=arr.file_close(type);
		
		interface(error);

		arr.removing_table();

	return 0;
}
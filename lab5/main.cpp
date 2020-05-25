#include "main.hpp"
#include "menu.hpp"

int choice;

int loop=1;

float help;

int type;

Tablica arr;

int main() 
{
	
	type=choice_arr();
	if(type==1)
	{
		error_zapisywanie(arr.size_open_float());

		arr.tablica_powstanie_float();
		
		arr.filling();
	
		error_zapisywanie(arr.file_open_float());
		
	}
	else
	{
		error_zapisywanie(arr.size_open_string());

		arr.tablica_powstanie_string();
	
		error_zapisywanie(arr.file_open_string());
	}
	
	//// interface



	while(loop!=0){
		choice=menu();
		switch(choice) 
		{

			case 1:
		
				arr.removing_table(type);

				arr.how();
				
				if(type==1)
				{
					arr.tablica_powstanie_float();
				}
				else
				{
					arr.tablica_powstanie_string();
				}
				
			break;
			
			case 2:
					
				arr.how();
				
				if(type==1)
				{
				arr.tablica_rozmiar_float();
				}
				else
				{
						arr.tablica_rozmiar_string();
				}
				
			case 3:
			
				arr.aktualizowanie();

			break;
			
			case 4:

				arr.wyswietlanie();

			break;
				
			case 5:
			
			if(type==1)
			{
			
			switch(menu_operations())
				{
					case 1:	
					
						
						help=arr.addition_line (arr.interface_operations_add(1));
						interface_operations_add2 (help);
					break;
					
					case 2:
					interface_operations_add2(arr.addition_column (arr.interface_operations_add(2)));
						
					break;
					
					case 3:
					
						arr.minimum (arr.testing(1), 1);
						
					break;
					
					case 4:
					
						arr.minimum (arr.testing(2), 2);
					
					break;
					
					case 5:
						arr.maximum(arr.testing(1),1);
						
					break;
					
					case 6:
					
						arr.maximum(arr.testing(2),2);
					
					break;
					
					case 7:
						arr.average (arr.testing(1), 1);
						
					break;
					
					case 8:
						
						arr.average(arr.testing(2), 2);
					
					default:
						
					break;
				}
			}
			else
			{
			main_error_string();	
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

	if(type==1)
	{

		error_zapisywanie(arr.size_close_float());


		error_zapisywanie(arr.file_close_float());

		arr.removing_table(type);
	}
	else
	{		
		error_zapisywanie(arr.size_close_string());

		error_zapisywanie(arr.file_close_string());

		arr.removing_table(type);
		
		
	}	
	return 0;
}
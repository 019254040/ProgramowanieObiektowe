#include "tablica.hpp"
#include "tablica_wysw.hpp"
#include "menu.hpp"
#include "zapisywanie.hpp"

using namespace std;

float** table;
int size1 , size2, oldsize1, oldsize2, choice;
int* x_ind= &size1;
int* y_ind= &size2;
int loop=1;



int main() {
	////////
	size_open(x_ind, y_ind);
	
	table= tablica_powstanie(x_ind, y_ind);

	filling(x_ind, y_ind, table);
	
	file_open(x_ind, y_ind, table);
	
	//// interface



	while(loop!=0){
		choice=menu(size1);
		switch(choice) 
		{

			case 1:
		
				removing_table(y_ind, table);

				how(x_ind, y_ind);

				table= tablica_powstanie(x_ind, y_ind);

			break;
			
			case 2:
				
				oldsize1=*x_ind;
				oldsize2=*y_ind;
				
				how(x_ind, y_ind);

				tablica_rozmiar(oldsize1, oldsize2 ,x_ind, y_ind, table);
				
			case 3:
			
				aktualizowanie(x_ind, y_ind, table);

			break;
			
			case 4:

				wyswietlanie(x_ind, y_ind, table);

			break;
				
			case 5:
			
				loop=0;
			
			break;
				
			default:
			break;
				
				
	
		}					
	}
	////

		size_close(x_ind, y_ind);


		file_close(x_ind, y_ind, table);

		removing_table(y_ind, table);

	return 0;
}
#include "main.hpp"
#include "menu.hpp"

	void xd(){

	Cell** tab = new Cell*[line];
	for(int i=0; i <column; i++){
		
		tab[i]=new Cell[column];
	}
	


	for (int i = 0; i < line ; i++)
		{
			delete[] tab[i];
		}
		
		delete[] tab;




	}


	void Tablica::tablica_powstanie()
	{ 
	


		float** tablica = new float* [line];
			for (int i = 0; i < column; i++)
			{
				tablica[i] = new float[column];
			}
			
			for (int i = 0; i < line; i++) {
				for (int j = 0; j < column; j++) {

					tablica[i][j] = zero;
					}

			}
			tablica_str=tablica;
	}
	
	/////////////////////////////////////////////////////////////////////////////
	
	
	
	void Tablica::filling()
	{
	

	for (int i = 0; i < line; i++) {
		 for (int j = 0; j < column; j++) {
			 
			tablica_str[i][j]=zero;

		 }


	 }
	
		
	}
	
	
	
	////////////////////////////////////////////////////////////////////////////////
	
	
	
	

	void Tablica::removing_table()
	{
		
		for (int i = 0; i < line ; i++)
		{
			delete[] tablica_str[i];
		}
		
		delete[] tablica_str;

	}



/////////////////////////////////////////////////////////////////////////////






	int Tablica::tablica_rozmiar() 
	{ //zmiana rozmiaru tablicy
	
		old1=line;
		old2= column;
		

		if (line>=old1 || column>=old2) 
		{
			float** tab_copy = new float* [line];

			for (int i = 0; i < column; i++)
			tab_copy[i] = new float[column];

			for (int i = 0; i < line; i++) {
				for (int j = 0; j < column; j++) {

					tab_copy[i][j] = 0;

				}


			}



			for (int i = 0; i < old1; i++) {
				for (int j = 0; j < old2; j++)
					tab_copy[i][j] = tablica_str[i][j];

			}
			
			for(int i=0; i < old1; i++)
			{
				delete[] tablica_str[i];
			}
			
			delete[] tablica_str;
			

			tablica_str = tab_copy;
			
			
			for(int i=0; i < line; i++)
			{
				delete[] tab_copy[i];
			}
			
			delete[] tab_copy;
		}
		else {
			return 2;
			
		}
		return 0;
	}




//////////////////////////////////////////////////////////////////////////////////






	void Tablica::aktualizowanie() 
	{

		int wiersz, kolumna;
		int koniec = 0;
		
		interface_aktualizowanie(1);
		cout << line << "x" << column << endl;

		while (koniec == 0)
		{

			interface_aktualizowanie(2);

			cin >> wiersz;
			while (wiersz  < 0 || wiersz > line)
			{
				interface_aktualizowanie(3);
				cin >> wiersz;

			}

			interface_aktualizowanie(4);

			cin >> kolumna;
			while (kolumna < 0 || kolumna > column)
			{
				interface_aktualizowanie(3);
				cin >> kolumna;

			}
			
			interface_aktualizowanie(5);
			cout << tablica_str[wiersz][kolumna] << endl;
			interface_aktualizowanie(6);
			cin >> tablica_str[wiersz][kolumna];

			interface_aktualizowanie(7);



			cin >> koniec; 

			if (koniec == 1) {
				koniec = 1;
			}
			else
			{
				koniec = 0;
			}
		}


	}

/////////////////////////////////////////////////////////////


void Tablica::how()
	{
		int z=0;
		int w=0;
		old1=line;
		old2=column;
		
		while(z<1)
		{
			
			interface_how(1);
			cin >> z;
		
			if(z<1)
			{
				interface_how(3);
			
			
			}
		
		}
		
		while(w<1)
		{
								
			interface_how(2);
			cin >> w;
				
			if(w<1)
			{
				interface_how(3);
			
			
			}



		}

		line=z;
		column=w;


	}
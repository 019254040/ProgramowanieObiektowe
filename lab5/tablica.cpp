#include "main.hpp"
#include "menu.hpp"


	void Tablica::tablica_powstanie_float()
	{ 
	


		float** tablica = new float* [line];
			for (int i = 0; i < column; i++)
			{
				tablica[i] = new float[column];
			}
			
			for (int i = 0; i < line; i++) {
				for (int j = 0; j < column; j++) {

					tablica[i][j] = 0;
					}

			}
			tablica_str=tablica;
	}
	
	///////////////////////////////////////////////////////////////////////////
	
		void Tablica::tablica_powstanie_string()
	{ 
	


		string** tablica = new string* [line];
			for (int i = 0; i < column; i++)
			{
				tablica[i] = new string[column];
			}
			
			for (int i = 0; i < line; i++) {
				for (int j = 0; j < column; j++) {

					tablica[i][j] = "-";
					}

			}
			tablica_string=tablica;
	}
	
	/////////////////////////////////////////////////////////////////////////////
	
	
	
	void Tablica::filling()
	{
	

	for (int i = 0; i < line; i++)
		{
		 for (int j = 0; j < column; j++) 
		 {
			 
			tablica_str[i][j]=zero;

		 }


	 }
	
		
	}
	
	
	
	/////////////////////////////////////////////////////////////////////////////////////////////////
	
	
	
	

	void Tablica::removing_table(int t)
	{
		if(t==1)
		{
		
			for (int i = 0; i < line ; i++)
			{
			delete[] tablica_str[i];
			}
		
			delete[] tablica_str;
		}
		else
		{
			
			for (int i = 0; i < line ; i++)
			{
			delete[] tablica_string[i];
			}
		
			delete[] tablica_string;
		
		}
	}



/////////////////////////////////////////////////////////////////////////////






	void Tablica::tablica_rozmiar_float() 
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



			for (int i = 0; i < old1; i++)
				{
				for (int j = 0; j < old2; j++)
				{
					tab_copy[i][j] = tablica_str[i][j];
}
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
			interface_tablica(1, 0, 0, 0);
		}
	}
	
	
	///////////////////////////////////////////////////////////////////////////////////////////////

	void Tablica::tablica_rozmiar_string() 
	{ //zmiana rozmiaru tablicy
	
		old1=line;
		old2= column;
		

		if (line>=old1 || column>=old2) 
		{
			string** tab_copy = new string* [line];

			for (int i = 0; i < column; i++)
			tab_copy[i] = new string[column];

			for (int i = 0; i < line; i++) {
				for (int j = 0; j < column; j++) {

					tab_copy[i][j] ;

				}


			}



			for (int i = 0; i < old1; i++)
				{
				for (int j = 0; j < old2; j++)
				{
					tab_copy[i][j] = tablica_string[i][j];
}
			}
			
			for(int i=0; i < old1; i++)
			{
				delete[] tablica_string[i];
			}
			
			delete[] tablica_string;
			

			tablica_string = tab_copy;
			
			
			for(int i=0; i < line; i++)
			{
				delete[] tab_copy[i];
			}
			
			delete[] tab_copy;
		}
		else {
			interface_tablica(1, 0, 0, 0);
		}
	}


//////////////////////////////////////////////////////////////////////////////////






	void Tablica::aktualizowanie() 
	{

		int wiersz, kolumna;
		int koniec = 0;
		

		interface_tablica(2, line, column, 0);

		while (koniec == 0)
		{

			interface_tablica(3, 0, 0, 0);

			cin >> wiersz;
			while (wiersz  < 0 || wiersz > line)
			{
				interface_tablica(4, 0, 0, 0);
				cin >> wiersz;

			}

			interface_tablica(5, 0, 0, 0);

			cin >> kolumna;
			while (kolumna < 0 || kolumna > column)
			{
				interface_tablica(6, 0, 0, 0);
				cin >> kolumna;

			}
			
			interface_tablica(7, 0, 0, tablica_str[wiersz][kolumna] );
			
			cin >> tablica_str[wiersz][kolumna];

			interface_tablica(8, 0, 0, 0);



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
			
			interface_tablica(9, 0, 0, 0);
			cin >> z;
		
			if(z<1)
			{
				interface_tablica(10, 0, 0, 0);
			
			
			}
		
		}
		
		while(w<1)
		{
				
			interface_tablica(11, 0, 0, 0);		
			
			cin >> w;
				
			if(w<1)
			{
				interface_tablica(10, 0, 0, 0);
			
			
			}



		}

		line=z;
		column=w;


	}
	
	/////////////////////////////////////////////////////////////
	
	int Tablica::number_line()
	{
		
	int x;
	
	x=line;
	
	return x;
	}
	
	int Tablica::number_column()
	{
		
		int x;
		
		x=column;
		
		return x;
	}
		
		
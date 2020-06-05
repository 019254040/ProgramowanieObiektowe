#include "main.hpp"
#include "menu.hpp"

	void Tablica::tablica_powstanie(){

	Cell** tab = new Cell*[line];
	for(int i=0; i < column; i++){
		
		tab[i]=new Cell[column];
	}
	
	cellArr=tab;

	}

	////////////////////////////////////////////////////////////////////////////////


	void Tablica::removing_table()
	{
		
		for (int i = 0; i < line ; i++)
		{
			delete[] cellArr[i];
		}
		
		delete[] cellArr;

	}



/////////////////////////////////////////////////////////////////////////////

int Tablica::tablica_rozmiar(int type) 
{ //zmiana rozmiaru tablicy
	

		if (line>=old1 || column>=old2) 
		{
			Cell** tab_copy = new Cell* [line];

			for (int i = 0; i < column; i++)
			tab_copy[i] = new Cell[column];

	if(type==1){
	
			for (int i = 0; i < old1; i++) {
				for (int j = 0; j < old2; j++){
					tab_copy[i][j].floatFunction (cellArr[i][j].floatOut());
				}
			}
			
	}	
	else{
		
		for (int i = 0; i < old1; i++) {
				for (int j = 0; j < old2; j++){
					tab_copy[i][j].stringFunction (cellArr[i][j].stringOut());
				}
			}
	
	}
			
			for(int i=0; i < old1; i++)
			{
				delete[] cellArr[i];
			}
			
			delete[] cellArr;
			

			cellArr = tab_copy;
			
			
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






	void Tablica::aktualizowanie(int type) 
	{

		int wiersz, kolumna;
		int koniec = 0;
		float data1;
		string data2;
		
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
			
		if(type==1){
			
			interface_aktualizowanie(5);
			
			cout << cellArr[wiersz][kolumna].floatOut() << endl;
			
			interface_aktualizowanie(6);
			
			cin >> data1;
			
			cellArr[wiersz][kolumna].floatFunction(data1);
			
		}
		else{
			
			interface_aktualizowanie(5);
			
			cout << cellArr[wiersz][kolumna].stringOut() << endl;
			
			interface_aktualizowanie(6);
			
			cin >> data2;
			
			cellArr[wiersz][kolumna].stringFunction(data2);

		}
		
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
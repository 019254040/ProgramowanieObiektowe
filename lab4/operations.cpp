#include "main.hpp"

void Tablica::addition_line ()
{
	int nr_line;
	int sum=0;
	int control=1;
	
	cout << endl << "W tablicy znajduje sie " << line << " wierszy.";
	cout << endl << "Ktory wiersz chcesz zsumowac?";
	cout << endl << "Nr wiersza: ";
	cin >> nr_line;
	
	while(control!=0)
	{	
		if(nr_line < 0 || nr_line > line)
		{
			cout <<endl <<" Nie ma takiego wiersza, wprowadz poprawny numer: ";
			cin >> nr_line;
		}
		else
		{
			control=0;
		}
	}

	
	
	for(int i=0; i< column; i++)
	{
		sum+= tablica_str[nr_line][i];
	}
	
	cout << endl <<"Suma elementow tego wiersza wynosi: " << sum;

}


/////////////////////////////////////////////////////////////////////////////////////////



void Tablica::addition_column ()
{
	int nr_column;
	int sum=0;
	int control=1;
	
	cout << endl << "W tablicy znajduje sie " << column << " kolumn.";
	cout << endl << "Ktora kolumne chcesz zsumowac?";
	cout << endl << "Nr kolumny: ";
	cin >> nr_column;
	
	while(control!=0)
	{	
		if(nr_column < 0 || nr_column > column)
		{
			cout <<endl <<"Nie ma takiej kolumny, wprowadz poprawny numer: ";
			cin >> nr_column;
		}
		else
		{
			control=0;
		}
	}
	
	for(int i=0; i< line; i++)
	{
		sum+= tablica_str[i][nr_column];
	}
	
	cout << endl <<"Suma elementow tej kolumny wynosi: " << sum;

}


///////////////////////////////////////////////////////////////////////////////////////////////

void Tablica::minimum ()
{
	
	int min=tablica_str[0][0];
	int min_line;
	int min_column;
	
	for(int i=0; i< line; i++)
	{
		for(int j=0; j< column; j++)
		{
			if(min >= tablica_str[i][j])
			{
				min=tablica_str[i][j];
				
				min_line=i;
				min_column=j;
			}
			
			
		}
	}
	
	
	cout <<endl << "Najmniejszy element to: " << min << ". Znajduje sie w: " << min_line << "x" << min_column;
			
			
}	
		
//////////////////////////////////////////////////////////////////////////////////////////////////////		
	
void Tablica::maximum ()
	{
	
	int max=tablica_str[0][0];
	int max_line;
	int max_column;
	
	for(int i=0; i< line; i++)
	{
		for(int j=0; j < column; j++)
		{
			if(max <= tablica_str[i][j])
			{
				max=tablica_str[i][j];
				
				max_line=i;
				max_column=j;
			}
			
			
			
		}
	}
	
	
	cout <<endl << "Najwiekszy element to: " << max << ". Znajduje sie w: " << max_line << "x" << max_column;
			
			
}	
	
//////////////////////////////////////////////////////////////////////////////////////////////////////
	
void Tablica::average ()
{
	
	float sum=0;
	
	for(int i=0; i< line; i++)
	{
		for(int j=0; j < column; j++)
		{
			sum+=tablica_str[i][j];
			
		}
	}
	
	cout << "Srednia wszystkich elementow wynosi: " << sum/(line*column);
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	



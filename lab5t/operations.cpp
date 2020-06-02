#include "main.hpp"
#include "menu.hpp"

void Tablica::addition_line ()
{
	int nr_line;
	int sum=0;
	int control=1;
	
	
	interface_add(1);
	cin >> nr_line;
	
	while(control!=0)
	{	
		if(nr_line < 0 || nr_line > line)
		{
			interface_add(2);
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
	
	interface_add(3);
	cout << sum;

}


/////////////////////////////////////////////////////////////////////////////////////////



void Tablica::addition_column ()
{
	int nr_column;
	int sum=0;
	int control=1;
	
	interface_add(4);
	cin >> nr_column;
	
	while(control!=0)
	{	
		if(nr_column < 0 || nr_column > column)
		{
			interface_add(2);
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
	
	interface_add(3);
	cout << sum;

}


///////////////////////////////////////////////////////////////////////////////////////////////

void Tablica::minimum ()
{	
	int x;
	int min;
	interface_min(1);
	
	cin >> x;
	
	if(x==1)
	{
		cin >> x; ///// kontrola bledow
		min=tablica_str[x][0];
	
	
		for(int j=0; j< column; j++)
		{
			if(min >= tablica_str[x][j])
			{
				min=tablica_str[x][j];
			}
		}
	
	}
	else
	{
		cin >> x;
		min=tablica_str[0][x];
		
		for(int j=0; j< line; j++)
		{
			if(min >= tablica_str[j][x])
			{
				min=tablica_str[j][x];
			}
		}
		
	}
	
	interface_min(2);
	cout << min;
			
			
}	
		
//////////////////////////////////////////////////////////////////////////////////////////////////////		
	
void Tablica::maximum ()
	{
		int x;
		int max;
		interface_max(1);
		cin >> x;
		
		if(x==1)
		{
			cin >> x;
		max=tablica_str[x][0];

		for(int j=0; j < column; j++)
		{
			if(max <= tablica_str[x][j])
			{
				max=tablica_str[x][j];
				
			}
			
		}
	
		}
		else
		{
			cin >> x;
		max=tablica_str[0][x];

		for(int j=0; j < line; j++)
		{
			if(max <= tablica_str[j][x])
			{
				max=tablica_str[j][x];
				
			}
			
		}
		}
	interface_max(2);
	cout  << max;
			
			
}	
	
//////////////////////////////////////////////////////////////////////////////////////////////////////
	
void Tablica::average ()
{
	int x;
	float sum=0;
	
	interface_av(1);
	cin >> x;
	
	if(x==1)
	{
		
		for(int j=0; j < column; j++)
		{
			sum+=tablica_str[x][j];
			
		}
	
	}
	else{
		
		
		for(int j=0; j < line; j++)
		{
			sum+=tablica_str[j][x];
			
		}
		
		
	}
	interface_av(2);
	cout << sum/(line*column);
	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	



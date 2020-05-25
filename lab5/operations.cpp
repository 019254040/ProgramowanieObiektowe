#include "main.hpp"
#include "menu.hpp"

float Tablica::addition_line (int nr)
{
	
	float sum=0;
	
	for(int i=0; i< column; i++)
	{
		sum+= tablica_str[nr][i];
	}
	
	return sum;
	


}


/////////////////////////////////////////////////////////////////////////////////////////



float Tablica::addition_column (int nr)
{

	float sum=0;
	
	for(int i=0; i< line; i++)
	{
		sum+= tablica_str[i][nr];
	}
	
	return sum;


}


///////////////////////////////////////////////////////////////////////////////////////////////

void Tablica::minimum (int nr, int op)
{
	

	if(op==1)
	{
	
		float min=tablica_str[nr][0];
	
		for(int j=0; j < column; j++)
		{
			if(min >= tablica_str[nr][j])
			{
				min=tablica_str[nr][j];
			}	
		}
	
		interface_operations(min);
	}
	else
	{
		
		float min=tablica_str[0][nr];	
		
		for(int i=0; i < line; i++)
		{
			if(min >= tablica_str[i][nr])
			{
			
				min=tablica_str[i][nr];
			
			}
		}
			interface_operations(min);
	}
	
	
			
			
}	
		
//////////////////////////////////////////////////////////////////////////////////////////////////////		
	
void Tablica::maximum (int nr, int op)
	{
	
	if(op==1)
	{
		
	float max=tablica_str[nr][0];
	
		for(int j=0; j < column; j++)
		{
			if(max <= tablica_str[nr][j])
			{
				max=tablica_str[nr][j];
				
			}
		}
		interface_operations(max);
	}
	else{
		
		float max=tablica_str[0][nr];
	
		for(int j=0; j < line; j++)
		{
			if(max <= tablica_str[j][nr])
			{
				max=tablica_str[j][nr];
				
			}
		}
		interface_operations(max);
		
		
	}
			
			
}	
	
//////////////////////////////////////////////////////////////////////////////////////////////////////
	
void Tablica::average (int nr, int op)
{
	
	if(op==1)
	{
		
	float sum=0;
	
		for(int j=0; j < column; j++)
		{
			sum+=tablica_str[nr][j];
			
		}
	
	interface_operations(sum/column);
	}
	else{
		
		float sum=0;
	
		for(int j=0; j < line; j++)
		{
			sum+=tablica_str[j][nr];
			
		}
	
	interface_operations(sum/line);
		
	}

	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	



#include "main.hpp"
#include "menu.hpp"
	
	int Tablica::size_open_float()
	{
	
	int x, y;
	
	fstream size_file;
	size_file.open("size.txt", ios::in);
	
	if(size_file.good()){
	
		size_file >> x;
		size_file >> y;
	
			line=x;
			column=y;

	
		}
		else {
			
			return 1;
			
		}
		
		size_file.close();
		return 0;
	}
	
	/////////////////////////////////////////////////////////////////////////////
	
	int Tablica::size_open_string()
	{
	
	int x, y;
	
	fstream size_file;
	size_file.open("size_string.txt", ios::in);
	
	if(size_file.good()){
	
		size_file >> x;
		size_file >> y;
	
			line=x;
			column=y;

	
		}
		else {
			
			return 1;
			
		}
		
		size_file.close();
		return 0;
	}
	/////////////////////////////////////////////////////////////////	
	
	int Tablica::file_open_float()
	{
	
	float bufor;
	
	fstream file;
	file.open("savefile.txt", ios::in);

	
	if(file.good()){
	
		for(int i=0; i< line; i++){
			for(int j=0; j< column; j++){
	
				file >> bufor;
				tablica_str[i][j]= bufor;
	
	
	
		} }
	}
	else {
		
		return 2;
		
	}
	
	file.close();
	return 0;
	}
	
	///////////////////////////////////////////////////////////////////////////////////
	
	
	int Tablica::file_open_string()
	{
	
	string bufor;
	
	fstream file;
	file.open("savefile_string.txt", ios::in);

	
	if(file.good()){
	
		for(int i=0; i< line; i++){
			for(int j=0; j< column; j++){
	
				file >> bufor;
				tablica_string[i][j]= bufor;
	
	
	
		} }
	}
	else {
		
		return 2;
		
	}
	
	file.close();
	return 0;
	}
	
		//////////////////////////////////////////////////////////////////
	
	
	
	
	
	int Tablica::size_close_float()
	{
	
		fstream size_file_close;
		size_file_close.open("size.txt", ios::out | ios::trunc);
	
	
		if(size_file_close.good()){
	
		
		size_file_close << line;
		size_file_close << " ";
		size_file_close << column;
		
	
	
		}
		else {
			return 3;
			
		}
		
		size_file_close.close();
		return 0;
	}
	
	//////////////////////////////////////////////////////////////////////////////////////////
	
	int Tablica::size_close_string()
	{
	
		fstream size_file_close;
		size_file_close.open("size_string.txt", ios::out | ios::trunc);
	
	
		if(size_file_close.good()){
	
		
		size_file_close << line;
		size_file_close << " ";
		size_file_close << column;
		
	
	
		}
		else {
			return 3;
			
		}
		
		size_file_close.close();
		return 0;
	}
	
		//////////////////////////////////////////////////////////////////
	
	
	
	
	
	int Tablica::file_close_float()
	{
	
		fstream file_close;
		file_close.open("savefile.txt", ios::out | ios::trunc);
		
		if(file_close.good()){
	
			for(int i=0; i< line; i++){
				for(int j=0; j< column; j++){
			
					file_close << tablica_str[i][j];
					file_close << " ";
	
	
	
				}
							
			
			}
		}
		else {
			return 4;
			
		}
		
		file_close.close();
		return 0;
	}
	
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	int Tablica::file_close_string()
	{
	
		fstream file_close;
		file_close.open("savefile_string.txt", ios::out | ios::trunc);
		
		if(file_close.good()){
	
			for(int i=0; i< line; i++){
				for(int j=0; j< column; j++){
			
					file_close << tablica_string[i][j];
					file_close << " ";
	
	
	
				}
							
			
			}
		}
		else {
			return 4;
			
		}
		
		file_close.close();
		return 0;
	}
	
	
	

#include "main.hpp"
#include "menu.hpp"
	
	int Tablica::size_open(int type)
	{
	
	int x, y;
	fstream size_file;
	
	if(type==1){
		
	size_file.open("sizefloat.txt", ios::in);
	}
	else{
		
	size_file.open("sizestring.txt", ios::in);
	
	}
	
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
	
	
	//////////////////////////////////////////////////////////////////
	
	
	
	
	
	int Tablica::file_open(int type)
	{
	
	if(type==1){
	
	
		float bufor;
	
		fstream file;
		file.open("savefilefloat.txt", ios::in);

	
		if(file.good()){
	
			for(int i=0; i< line; i++){
				for(int j=0; j< column; j++){
	
					file >> bufor;
					cellArr[i][j].floatFunction(bufor);
	
			} 
		}
	}
	else {
		return 1;
	}
	
	file.close();
	return 0;
	
	}
	else {
		
		string bufor;
		
		fstream file;
		file.open("savefilestring.txt", ios::in);

	
		if(file.good()){
	
			for(int i=0; i< line; i++){
				for(int j=0; j< column; j++){
	
					file >> bufor;
					cellArr[i][j].stringFunction(bufor);
	
			} 
		}
	}
	else {
		return 1;
	}
	
	file.close();
	return 0;
	
		
		
		}
	}
	
	
	
		//////////////////////////////////////////////////////////////////
	
	
	
	
	
	int Tablica::size_close(int type)
	{
	
		fstream size_file_close;
		
		if(type==1){
			
		size_file_close.open("sizefloat.txt", ios::out | ios::trunc);
		}
		else{
			
		size_file_close.open("sizestring.txt", ios::out | ios::trunc);			
		}
	
		if(size_file_close.good()){
	
		
		size_file_close << line;
		size_file_close << " ";
		size_file_close << column;
		
	
	
		}
		else {
			return 1;
		}
		
		size_file_close.close();
		return 0;
	}
	
	
	
		//////////////////////////////////////////////////////////////////
	
	
	
	
	
	int Tablica::file_close(int type)
	{
	
		fstream file_close;
		
		if(type==1){
			
		file_close.open("savefilefloat.txt", ios::out | ios::trunc);
		}
		else{
			
		file_close.open("savefilestring.txt", ios::out | ios::trunc);			
		}
		
		
		if(file_close.good()){
	
			for(int i=0; i< line; i++){
				for(int j=0; j< column; j++){
			
			if(type==1){
			
					file_close << cellArr[i][j].floatOut();
					file_close << " ";
			}
			else{
						
					file_close << cellArr[i][j].stringOut();
					file_close << " ";
	
				}
							
			
			}
			}
		}
		else {
			return 1;
		}
		
		file_close.close();
		return 0;
	}
	
	
	
	
	
	

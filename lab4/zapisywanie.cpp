#include "main.hpp"

	
	void Tablica::size_open()
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
			cout << "ERROR SIZE_OPEN";
		}
		
		size_file.close();
		
	}
	
	
	//////////////////////////////////////////////////////////////////
	
	
	
	
	
	void Tablica::file_open()
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
		cout << "ERROR FILE_OPEN";
	}
	
	file.close();
	}
	
	
	
		//////////////////////////////////////////////////////////////////
	
	
	
	
	
	void Tablica::size_close()
	{
	
		fstream size_file_close;
		size_file_close.open("size.txt", ios::out | ios::trunc);
	
	
		if(size_file_close.good()){
	
		
		size_file_close << line;
		size_file_close << " ";
		size_file_close << column;
		
	
	
		}
		else {
			cout << "ERROR SIZE_CLOSE";
		}
		
		size_file_close.close();
	}
	
	
	
		//////////////////////////////////////////////////////////////////
	
	
	
	
	
	void Tablica::file_close()
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
			cout << "ERROR FILE_CLOSE";
		}
		
		file_close.close();
	}
	
	
	
	
	
	

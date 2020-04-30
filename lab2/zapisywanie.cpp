#include "zapisywanie.hpp"


using namespace std;

	
	
	void size_open(int *ind1, int *ind2)
	{
	
	int x, y;
	
	fstream size_file;
	size_file.open("size.txt", ios::in);
	
	if(size_file.good()){
	
		size_file >> x;
		size_file >> y;
	
			*ind1=x;
			*ind2=y;

	
		}
		else {
			cout << "ERROR SIZE_OPEN";
		}
		
		size_file.close();
		
	}
	
	
	//////////////////////////////////////////////////////////////////
	
	
	
	
	
	void file_open(int* size_line, int* size_column, float** table_save){
	
	int x,y;
	float bufor;
	
	fstream file;
	file.open("savefile.txt", ios::in);
	
	x=*size_line;
	y=*size_column;
	
	
	if(file.good()){
	
		for(int i=0; i<x; i++){
			for(int j=0; j<y; j++){
	
				file >> bufor;
				table_save[i][j]= bufor;
	
	
	
		} }
	}
	else {
		cout << "ERROR FILE_OPEN";
	}
	
	file.close();
	}
	
	
	
		//////////////////////////////////////////////////////////////////
	
	
	
	
	
	void size_close(int* size_line, int* size_column){
	
		fstream size_file_close;
		size_file_close.open("size.txt", ios::out | ios::trunc);
	
		int z, w;
		z=*size_line;
		w=*size_column;
	
		if(size_file_close.good()){
	
		
		size_file_close << z;
		size_file_close << " ";
		size_file_close << w;
		
	
	
		}
		else {
			cout << "ERROR SIZE_CLOSE";
		}
		
		size_file_close.close();
	}
	
	
	
		//////////////////////////////////////////////////////////////////
	
	
	
	
	
	void file_close(int *size_line, int *size_column, float** tab){
	
		fstream file_close;
		file_close.open("savefile.txt", ios::out | ios::trunc);
	
			int z,w;
	
			z=*size_line;
			w=*size_column;
	
		
		if(file_close.good()){
	
			for(int i=0; i< z; i++){
				for(int j=0; j< w; j++){
			
					file_close << tab[i][j];
					file_close << " ";
	
	
	
				}
							
			
			}
		}
		else {
			cout << "ERROR FILE_CLOSE";
		}
		
		file_close.close();
	}
	
	
	
	
	
	

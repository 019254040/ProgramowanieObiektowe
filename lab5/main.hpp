#ifndef main_hpp
#define main_hpp
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Cell
{
	friend class Tablica;
	
	public:
	
		float floatvalue;
		string stringvalue;
		int which;
	
	
	
		void floatFunction (float val){ 
			
			floatvalue=val;
			which=1;
			
		}
		
		void stringFunction (string val){ 
			
			stringvalue=val;
			which=2;
			
		}
		
		float floatOut(){
			return floatvalue;
		}
		
		string stringOut(){
			return stringvalue;
		}
};



class Tablica
{
	
	friend class Cell;
	
	private:
	
	/**
	* @param tablica_str - tablica elementow
	* @param line - ilosc wierszy tablicy
	* @param column - ilosc kolumn tablicy
	* @param old1, old2 - pomocnicze parametry zawierajace koljeno ilosc wierszy i kolumn
	*/
	
		float** tablica_str;
		
		int line;
		int column;
		int old1, old2;
		
	public:
		Cell** cellArr;
		
	int lineMethod(){
		
		return line;
	}

	int columnMethod(){

	return column;
	}		
		
		float const zero = 0;
	
	/**
	* Metody ponizej znajduja sie w pliku tablica.cpp
	*/
	
	/**
	*@param[out] line, column, old1, old2
	*/
	
		void how();
	
	/**
	*@param[out] tablica-str
	*@param[in] line, column
	*/
	
		void tablica_powstanie();
		
	
		
	/**
	*@param[in] tablica-str
	*@param[in] line, column
	*/
	
		void removing_table();
		
	/**
	*@param[in] old1, old2
	*@param[in, out] tablica-str
	*@param[in, out] line, column
	*/
	
		int tablica_rozmiar(int type);
		
	/**
	*@param[in, out] tablica-str
	*@param[in] line, column
	*/
	
		void aktualizowanie(int type);
		
	/**
	* Metoda ponizej znajduje sie w pliku tablica_wysw.cpp
	*@param[in] tablica-str
	*@param[in] line, column
	*/
	
		void wyswietlanie(int type);
		
	/**
	* Metody ponizej znajduja sie w zapisywanie.cpp
	*@param[in, out] line, column
	*/
	
		int size_open(int type);
		
	/**
	*@param[in, out] tablica-str
	*@param[in] line, column
	*/
	
		int file_open(int type);
		
	/**
	*@param[in] line, column
	*/
	
		int size_close(int type);
		
	/**
	*@param[in] line, column
	*@param[in] tablica-str
	*/
	
		int file_close(int type);
	
	/**
	* Metody ponizej znajduja sie w operations.cpp
	*@param[in] line, column
	*@param[in] tablica-str
	*/
	
		void addition_line ();
		void addition_column ();
		void minimum();
		void maximum ();
		void average ();
		
		
		
		
};




#endif
#ifndef main_hpp
#define main_hpp
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


class Tablica
{
	private:
	
	/**
	* @param tablica_str - tablica elementow
	* @param line - ilosc wierszy tablicy
	* @param column - ilosc kolumn tablicy
	* @param old1, old2 - pomocnicze parametry zawierajace koljeno ilosc wierszy i kolumn
	*/
	
	
		float** tablica_str;
		string** tablica_string;
		int line;
		int column;
		int old1, old2;
		

	
		
	public:
		
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
	
		void tablica_powstanie_float();
		void tablica_powstanie_string();
		
	/**
	*@param[in, out] tablica-str
	*@param[in] line, column
	*/
	
		void filling();
		
	/**
	*@param[in] tablica-str
	*@param[in] line, column
	*/
	
		void removing_table(int t);
		
	/**
	*@param[in] old1, old2
	*@param[in, out] tablica-str
	*@param[in, out] line, column
	*/
	
		void tablica_rozmiar_float();
		void tablica_rozmiar_string();
		
	/**
	*@param[in, out] tablica-str
	*@param[in] line, column
	*/
	
		void aktualizowanie();
		
	/**
	* Metoda ponizej znajduje sie w pliku tablica_wysw.cpp
	*@param[in] tablica-str
	*@param[in] line, column
	*/
	
		void wyswietlanie();
		
	/**
	* Metody ponizej znajduja sie w zapisywanie.cpp
	*@param[in, out] line, column
	*/
	
		int size_open_float();
		
		int size_open_string();
		
	/**
	*@param[in, out] tablica-str
	*@param[in] line, column
	*/
	
		int file_open_float();
		
		int file_open_string();
		
	/**
	*@param[in] line, column
	*/
	
		int size_close_float();
		int size_close_string();
		
	/**
	*@param[in] line, column
	*@param[in] tablica-str
	*/
	
		int file_close_float();
		int file_close_string();
	
	/**
	* Metody ponizej znajduja sie w operations.cpp
	*@param[in] line, column
	*@param[in] tablica-str
	*/
	
		float addition_line (int nr);
		float addition_column (int nr);
		void minimum (int nr, int op);
		void maximum (int nr, int op);
		void average (int nr, int op);
		
		int interface_operations_add(int choice);
		
		float testing(int op);
		
		
		int number_line();
		int number_column();
		
		
		
};


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////







class Cell : public Tablica
{
	
	float val;
	string word;
	
	
	
	
	
	
	
	
	
};
#endif
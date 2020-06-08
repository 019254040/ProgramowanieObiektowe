#ifndef cell_hpp
#define cell_hpp
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
	
	
	
		void floatFunction (float val);
		
		
		void stringFunction (string val);
		
		float floatOut();
		
		
		string stringOut();
			
};

#endif
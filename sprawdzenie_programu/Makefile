
output: main.o menu.o tablica_wysw.o tablica.o zapisywanie.o
		g++ main.o menu.o tablica_wysw.o tablica.o  zapisywanie.o -o output
		
main.o: main.cpp menu.hpp
	g++ -c main.cpp
	
menu.o: menu.cpp menu.hpp
	g++ -c menu.cpp
	
tablica_wysw.o: tablica_wysw.cpp menu.hpp
	g++ -c tablica_wysw.cpp
	
tablica.o: tablica.cpp menu.hpp
	g++ -c tablica.cpp
	
zapisywanie.o: zapisywanie.cpp menu.hpp
	g++ -c zapisywanie.cpp
	
clean:
	rm *.o output
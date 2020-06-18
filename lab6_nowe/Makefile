output: main.o menu.o tablica_wysw.o Tablica.o zapisywanie.o
		g++ main.o menu.o tablica_wysw.o Tablica.o  zapisywanie.o
		
main.o: main.cpp
	g++ -c main.cpp
	
menu.o: menu.cpp
	g++ -c menu.cpp
	
tablica_wysw.o: tablica_wysw.cpp
	g++ -c tablica_wysw.cpp
	
Tablica.o: tablica.cpp
	g++ -c tablica.cpp
	
zapisywanie.o: zapisywanie.cpp
	g++ -c zapisywanie.cpp
		
clean:
	rm *.o output
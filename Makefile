
output: main.o menu.o tablica_wysw.o tablica.o
		g++ main.o menu.o tablica_wysw.o tablica.o -o output
		
main.o: main.cpp
	g++ -c main.cpp
	
menu.o: menu.cpp
	g++ -c menu.cpp
	
tablica_wysw.o: tablica_wysw.cpp
	g++ -c tablica_wysw.cpp
	
tablica.o: tablica.cpp
	g++ -c tablica.cpp
	
clean:
	rm *.o output
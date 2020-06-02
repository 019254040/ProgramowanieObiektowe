#ifndef menu_hpp_
#define menu_hpp_
#include <iostream>
#include <fstream>

/**
* @return m - wartosc wpisana przez uzytkownika
*/

int menu();

/**
* @param[in, out] Tablica tab - struktura 
* @param[out] tab.line - ilosc wierszy w tablicy
* @param[out] tab.column - ilosc kolumn w tablicy
*/

void how(Tablica & tab );

/**
* @return m - wartosc wpisana przez uzytkownika
*/

int menu_operations();

void error();

void interface_aktualizowanie1 (int x, int y);

void interface_aktualizowanie2 ();

void interface_aktualizowanie3 ();

void interface_aktualizowanie4 ();

void interface_aktualizowanie5 ();

void interface_aktualizowanie6(float x);

void interface_aktualizowanie7();


void error_zapisywanie(int x);

void interface_wysw(int x);

void interface_operations(int x);
#endif

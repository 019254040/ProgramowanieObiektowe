#ifndef menu_hpp_
#define menu_hpp_
#include <iostream>
#include <cstdio>
#include <fstream>

int menu();

void how(int* x, int* y );
///
void tablica_powstanie(int* r1, int* r2, float** tab);

void filling(int* x, int* y, float** tab);

void removing_table(int* columns_number, float** tab);

void tablica_rozmiar(int old1, int old2, int* rozmiar1, int* rozmiar2, float** tab);

void aktualizowanie(int* rozmiar1, int* rozmiar2, float** tab);
///
void wyswietlanie(int* r1, int* r2,  float**  tab);
///
void size_open(int *ind1, int *ind2);

void file_open(int* size_line, int* size_column, float** table_save);

void size_close(int* size_line, int* size_column);

void file_close(int *size_line, int *size_column, float** tab);

#endif

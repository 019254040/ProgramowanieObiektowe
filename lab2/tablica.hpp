#ifndef tablica_hpp_
#define tablica_hpp_
#include <iostream>
#include <fstream>

float const zero = 0;

float** tablica_powstanie(int* r1, int* r2);

void filling(int* x, int* y, float** tab);

void removing_table(int* columns_number, float** tab);

void tablica_rozmiar(int old1, int old2, int* rozmiar1, int* rozmiar2, float** tab);

void aktualizowanie(int* rozmiar1, int* rozmiar2, float** tab);





#endif
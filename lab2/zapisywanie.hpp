#ifndef zapisywanie_hpp_
#define zapisywanie_hpp_
#include <iostream>
#include <fstream>

void size_open(int *ind1, int *ind2);

void file_open(int* size_line, int* size_column, float** table_save);

void size_close(int* size_line, int* size_column);

void file_close(int *size_line, int *size_column, float** tab);



#endif
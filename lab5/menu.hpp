#ifndef menu_hpp_
#define menu_hpp_
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int menu();

int menu_operations();

void interface_tablica(int x, int line_1, int column_1, float val);

void error_zapisywanie(int x);

void interface_wysw(int x);

void interface_operations_add2(float sum);

void interface_operations(float x);

int choice_arr();

void main_error_string();

#endif

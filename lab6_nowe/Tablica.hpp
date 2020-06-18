#ifndef TABLICA_HPP
#define TABLICA_HPP
#include "Kolumna.hpp"
#include "Kolumnaint.hpp"
#include "Kolumnachar.hpp"
#include "Kolumnastring.hpp"
#include <iostream>
#include <fstream>

using namespace std;

class Tablica
{
public:

    int make_plik();
    int make();
    int setSize(int x, int y);
    int setValue(int x, int y);

    int get()
    {
        for(int i=0; i<rozmiarX; i++)
        {
for(int j=0; j<rozmiarY; j++)
        {

            if(arr[i][j].typ()==2)
            {
                arr[i][j].get_s(j);
            }
            if(arr[i][j].typ()==1)
            {
                arr[i][j].get_i(j);
            }
        }
        }
    }

private:
    int rozmiarX;
    int rozmiarY;
    Kolumna **arr;

};

#endif TABLICA_HPP

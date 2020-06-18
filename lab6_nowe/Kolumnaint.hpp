#ifndef KOLUMNAINT_HPP
#define KOLUMNAINT_HPP
#include "Kolumna.hpp"

class Kolumnaint:public Kolumna
{
public:
/**
* @retrun zwraca symbol typu kolumny
*/
    int typ(){return 1;}

    virtual void ustaw(int i) { tab[i].wczytaj();}

    int get_i(int i)
    {
        return tab[i].get_dane();
    }

    int set_i(int i)
    {
        return tab[i].set_dane();
    }

    int stworz(int RozmiarX)
    {
        tab=new   Cell<int>[RozmiarX];
    }

private:
    Cell<int> *tab;
};

#endif KOLUMNA_HPP

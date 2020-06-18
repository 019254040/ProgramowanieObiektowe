#ifndef KOLUMNASTRING_HPP
#define KOLUMNASTRING_HPP
#include "Kolumna.hpp"

class Kolumnastring:public Kolumna{
public:
   
/**
* @retrun zwraca symbol typu kolumny
*/
  int typ(){return 2;}

 virtual void ustaw(int i){tab[i].wczytaj();}

    string get_s(int i)
    {
        return tab[i].get_dane();
    }

    string set_s(int i)
    {
        return tab[i].set_dane();
    }

    int stworz(int RozmiarX)
    {
        tab=new  Cell<string>[RozmiarX];
    }


private:

    Cell<string> *tab;
};

#endif  KOLUMNA_HPP

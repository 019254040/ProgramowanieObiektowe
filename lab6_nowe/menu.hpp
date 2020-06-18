#ifndef MENU_HPP
#define MENU_HPP
#include <iostream>
#include "Tablica.hpp"
 using namespace std;

class menu
{
    public:
        void tab_plik();
        void nowa_tab();
        void aktualizuj();
            void wypisz();
    private:
        Tablica tab;
};

#endif  MENU_HPP

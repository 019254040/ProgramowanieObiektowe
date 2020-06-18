#include <iostream>
#include "menu.hpp"
#include "Tablica.hpp"
using namespace std;

int main()
{
    menu men;

    men.tab_plik();

    men.menu_start();

    int wyb;
    int i = 0;

    while (i == 0)
    {
        cin >> wyb;
        switch (wyb)
        {
        case 1:
            men.nowa_tab();
            break;
        case 2:
            men.aktualizuj();
            break;
        case 3:
            men.wypisz();
            break;
        case 0:
            i=1;
            break;
        }



    }
    return 0;
}

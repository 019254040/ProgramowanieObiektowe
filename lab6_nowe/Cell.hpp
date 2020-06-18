#ifndef CELL_HPP
#define CELL_HPP
#include <iostream>
using namespace std;

template<typename typ>
class Cell
{

    public:

    void wczytaj()
    {
        cin>>dana;
    }
/**
* @retrun  wartosc pola klassy
*/
     typ get_dane()
     {
     return dana;
     }
 /**
* @retrun  pole klasy
*/
     typ set_dane()
     {
        return dana;
     }
    private:
        typ dana;


};

#endif CELL_HPP

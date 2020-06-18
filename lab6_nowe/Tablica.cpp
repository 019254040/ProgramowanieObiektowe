#include "Tablica.hpp"


/**
* @retrun  kod bledu
*/

int Tablica::make_plik()
{
    int check;

    arr = new Kolumna * [rozmiarY];

    fstream file_check;
    file_check.open("checking.txt", ios::in);

    if (file_check.good()) {

       for int = 0; i < rozmiarY; i++)
       {

        file_check >> check;

        if (check == 1)
        {
            arr[i] = new Kolumnaint[rozmiarX];
        }
        if (check == 2)
        {
            arr[i] = new Kolumnastring[rozmiarX];
        }

       }

    }
    else
    {
        return 1;
    }

}


/**
* @retrun  kod bledu
*/

int Tablica::make()
{
    int typ;

    arr=new Kolumna*[rozmiarY];

    for(int i=0; i<rozmiarY; i++)
    {
        cin>>typ;
        
        if (typ == 1) {
            arr[i] = new Kolumnaint[rozmiarX];
        }

        if (typ == 2) {
            arr[i] = new Kolumnastring[rozmiarX];
        }
    }

}
/**
* @param[in] x - numer wiersza
* @param[in] y - numer kolumny
* @retrun  kod bledu
*/
int Tablica::setSize(int x, int y)
{
    rozmiarX=x;
    rozmiarY=y;
}
/**
* @param[in] x - numer wiersza
* @param[in] y - numer kolumny
* @retrun  kod bledu
*/
int Tablica::setValue(int x, int y)
{
    arr[x][y].ustaw(y);
}

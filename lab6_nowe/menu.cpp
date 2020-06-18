#include "menu.hpp"



        void menu_start() 
        {
            cout << "Wcisnij:";
            cout << "1. Stworz nowa tablice" << endl
                << "2. Zaktualizuj element w tablicy" << endl <<
                "3. Wyswietl elementy w tablic" << endl <<
                "0. Zakoncz program" << endl;

        }




        void menu::tab_plik()
        {
            int x, y;
            x = tab.rozmiar_odczytX();
            y = tab.rozmiar_odczytY();

            tab.setSize(x, y);
            tab.make_plik();

        }


        void menu::nowa_tab()
        {
            int x,y;
            cout<<"podaj rozmiar X"<<endl;
            cin>>x;

            cout<<"podaj rozmiar Y"<<endl;
            cin>>y;

            tab.setSize(x,y);
            tab.make();

        }

        void menu::aktualizuj()
        {
            int x,y;
            cout<<"podaj nr X"<<endl;
            cin>>x;
            cout<<"podaj nr Y"<<endl;
            cin>>y;
            cout<<"podaj wartosc"<<endl;
            tab.setValue(x,y);


        }

        void menu::wypisz()
        {
            tab.get();
        }

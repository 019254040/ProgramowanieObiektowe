#ifndef KOLUMNA_HPP
#define KOLUMNA_HPP
#include "Cell.hpp"
#include <string>
using namespace std;

class Kolumna
{
public:
    virtual char typ()=0;
    virtual void ustaw(int i)=0;
    virtual int get_i(int i);
   
    virtual  string get_s(int i);

 
    virtual int set_i(int i);
    virtual string set_s(int i);
    virtual int stworz(int RozmiarX)=0;



};

#endif KOLUMNA_HPP

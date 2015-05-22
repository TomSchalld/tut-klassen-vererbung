#include "Strasse.h"

Strasse::Strasse()
{
    //ctor
}

Strasse::~Strasse()
{
    //dtor
}
void Strasse::generiereFahrzeuge()
{
    for(int i = 0; i< 10; i++)
    {
        this->fahrzeuge[i++]=new PKW(2,50+i);
        this->fahrzeuge[i]=new LKW(6,30+i);
    }
}
void Strasse::fahrzeugeFahren()
{
    for(int i =0; i<10; i++)
    {
        this->fahrzeuge[i]->fahren();
    }
}

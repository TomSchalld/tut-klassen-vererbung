#include "LKW.h"

LKW::LKW(int achsen,int geschwindigkeit)
{
    //ctor
    this->achsen=achsen;
    this->geschwindigkeit=geschwindigkeit;
}

LKW::~LKW()
{
    //dtor
}

LKW::LKW(const LKW& other)
{
    //copy ctor
}

LKW& LKW::operator=(const LKW& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}
void LKW::fahren()
{
    std::cout<<"Lkw faehrt mit "<<this->geschwindigkeit<<"kmh."<<std::endl;
}

#include "PKW.h"

PKW::PKW(int achsen,int geschwindigkeit)
{
    this->achsen=achsen;
    this->geschwindigkeit=geschwindigkeit;
}

PKW::~PKW()
{
    //dtor
}

PKW::PKW(const PKW& other)
{
    //copy ctor
    *this=other;
}

PKW& PKW::operator=(const PKW& rhs)
{
    this->achsen=rhs.achsen;
    this->geschwindigkeit=rhs.geschwindigkeit;
    return *this;
}
void PKW::fahren()
{
    std::cout<<"Pkw faehrt mit "<<this->geschwindigkeit<<"kmh."<<std::endl;
}

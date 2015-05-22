#include "Fahrzeug.h"

Fahrzeug::Fahrzeug()
{
    //ctor
}

Fahrzeug::~Fahrzeug()
{
    //dtor
}

Fahrzeug::Fahrzeug(const Fahrzeug& other)
{
    //copy ctor
    *this=other;
}

Fahrzeug& Fahrzeug::operator=(const Fahrzeug& rhs)
{
    this->achsen=rhs.achsen;
    this->geschwindigkeit=rhs.geschwindigkeit;
    return *this;
}
void Fahrzeug::fahren()
{
    std::cout<<"Fahrzeug faehrt"<<std::endl;
}

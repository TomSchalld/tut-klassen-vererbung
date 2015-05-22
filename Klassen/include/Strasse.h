#ifndef STRASSE_H
#define STRASSE_H
#include "Fahrzeug.h"
#include "PKW.h"
#include "LKW.h"
class Strasse
{
public:
    Strasse();
    ~Strasse();
    void generiereFahrzeuge();
    void fahrzeugeFahren();
protected:
private:
    Fahrzeug *fahrzeuge[10];
};

#endif // STRASSE_H

#ifndef PKW_H
#define PKW_H

#include "Fahrzeug.h"


class PKW : public Fahrzeug
{
public:
    PKW(int achsen,int geschwindigkeit);
    ~PKW();
    PKW(const PKW& other);
    PKW& operator=(const PKW& other);
    void fahren();
protected:
private:
};

#endif // PKW_H

#ifndef LKW_H
#define LKW_H

#include "Fahrzeug.h"


class LKW : public Fahrzeug
{
public:
    LKW(int achsen,int geschwindigkeit);
    ~LKW();
    LKW(const LKW& other);
    LKW& operator=(const LKW& other);
    void fahren();

protected:
private:
};

#endif // LKW_H

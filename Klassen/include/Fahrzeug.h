#ifndef FAHRZEUG_H
#define FAHRZEUG_H
#include <iostream>

class Fahrzeug
{
public:
    Fahrzeug();
    virtual ~Fahrzeug();
    Fahrzeug(const Fahrzeug& other);
    Fahrzeug& operator=(const Fahrzeug& other);
    int getAchsen()
    {
        return achsen;
    }
    void setAchsen(int val)
    {
        achsen = val;
    }
    int setGeschwindigkeit()
    {
        return geschwindigkeit;
    }
    void setGeschwindigkeit(int val)
    {
        geschwindigkeit = val;
    }
    void fahren();
protected:
    int achsen;
    int geschwindigkeit;
};

#endif // FAHRZEUG_H

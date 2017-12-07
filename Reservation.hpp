#ifndef RESERVATION_H
#define RESERVATION_H

#include "Kunde.hpp"
#include "Dato.hpp"
#include "Ydelser.hpp"

#include <vector>

class Reservation
{
public:
    Reservation(Kunde *_kunde, Dato _dato, int _antalOvernatninger, int _antalGaester, int _vaerelsesNummer);
    ~Reservation();

    int getVaerelsesNummer();
    
    void printInfo();
    void tilfoejYdelse(float beloeb);
    void checkud();

private:
    Kunde *kunde;
    Dato dato;
    int antalOvernatninger;
    int antalGaester;
    int vaerelsesNummer;
    Ydelser ydelser;
};

#endif

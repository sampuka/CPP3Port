#ifndef RESERVATION_H
#define RESERVATION_H

#include "Kunde.hpp"
#include "Dato.hpp"

class Reservation
{
public:
    Reservation(Kunde *_kunde, Dato _dato, int _antalOvernatninger, int _antalGaester, int _vaerelsesNummer);
    ~Reservation();

    void printInfo();

private:
    Kunde *kunde;
    Dato dato;
    int antalOvernatninger;
    int antalGaester;
    int vaerelsesNummer;
};

#endif

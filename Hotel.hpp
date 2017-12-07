#ifndef HOTEL_H
#define HOTEL_H

#include "Reservation.hpp"
#include "VaerelsesRegister.hpp"

#include <string>
#include <vector>

class Hotel
{
public:
    Hotel(std::string _navn, std::string _adresse);
    ~Hotel();

    void printReservationer();

    int nyReservation(Kunde &kunde, Dato dato, int antalOvernatninger, int antalGaester);
    void tilfoejVaerelse(int vaerelsesNummer, int stoerrelse);
    void tilfoejYdelse(int vaerelsesNummer, float beloeb);
    void checkud(int vaerelsesNummer);
    
private:
    std::string navn;
    std::string adresse;

    VaerelsesRegister vaerReg;
    std::vector<Reservation> reservListe;
};

#endif

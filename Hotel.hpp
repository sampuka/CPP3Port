#ifndef HOTEL_H
#define HOTEL_H

#include "Reservation.hpp"

#include <string>
#include <vector>

class Hotel
{
public:
    Hotel(std::string _navn, std::string _adresse);
    ~Hotel();

    int nyReservation(Kunde kunde, Dato dato, int antalOvernatninger, int antalGaester);
    void tilfoejVaerelse(int vaerelsesNummer, int stoerrelse);
    
private:
    std::string navn;
    std::string adresse;

    VaerelsesRegister vaerReg;
    std::vector<Reservation> reservListe;
};

#endif HOTEL_H

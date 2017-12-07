#include "Reservation.hpp"
#include "Betaling.hpp"

#include <iostream>

using namespace std;

float vaerelsesPris[6] = {200, 380, 540, 700, 800, 850};

Reservation::Reservation(Kunde *_kunde, Dato _dato, int _antalOvernatninger, int _antalGaester, int _vaerelsesNummer)
{
    kunde = _kunde;
    dato = _dato;
    antalOvernatninger = _antalOvernatninger;
    antalGaester = _antalGaester;
    vaerelsesNummer = _vaerelsesNummer;
}

Reservation::~Reservation()
{
}

int Reservation::getVaerelsesNummer()
{
    return vaerelsesNummer;
}

void Reservation::printInfo()
{
    cout << "Reservation af " << kunde->getNavn() << " for "
	 << antalGaester << " gæst(er) i "
	 << antalOvernatninger << " overnatninger i værelse "
	 << vaerelsesNummer << " fra "
	 << dato.print() << endl;
}

void Reservation::tilfoejYdelse(float beloeb)
{
    cout << kunde->getNavn() << " fra værelse " << vaerelsesNummer << " har brugt ydelse for " << beloeb << endl << endl;
    ydelser.tilfoejYdelse(beloeb);
}

void Reservation::checkud()
{
    cout << kunde->getNavn() << " checker ud fra værelse " << vaerelsesNummer << endl;
    Betaling betaling(vaerelsesPris[antalGaester-1]*antalOvernatninger+ydelser.getTotalBeloeb(), kunde->getNavn());
    betaling.udfoerBetaling();
}

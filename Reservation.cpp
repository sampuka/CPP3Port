#include "Reservation.hpp"

#include <iostream>

using namespace std;

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

void Reservation::printInfo()
{
    cout << "Reservation af " << kunde->getNavn() << ":" << endl
	 << antalGaester << " gæster i " << antalOvernatninger << " overnatninger fra " << dato.getDatoen() << endl;
    
}
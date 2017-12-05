#include "Hotel.hpp"

using namespace std;

Hotel::Hotel(string _navn, string _adresse)
{
    navn = _navn;
    adresse = _adresse;
}

Hotel::~Hotel()
{
}

int nyReservation(Kunde kunde, Dato dato, int antalOvernatninger, int antalGaester)
{
    Vaerelse* vaer = vaerReg.findVaerlse(dato, antalOvernatninger, antalGaester);
    
    reservListe.push_back(
	Reservation(kunde, dato, antalOvernatninger, antalGaester, vaer);
	);
}

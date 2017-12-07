#include "Hotel.hpp"

#include <iostream>

using namespace std;

Hotel::Hotel(string _navn, string _adresse)
{
    navn = _navn;
    adresse = _adresse;
}

Hotel::~Hotel()
{
}

void Hotel::printReservationer()
{
    if (reservListe.empty())
	cout << "Der er ingen reservationer." << endl;
    else
    {
	cout << "Registrerede reservationer: " << endl;
	for (Reservation reserv : reservListe)
	    reserv.printInfo();
	cout << endl;
    }
}

int Hotel::nyReservation(Kunde &kunde, Dato dato, int antalOvernatninger, int antalGaester)
{
    int vaerelsesNummer = vaerReg.findVaerelse(dato, antalOvernatninger, antalGaester);

    if (vaerelsesNummer == -1)
    {
	cout << "Ikke noget ledigt værelse for " << kunde.getNavn() << endl;
	return 0;
    }
    
    reservListe.push_back(
	Reservation(&kunde, dato, antalOvernatninger, antalGaester, vaerelsesNummer)
	);
    cout << "Fundet værelse " << vaerelsesNummer << " for " << kunde.getNavn() << " " << dato.print() << endl;

    return 1;
}

void Hotel::tilfoejVaerelse(int vaerelsesNummer, int stoerrelse)
{
    vaerReg.tilfoejVaerelse(vaerelsesNummer, stoerrelse);
}

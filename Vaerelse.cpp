#include "Vaerelse.hpp"

#include <iostream>

using namespace std;

Vaerelse::Vaerelse(int _vaerelsesNummer, int _stoerrelse)
{
    vaerelsesNummer = _vaerelsesNummer;
    stoerrelse = _stoerrelse;
}

Vaerelse::~Vaerelse()
{
}

bool Vaerelse::erLedig(Dato dato, int antalOvernatninger, int antalGaester)
{
    if (antalGaester > stoerrelse)
	return false;
    
    for (int i = 0, datoen = dato.getDatoen(); i < antalOvernatninger; i++, datoen++)
	for (Dato dat : optagedeDatoer)
	{
	    //cout << dat.getDatoen() << " " << datoen << endl;
	    if (dat.getDatoen() == datoen)
		return false;
	}
    
    return true;
}

void Vaerelse::optagDatoer(Dato dato, int antalOvernatninger)
{
    for (int i = 0, datoen = dato.getDatoen(); i < antalOvernatninger; i++, datoen++)
    {
	optagedeDatoer.push_back(
	    Dato(datoen)
	    );
    }
}

int Vaerelse::getVaerelsesNummer()
{
    return vaerelsesNummer;
}

int Vaerelse::getStoerrelse()
{
    return stoerrelse;
}

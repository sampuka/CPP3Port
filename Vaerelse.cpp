#include "Vaerelse.hpp"

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
    
    for (int i = 0, int datoen = dato.getDatoen(); i < antalOvernatninger; i++,, datoen++)
	for (Dato dat : optagedeDatoer)
	    if (dat.getDatoen() == datoen)
		return false;
    
    return true;
}

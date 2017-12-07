#include "VaerelsesRegister.hpp"

using namespace std;

VaerelsesRegister::VaerelsesRegister()
{
}

VaerelsesRegister::~VaerelsesRegister()
{
}

void VaerelsesRegister::tilfoejVaerelse(int vaerelsesNummer, int stoerrelse)
{
    vaerListe.push_back(
	Vaerelse(vaerelsesNummer, stoerrelse)
	);
}

int VaerelsesRegister::findVaerelse(Dato dato, int antalOvernatninger, int antalGaester)
{
    for (Vaerelse &vaer : vaerListe)
	if (vaer.erLedig(dato, antalOvernatninger, antalGaester))
	{
	    vaer.optagDatoer(dato, antalOvernatninger);
	    return vaer.getVaerelsesNummer();
	}
    
    return -1;
}

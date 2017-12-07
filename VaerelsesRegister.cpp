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
    int mindstVaer = 999; //Skal bare være højere end største værelse
    int bedsteVaer = 0;
    
    for (Vaerelse &vaer : vaerListe)
	if (vaer.erLedig(dato, antalOvernatninger, antalGaester))
	{
	    if (vaer.getStoerrelse() < mindstVaer)
	    {
		mindstVaer = vaer.getStoerrelse();
		bedsteVaer = vaer.getVaerelsesNummer();
	    }
	    //vaer.optagDatoer(dato, antalOvernatninger);
	    //return vaer.getVaerelsesNummer();
	}

    if (mindstVaer != 999)
    {
	optagVaerelse(bedsteVaer, dato, antalOvernatninger);
	return bedsteVaer;
    }
    else
	return -1;
}

void VaerelsesRegister::optagVaerelse(int vaerelsesNummer, Dato dato, int antalOvernatninger)
{
    for (Vaerelse &vaer : vaerListe)
	if (vaer.getVaerelsesNummer() == vaerelsesNummer)
	    vaer.optagDatoer(dato, antalOvernatninger);
}

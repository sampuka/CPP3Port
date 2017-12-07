#include "Dato.hpp"
#include <iostream>
#include <array>

using namespace std;

Dato::Dato()
{
}

Dato::Dato(int enD)
{
    datoen = enD;
}

int Dato::getDatoen()
{
    return datoen;
}

int Dato::getAar()
{
    return datoen / 10000;
}

int Dato::getMaaned()
{
    return (datoen / 100) % 100;
}

int Dato::getDag()
{
    return datoen % 100;
}


int Dato::getKvartal()
{
    return (getMaaned() - 1) / 3 + 1;
}

bool Dato::skudAar()
{
    int aar = getAar();

    if (aar % 4 != 0)
	return false;
    if (((aar % 400 != 0) && (aar % 100 == 0)))
	return false;
    return true;
}


bool Dato::validate()
{
    if (datoen < 17000301 || datoen > 99999999)
	return false;

    if (getMaaned() < 1 || getMaaned() > 12)
	return false;

    if (getDag() < 1 || getDag() > 31)
	return false;

    if (skudAar() && getMaaned() == 2 && getDag() > 29)
	return false;

    if (!skudAar() && getMaaned() == 2 && getDag() > 28)
	return false;

    if (getDag() > 30 &&
	(getMaaned() == 4 || getMaaned() == 6 ||
	 getMaaned() == 9 || getMaaned() == 11))
	return false;

    return true;
}

int Dato::dagIAaret()
{
    int skudDag;
    if (skudAar())
	skudDag = 1;
    else
	skudDag = 0;

    switch (getMaaned())
    {
    case 1:
	return getDag();
    case 2:
	return getDag() + 31;
    case 3:
	return getDag() + skudDag + 59;
    case 4:
	return getDag() + skudDag + 90;
    case 5:
	return getDag() + skudDag + 120;
    case 6:
	return getDag() + skudDag + 151;
    case 7:
	return getDag() + skudDag + 181;
    case 8:
	return getDag() + skudDag + 212;
    case 9:
	return getDag() + skudDag + 243;
    case 10:
	return getDag() + skudDag + 273;
    case 11:
	return getDag() + skudDag + 304;
    default:
	return getDag() + skudDag + 334;
    }
}

int Dato::restDageIAaret()
{
    if (skudAar())
	return 366 - dagIAaret();
    else
	return 365 - dagIAaret();
}

void Dato::setDatoPlusEn()
{
    datoen++;
    while (!validate())
	datoen++;
}

void Dato::setDatoMinusEn()
{
    datoen--;
    while (!validate())
	datoen--;
}

int Dato::forskelIDage(Dato enDato)
{
    int antalDage = 0;

    Dato kopiDato(datoen);

    if (kopiDato.datoen < enDato.datoen)
    {
	while (kopiDato.datoen != enDato.datoen)
	{
	    kopiDato.setDatoPlusEn();
	    antalDage++;
	}
    }
    else
	if (kopiDato.datoen > enDato.datoen)
	{
	    while (kopiDato.datoen != enDato.datoen)
	    {
		kopiDato.setDatoMinusEn();
		antalDage--;
	    }
	}
    return antalDage;
}

int Dato::ugedag()
{
    Dato udgDato(17000301);

    return udgDato.forskelIDage(Dato(datoen)) % 7 + 1;
}

string Dato::ugedagTekst()
{
    static array <string, 7> UGEDAG_TABEL = { "mandag","tirsdag","onsdag",
					      "torsdag","fredag","lørdag","søndag" };
    return UGEDAG_TABEL[ugedag() - 1];
}

string Dato::print()
{
    string to_return = "d. ";
    to_return += to_string(getDag());
    to_return += "/";
    to_return += to_string(getMaaned());
    to_return += "-";
    to_return += to_string(getAar());
    return to_return;
}

Dato::~Dato()
{
}

#include "Kunde.hpp"

using namespace std;

Kunde::Kunde(string _navn)
{
    navn = _navn;
}

Kunde::~Kunde()
{
}

string Kunde::getNavn()
{
    return navn;
}

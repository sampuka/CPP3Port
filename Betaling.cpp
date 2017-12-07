#include "Betaling.hpp"

#include <iostream>

using namespace std;

Betaling::Betaling(float _beloeb, string _betaler)
{
    beloeb = _beloeb;
    betaler = _betaler;
}

Betaling::~Betaling()
{
}

void Betaling::udfoerBetaling()
{
    cout << betaler << " har betalt " << beloeb << " DKK" << endl << endl;
}

#include "Ydelser.hpp"

Ydelser::Ydelser()
{
    totalBeloeb = 0;
}

Ydelser::~Ydelser()
{
}

void Ydelser::tilfoejYdelse(float beloeb)
{
    totalBeloeb += beloeb;
}

float Ydelser::getTotalBeloeb()
{
    return totalBeloeb;
}

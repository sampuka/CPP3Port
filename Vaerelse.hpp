#ifndef VAERELSE_H
#define VAERELSE_H

#include "Dato.hpp"

#include <vector>

class Vaerelse
{
public:
    Vaerelse(int _vaerelsesNummer, int _stoerrelse, float _prisPerNat);
    ~Vaerelse();
    
    bool erLedig(Dato dato, int antalOvernatninger, int antalGaester);
    void optagDatoer(Dato dato, int antalOvernatninger);

    int getVaerelsesNummer();
    
private:
    int vaerelsesNummer;
    int stoerrelse;
    std::vector<Dato> optagedeDatoer;
    float prisPerNat;
};

#endif

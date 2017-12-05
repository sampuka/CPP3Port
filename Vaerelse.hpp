#ifndef VAERELSE_H
#define VAERELSE_H

#include "Dato.hpp"

#include <vector>

class Vaerelse
{
public:
    Vaerelse(int _vaerelsesNummer, int _stoerrelse);
    ~Vaerelse();
    
    bool erLedig(Dato dato, int antalOvernatninger, int antalGaester);
    void optagDatoer(Dato dato, int antalOvernatninger);
    
private:
    int vaerelsesNummer;
    int stoerrelse;
    std::vector<Dato> optagedeDatoer;
};

#endif

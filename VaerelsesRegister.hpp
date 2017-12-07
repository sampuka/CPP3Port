#ifndef VAERELSESREGISTER_H
#define VAERELSESREGISTER_H

#include "Vaerelse.hpp"

#include <vector>

class VaerelsesRegister
{
public:
    VaerelsesRegister();
    ~VaerelsesRegister();

    void tilfoejVaerelse(int vaerelsesNummer, int stoerrelse);
    int findVaerelse(Dato dato, int antalOvernatning, int antalGaester);
    
private:
    std::vector<Vaerelse> vaerListe;
};

#endif

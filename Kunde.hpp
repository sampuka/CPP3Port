#ifndef KUNDE_H
#define KUNDE_H

#include <string>

class Kunde
{
public:
    Kunde(std::string _navn);
    ~Kunde();

    std::string getNavn();

private:
    std::string navn;
};

#endif

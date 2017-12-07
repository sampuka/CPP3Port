#ifndef BETALING_H
#define BETALING_H

#include <string>

class Betaling
{
public:
    Betaling(float _beloeb, std::string _betaler);
    ~Betaling();

    void udfoerBetaling();

private:
    float beloeb;
    std::string betaler;
};

#endif

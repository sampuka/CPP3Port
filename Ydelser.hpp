#ifndef YDELSER_H
#define YDELSER_H

class Ydelser
{
public:
    Ydelser();
    ~Ydelser();

    void tilfoejYdelse(float beloeb);
    float getTotalBeloeb();

private:
    float totalBeloeb;
};

#endif

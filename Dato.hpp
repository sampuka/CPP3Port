#ifndef DATO_H
#define DATO_H

#include <string>

class Dato
{
public:
    
    Dato();
    Dato(int enD);
    int getDatoen();
    int getAar();
    int getMaaned();
    int getDag();
    int getKvartal(); // 1,2,3 eller 4
    bool skudAar();   //skudaar ja/nej; 2015: nej 
    bool validate();  //returnerer true hvis dato valid
    int dagIAaret();  //20150212 returnerer 43
    int restDageIAaret();
    int forskelIDage(Dato enD);
    int ugedag();	  // mandag: 1; tirsdag 2; ..... søndag: 7.
    std::string ugedagTekst();
    
    void print();
    ~Dato();
    void setDatoPlusEn();
    void setDatoMinusEn();
    
private:
    int datoen;
};

#endif

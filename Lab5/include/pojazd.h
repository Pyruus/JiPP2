//
// Created by pyrus on 11/8/21.
//

#ifndef LAB5_POJAZD_H
#define LAB5_POJAZD_H

#include <iostream>

using namespace std;

class pojazd {
private:
    string numer_rejestracyjny;
    string nazwa;
    int ilosc_miejsc;
    string * pasazerowie;
    string marka;
    string typ;

public:
    pojazd(string nr, string nazwa, int im, string marka, string typ);

    pojazd(pojazd &pojazd1);

    void dodaj_pasazera(string dane, int miejsce);

    void print();

    string getName();

    string getLicense();

    string getBrand();

    string getType();

    void setName(string name);

    void setLicense(string license);
};


#endif //LAB5_POJAZD_H

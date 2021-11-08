//
// Created by pyrus on 11/8/21.
//

#include "../include/pojazd.h"

pojazd::pojazd(string nr, string nazwa, int im, string marka, string typ)
: numer_rejestracyjny(nr), nazwa(nazwa) , ilosc_miejsc(im), marka(marka), typ(typ){
    this->pasazerowie = new string [ilosc_miejsc];
    for (int i = 0; i < ilosc_miejsc; i++){
        dodaj_pasazera("puste", i);
    }
}

void pojazd::dodaj_pasazera(string dane, int miejsce) {
    this->pasazerowie[miejsce] = dane;
}

void pojazd::print() {
    cout << this->numer_rejestracyjny << endl;
    cout << this->nazwa << endl;
    cout << this->ilosc_miejsc<< endl;
    for(int i = 0; i < ilosc_miejsc; i++){
        cout << i << ": " << this->pasazerowie[i] << endl;
    }
    cout << this->marka<< endl;
    cout << this->typ << endl;
}

pojazd::pojazd(pojazd &pojazd1) {
    numer_rejestracyjny = pojazd1.numer_rejestracyjny;
    nazwa = pojazd1.nazwa;
    ilosc_miejsc = pojazd1.ilosc_miejsc;
    pasazerowie = pojazd1.pasazerowie;
    marka = pojazd1.marka;
    typ = pojazd1.typ;
}

string pojazd::getName() {
    return nazwa;
}

string pojazd::getLicense() {
    return numer_rejestracyjny;
}

string pojazd::getBrand() {
    return marka;
}

string pojazd::getType() {
    return typ;
}

void pojazd::setName(string name) {
    this->nazwa = name;
}

void pojazd::setLicense(string license) {
    this->numer_rejestracyjny = license;
}


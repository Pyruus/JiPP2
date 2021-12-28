//
// Created by Pyrus on 21.12.2021.
//

#include "../include/Card.h"

Card::Card(string suit, int value, string name): suit(suit), value(value), name(name) {

}

string Card::getSuit() const{
    return suit;
}

int Card::getValue() const{
    return value;
}

string Card::getName() const{
    return name;
}

void Card::printCard() const{
    cout << getSuit() << " " << getName() << endl;
}

void Card::setValue(int val) {
    this->value = val;
}

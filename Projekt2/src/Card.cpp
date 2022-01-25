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

    if (getSuit() == "hearts"){
        cout << "\x1B[31m" << getSuit() << "\033[0m" << " " << getName() << endl;
    }
    else if( getSuit() == "diamonds"){
        cout << "\x1B[91m" << getSuit() << "\033[0m" << " " << getName() << endl;
    }

    else if( getSuit() == "spades"){
        cout << "\x1B[90m" << getSuit() << "\033[0m" << " " << getName() << endl;
    }
    else{
        cout << "\u001b[38;5;243m" << getSuit() << "\033[0m" << " " << getName() << endl;
    }

}

void Card::setValue(int val) {
    this->value = val;
}

int Card::operator+(const Card& rhs) const {
    return value + rhs.value;
}

int Card::operator+(int rhs) const {
    return value + rhs;
}

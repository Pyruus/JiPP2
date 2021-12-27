//
// Created by Pyrus on 21.12.2021.
//

#ifndef LAB9_CARD_H
#define LAB9_CARD_H

#include <iostream>

using namespace std;

class Card {
protected:
    string suit;
    int value;
    string name;

public:
    Card() = default;

    Card(string suit, int value, string name);

    string getSuit() const;

    int getValue() const;

    string getName() const;
};


#endif //LAB9_CARD_H

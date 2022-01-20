//
// Created by Pyrus on 25.12.2021.
//

#ifndef LAB9_PLAYER_H
#define LAB9_PLAYER_H

#include "Deck.h"

class Player {
protected:
    string name;
    Card *hand;
    int value = 0;
    int cards = 0;
    int aces = 0;

public:
    Player(string name);

    ~Player();

    void drawCard(Deck *deck);

    virtual void printCards();

    virtual void showCards();

    void setValue();

    int getValue();

    void setName(string name);

    string getName();
};


#endif //LAB9_PLAYER_H

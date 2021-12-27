//
// Created by Pyrus on 25.12.2021.
//

#ifndef LAB9_PLAYER_H
#define LAB9_PLAYER_H

#include "Deck.h"

class Player {
protected:
    Card *hand;
    int value = 0;
    int cards = 0;

public:
    Player();

    ~Player();

    void drawCard(Deck deck);
};


#endif //LAB9_PLAYER_H

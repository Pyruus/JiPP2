//
// Created by Pyrus on 25.12.2021.
//

#ifndef LAB9_DEALER_H
#define LAB9_DEALER_H

#include "Deck.h"
#include "Player.h"

class Dealer: public Player {
protected:
    bool cards_hidden = true;

public:
    Dealer(string name);

    void showCards();

    void printCards();
};


#endif //LAB9_DEALER_H

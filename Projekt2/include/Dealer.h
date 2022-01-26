//
// Created by Pyrus on 25.12.2021.
//

#ifndef BLACKJACK_DEALER_H
#define BLACKJACK_DEALER_H

#include "Deck.h"
#include "Player.h"

class Dealer: public Player {
protected:
    bool cards_hidden = true;

public:
    Dealer(string name);

    /**
     * Method setting variable cards_hidden to false
     */
    void showCards();

    /**
     * Method responsible for printing all dealer's cards
     */
    void printCards();
};


#endif //BLACKJACK_DEALER_H

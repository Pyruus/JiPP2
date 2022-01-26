//
// Created by Pyrus on 25.12.2021.
//

#ifndef BLACKJACK_PLAYER_H
#define BLACKJACK_PLAYER_H

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

    /**
     * Method responsible for drawing a card from deck
     * @param deck pointer to deck
     */
    void drawCard(Deck *deck);

    /**
     * Method responsible for printing all cards
     */
    virtual void printCards();

    /**
     * Method setting dealer's variable cards_hidden to false
     */
    virtual void showCards();

    /**
     * Method setting value to correct
     */
    void setValue();

    /**
     * Getter returning value of cards in hand
     * @return value variable
     */
    int getValue();

    /**
     * Method setting name variable
     * @param name new name variable
     */
    void setName(string name);

    /**
     * Getter returning player's name
     * @return name variable
     */
    string getName();
};


#endif //BLACKJACK_PLAYER_H

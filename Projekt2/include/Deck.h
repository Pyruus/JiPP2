//
// Created by Pyrus on 21.12.2021.
//

#ifndef LAB9_DECK_H
#define LAB9_DECK_H

#include "Card.h"
#include <fstream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <random>
#include <time.h>

using namespace std;

class Deck {
private:
    vector <Card> deck;
    int current_amount = 0;

public:
    Deck();

    ~Deck();

    /**
     * Method returning certain card from a deck
     * @param n index of card
     * @return card on index n
     */
    Card getCard(int n);

    /**
     * Method filling deck with 52 default cards
     */
    void fillDeck();

    /**
     * Method setting random order of cards in deck
     */
    void shuffleDeck();

    /**
     * Method removing card from top of deck and returning it
     * @return card removed from top of the deck
     */
    Card drawCard();

    /**
     * Getter returning amount of a cards in deck
     * @return current_amount variable
     */
    int getAmount();
};


#endif //LAB9_DECK_H

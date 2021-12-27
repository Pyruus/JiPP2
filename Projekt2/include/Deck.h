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

    Card getCard(int n);

    void fillDeck();

    void shuffleDeck();

    Card drawCard();

    int getAmount();
};


#endif //LAB9_DECK_H

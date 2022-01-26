//
// Created by Pyrus on 21.12.2021.
//

#ifndef BLACKJACK_CARD_H
#define BLACKJACK_CARD_H

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

     /**
      * Getter returning suit of a card
      * @return suit variable
      */
     string getSuit() const;

    /**
     * Getter returning value of a card
     * @return value variable
     */
    int getValue() const;

    /**
     * Getter returning name of a card
     * @return value variable
     */
    string getName() const;

    /**
     * Method printing all card's properties
     */
    void printCard() const;

    /**
     * Method setting value of a card
     * @param val new value
     */
    void setValue(int val);

    /**
     * Method setting suit of a card
     * @param val new suit
     */
    void setSuit(string suit);

    /**
     * Method setting name of a card
     * @param val new name
     */
    void setName(string name);

    int operator+(const Card& rhs) const;

    int operator+(int rhs) const;
};


#endif //BLACKJACK_CARD_H

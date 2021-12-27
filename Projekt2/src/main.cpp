//
// Created by Pyrus on 21.12.2021.
//

#include <iostream>
#include "Deck.h"

using namespace std;

int main(){
    Deck deck = Deck();
    cout << deck.getAmount() << endl;
    Card drawn = deck.drawCard();
    deck.fillDeck();
    cout << deck.getAmount() << endl;
    cout << drawn.getName() << " " << drawn.getSuit() << endl;
    deck.shuffleDeck();
    drawn = deck.drawCard();
    cout << deck.getAmount() << endl;
    cout << drawn.getName() << " " << drawn.getSuit() << endl;
    return 0;
}
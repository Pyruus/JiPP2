//
// Created by Pyrus on 25.12.2021.
//

#include "../include/Dealer.h"

void Dealer::showCards() {
    cards_hidden = false;
}

void Dealer::printCards() {
    if (!cards_hidden){
        Player::printCards();
    }
    else{
        hand[0].printCard();
        cout << "[hidden]" << endl;
    }
}

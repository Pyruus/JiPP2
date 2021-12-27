//
// Created by Pyrus on 25.12.2021.
//

#include "../include/Player.h"

Player::Player() {
    hand = new Card[10];
}

Player::~Player() {
    delete(hand);
}

void Player::drawCard(Deck deck) {
    hand [cards] = deck.drawCard();
    cards++;
}

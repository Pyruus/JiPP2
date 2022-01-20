//
// Created by Pyrus on 25.12.2021.
//

#include "../include/Player.h"

Player::Player(string name) : name(name){
    hand = new Card[10];
}

Player::~Player() {
    delete(hand);
}

void Player::drawCard(Deck *deck) {
    hand [cards] = deck->drawCard();
    if (hand[cards].getValue() == 11){
        aces += 1;
    }
    cards++;
    setValue();
}

void Player::printCards() {
    for (int i = 0; i < cards; i++){
        hand[i].printCard();
    }
}

void Player::setValue() {
    value = 0;
    for (int i = 0; i < cards; i++){
        value += hand[i].getValue();
    }
    if (value > 21 && aces > 0){
        for (int i = 0; i < cards; i++){
            if (hand[i].getValue() == 11){
                hand[i].setValue(1);
                aces--;
                break;
            }
        }
        setValue();
    }
}

int Player::getValue() {
    return value;
}

void Player::showCards() {

}

void Player::setName(string name) {
    this->name = name;
}

string Player::getName() {
    return name;
}

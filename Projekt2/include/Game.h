//
// Created by Pyrus on 27.12.2021.
//

#ifndef BLACKJACK_GAME_H
#define BLACKJACK_GAME_H
#include "Deck.h"
#include "Player.h"
#include "Dealer.h"


class Game {
protected:
    int chips;
    string player_name;
public:
    Game();

    Game(string name);

    ~Game();

    /**
     * Method setting chips variable
     * @param chips new chips variable value
     */
    void setChips(int chips);

    /**
     * Getter returning amount of player's chips
     * @return chips variable
     */
    int getChips();

    /**
     * Method adding or subtracting amount of chips
     * @param change number of chips to add
     */
    void changeChips(int change);

    /**
     * Method responsible for setting up the game
     * @param name player's name
     */
    void runGame(string name);
};
#endif //BLACKJACK_GAME_H

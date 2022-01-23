//
// Created by Pyrus on 27.12.2021.
//

#ifndef PROJECT_2_GAME_H
#define PROJECT_2_GAME_H
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

    void setChips(int chips);

    int getChips();

    void changeChips(int change);

    void runGame(string name);
};
#endif //PROJECT_2_GAME_H

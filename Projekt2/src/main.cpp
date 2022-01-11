//
// Created by Pyrus on 21.12.2021.
//

#include <iostream>
#include "Game.h"

using namespace std;

int main(){
    Game game = Game();
    bool running = true;
    while (running){
        system("clear");
        int choice;
        cout << "What would you like to do?" << endl;
        cout << "1 - play round" << endl;
        cout << "2 - close game" << endl;
        cin >> choice;

        switch (choice){
            case 1:
                game.runGame();
                break;

            case 2:
                running = false;
                break;

            default:
                cout << "Wrong argument" << endl;
                break;
        }

    }
    return 0;
}
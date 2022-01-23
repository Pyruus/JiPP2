//
// Created by Pyrus on 21.12.2021.
//

#include <iostream>
#include "Game.h"

using namespace std;

int main(int argc, char *argv[]){
    string name;
    if (argc == 2){
        name = argv[1];
    }
    else {
        name = "Player";
    }
    Game game(name);
    bool running = true;
    while (running){
        int choice;
        if (game.getChips() <= 0){
            cout << "You've lost all your chips! Try again by starting a new game.\n" << endl;
            running = false;
            break;
        }
        cout << endl << "Your chips amount: " << game.getChips() << endl;
        cout << "What would you like to do?" << endl;
        cout << "1 - play round" << endl;
        cout << "2 - close game" << endl;
        cin >> choice;
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif

        switch(choice){
            case 1:
                if (argc == 2){
                    game.runGame((argv[1]));
                }
                else {
                    game.runGame("Player");
                }
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
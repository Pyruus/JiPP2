//
// Created by Pyrus on 21.12.2021.
//

#include <iostream>
#include "Game.h"

using namespace std;

int main(int argc, char *argv[]){
    Game game = Game();
    bool running = true;
    while (running){
        int choice;
        cout << endl << endl;
        cout << "What would you like to do?" << endl;
        cout << "1 - play round" << endl;
        cout << "2 - close game" << endl;
        cin >> choice;
        system("clear");

        switch (choice){
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
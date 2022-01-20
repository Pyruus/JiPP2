//
// Created by Pyrus on 27.12.2021.
//

#include "Game.h"

void Game::runGame(string name) {
    //setup
    bool player_phase = true;
    bool busted = false;
    Deck deck = Deck();
    deck.shuffleDeck();
    Player *player = new Player(name);
    Player *dealer = new Dealer("Dealer");
    player->drawCard(&deck);
    player->drawCard(&deck);
    dealer->drawCard(&deck);
    dealer->drawCard(&deck);
    //game
    while (player_phase){
        system("clear");
        cout << "Dealer's cards: " << endl;
        dealer->printCards();
        cout << player->getName() << "'s cards: " << endl;
        player->printCards();
        cout << "Value: " << player->getValue() << endl;
        int choice = 0;
        while (choice == 0) {
            cout << endl << "What would you like to do? (1 - draw 2 - pass)" << endl;
            cin >> choice;
            switch (choice) {
                case 1:
                    player->drawCard(&deck);
                    if(player->getValue() > 21){
                        player_phase = false;
                        busted = true;
                    }
                    break;
                case 2:
                    player_phase = false;
                    break;

                default:
                    cout << "Wrong argument." << endl;
                    choice = 0;
                    break;
            }
        }
    }
    system("clear");
    dealer->showCards();
    if(!busted) {
        while (dealer->getValue() < 17) {
            dealer->drawCard(&deck);
        }

        cout << "Dealer's cards: " << endl;
        dealer->printCards();
        cout << "Dealer's value: " << dealer->getValue() << endl;
        cout << player->getName() << "'s cards: " << endl;
        player->printCards();
        cout << player->getName() << "'s value: " << player->getValue() << endl;

        if (player->getValue() > dealer->getValue() || dealer->getValue() > 21) {
            cout << "You won!" << endl;
        } else if (player->getValue() == dealer->getValue()){
            cout << "Draw." << endl;
        }
        else{
            cout << "You lost!" << endl;
        }
    }

    else{
        cout << "Dealer's cards: " << endl;
        dealer->printCards();
        cout << "Dealer's value: " << dealer->getValue() << endl;
        cout << player->getName() << "'s cards: " << endl;
        player->printCards();
        cout << player->getName() << "'s value: " << player->getValue() << endl;
        cout << "Busted! You lost." << endl;
    }
}



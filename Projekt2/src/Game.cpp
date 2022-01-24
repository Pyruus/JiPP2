//
// Created by Pyrus on 27.12.2021.
//

#include "Game.h"

void Game::runGame(string name) {
    //SETUP
    int stake;
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
    //BETTING
    cout << "How many chips would you like to bet?" << endl;
    cin >> stake;
    while (stake <= 0 || stake > getChips()){
        cout << "Amount has to be higher than 0 and not higher than your current amount!" << endl;
        cout << "Your current amount: " << getChips() <<endl;
        cout << "How many chips would you like to bet?" << endl;
        cin >> stake;
    }
    while (stake > getChips()){
        cout << "Amount has to be higher than 0! How many chips would you like to bet?" << endl;
        cin >> stake;
    }

    //GAME
    while (player_phase){
        #ifdef _WIN32
                system("cls");
        #else
                system("clear");
        #endif
        cout << "Dealer's cards: " << endl;
        dealer->printCards();
        cout << endl;
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
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
    dealer->showCards();
    if(!busted) {
        while (dealer->getValue() < 17) {
            dealer->drawCard(&deck);
        }

        cout << "Dealer's cards: " << endl;
        dealer->printCards();
        cout << "Dealer's value: " << dealer->getValue() << endl << endl;
        cout << player->getName() << "'s cards: " << endl;
        player->printCards();
        cout << player->getName() << "'s value: " << player->getValue() << endl;

        if (player->getValue() > dealer->getValue() || dealer->getValue() > 21) {
            cout << "You won!" << endl;
            changeChips(stake);
        } else if (player->getValue() == dealer->getValue()){
            cout << "Draw." << endl;
        }
        else{
            cout << "You lost!" << endl;
            changeChips(-stake);
        }
    }

    else{
        cout << "Dealer's cards: " << endl;
        dealer->printCards();
        cout << "Dealer's value: " << dealer->getValue() << endl << endl;
        cout << player->getName() << "'s cards: " << endl;
        player->printCards();
        cout << player->getName() << "'s value: " << player->getValue() << endl;
        cout << "Busted! You lost." << endl;
        changeChips(-stake);
    }
}

Game::Game(string name) {
    ifstream input("../src/save.txt");
    bool first_output = true;
    bool used = false;
    player_name = name;
    if(input.is_open()) {
        string line;
        vector <string> arguments;
        while (!input.eof()) {
            getline(input, line);
            stringstream ss(line);
            string word;
            while (ss >> word) {
                arguments.push_back(word);
            }
            if (arguments.at(0) ==  player_name){

                this->chips = stoi(arguments.at(1));
                used = true;
            }
            else{
                if (first_output){
                    ofstream output("../src/save.txt");
                    output << arguments.at(0) << " " << arguments.at(1);
                    output.close();
                    first_output = false;
                }
                else{
                    ofstream output("../src/save.txt", ios::app);
                    output << arguments.at(0) << " " << arguments.at(1);
                    output.close();
                }
            }
            arguments.clear();
        }
        input.close();
    }
    if (!used){
        this->chips = 100;
    }
}

Game::Game() {
    player_name = "Player";
    this->chips = 100;
}

void Game::setChips(int chips) {
    this->chips = chips;
}

int Game::getChips() {
    return chips;
}

void Game::changeChips(int change){
    chips += change;
}

Game::~Game() {
    if (player_name != "Player"){
        ofstream output("../src/save.txt", ios::app);
        output << endl << player_name << " " << chips;
        output.close();
    }
}




//
// Created by Pyrus on 21.12.2021.
//

#include "../include/Deck.h"

Deck::Deck(){
    ifstream input("../src/cards.txt");
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
            deck.emplace_back(arguments.at(0), stoi(arguments.at(1)), arguments.at(2));
            arguments.clear();
        }
        input.close();
        current_amount = deck.size();
    }
    else {
        cout << "Error opening file cards.txt" << endl;
        exit(1);
    }

}

Deck::~Deck() {
    deck.clear();
    vector<Card>().swap(deck);  //Clearing memory taken by vector deck
}

void Deck::fillDeck() {
    ifstream input("../src/cards.txt");
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
            deck.emplace_back(arguments.at(0), stoi(arguments.at(1)), arguments.at(2));
            arguments.clear();
        }
        input.close();
        current_amount = deck.size();
    }
    else {
        cout << "Error opening file cards.txt" << endl;
        exit(1);
    }
}

void Deck::shuffleDeck() {
    srand(unsigned(time(NULL)));
    random_shuffle(deck.begin(), deck.end());
}

Card Deck::drawCard() {
    Card drawn = deck.at(deck.size() - 1);
    deck.pop_back();
    current_amount = deck.size();
    return drawn;
}

int Deck::getAmount() {
    return current_amount;
}

Card Deck::getCard(int n) {
    return deck.at(n);
}

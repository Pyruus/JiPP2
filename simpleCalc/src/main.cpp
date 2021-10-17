//
// Created by Pyrus on 15.10.2021.
//

#include "calc.h"
#include <string.h>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    // Sprawdzenie czy został przekazany parametr
    if (argv[1] == NULL){
        cout << "Brak polecenia." << endl << endl;
        help();
    }
    // Sprawdzenie czy został przekazany odpowiedni parametr
    else if (!strcmp(argv[1], "add")) {
        // Sprawdzenie czy zosatała przekazana odpowiedznia ilosc parametrow
        if (argv[2] == NULL || argv[3] == NULL || argv[4] != NULL){
            cout << "Bledna ilosc danych" << endl << endl;
            help();
        }

        else{
            cout << add(stoi(argv[2]), stoi(argv[3]));
        }
    }

    else if(!strcmp(argv[1], "subtract")){
        if (argv[2] == NULL || argv[3] == NULL || argv[4] != NULL){
            cout << "Bledna ilosc danych" << endl << endl;
            help();
        }

        else{
            cout << subtract(stoi(argv[2]), stoi(argv[3]));
        }
    }

    else if(!strcmp(argv[1], "volume")){
        if (argv[2] == NULL || argv[3] == NULL || argv[4] == NULL || argv[5] == NULL || argv[6] != NULL){
            cout << "Bledna ilosc danych" << endl << endl;
            help();
        }

        else{
            cout << volume(stoi(argv[2]), stoi(argv[3]), stoi(argv[4]), stoi(argv[5]));
        }
    }

    else if(!strcmp(argv[1], "help")){
        help();
    }

    else{
        cout << "Bledne polecenie." << endl << endl;
        help();
    }


}

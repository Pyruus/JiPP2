//
// Created by Pyrus on 15.10.2021.
//

#include <iostream>
#include "calc.h"

using namespace std;

int add(int a, int b){
    return a+b;
}

int subtract(int a, int b){
    return a-b;
}

int volume(int a, int b, int h, int wys){
    int field = (a+b)*h/2;
    return field*wys;
}

void help(){
    cout << "Simple Calculator"<< endl;
    cout << "simpleCalc [nazwa dzialania]"<< endl << endl;
    cout << "Dzialania: "<< endl;
    cout << "add [a] [b]"<< endl;
    cout << "   Dodawanie dwoch liczb ([a] i [b]) calkowitych."<< endl;
    cout << "subtract [a] [b]"<< endl;
    cout << "   Odejmowanie dwoch liczb ([a] i [b]) calkowitych."<< endl;
    cout << "volume [a] [b] [h] [H]"<< endl;
    cout << "   Obliczenie objetosci graniastoslupa prostego o wysokosci ([H]) oraz o podstawie trapezu o podstawach ([a] i [b]) i wysykosci ([h])."<< endl;
    cout << "help" << endl;
    cout << "   Wyswietelenie dokumentacji"<< endl;
}
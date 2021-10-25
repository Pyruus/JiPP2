//
// Created by pyrus on 10/25/21.
//
#include <iostream>
#include "Punkt.h"
#include "Prostopadloscian.h"
#include "Kula.h"

using namespace std;

int main(){
    Punkt points (1, 2, 3, 4);
    cout << points.distance() << endl;

    Prostopadloscian prost (4, 3, 2);
    cout << prost.field() << endl;

    Kula kula(12);
    cout << kula.volume() << endl;

    return 0;
}
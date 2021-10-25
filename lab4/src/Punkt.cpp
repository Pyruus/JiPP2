//
// Created by pyrus on 10/25/21.
//

#include "Punkt.h"

double Punkt::distance() {
    double result = sqrt(pow(abs(first.x - second.x),2) + pow(abs(first.y - second.y),2));
    return result;
}

Punkt::Punkt(int x1, int y1, int x2, int y2) {
    this->first.x = x1;
    this->first.y = y1;
    this->second.x = x2;
    this->second.y = y2;
}

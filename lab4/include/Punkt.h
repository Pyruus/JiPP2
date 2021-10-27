//
// Created by pyrus on 10/25/21.
//

#ifndef JIPP_PUNKT_H
#define JIPP_PUNKT_H

#include <math.h>
#include <iostream>

using namespace std;

class Punkt {
public:
    struct point{
        int x;
        int y;
    }first, second;

    Punkt(int x1, int y1, int x2, int y2);

    double distance();

};


#endif //JIPP_PUNKT_H

//
// Created by pyrus on 11/22/21.
//

#ifndef LAB7_CIRCLE_H
#define LAB7_CIRCLE_H

#include "Figure.h"
#include <math.h>

class Circle : public Figure{
protected:
    double r;

public:
//    Circle(string name, string color, double r);
    Circle(double r);

    double getArea();
};


#endif //LAB7_CIRCLE_H

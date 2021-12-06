//
// Created by pyrus on 11/22/21.
//

#ifndef LAB7_RECTANGLE_H
#define LAB7_RECTANGLE_H

#include "Figure.h"

class Rectangle : public Figure{
protected:
    double x, y;

public:
//    Rectangle(string name, string color, double x, double y);
    Rectangle (double x, double y);

    double getArea();
};


#endif //LAB7_RECTANGLE_H
